/* Stack Implementation - Programming Exercises 02
By Mark Jaily Peña & Lance Andrei Recla 

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h> // For getch() function
#include <windows.h> // For Sleep() function

// Node structure for the stack
typedef struct Node {
    char data[50];
    struct Node* next;
} Node;

// Stack structure
typedef struct {
    Node* top;
} Stack;

// Function prototypes
void push(Stack* stack, const char* data);
char* pop(Stack* stack);
int is_empty(Stack* stack);
int is_full(Stack* stack); 
char* top(Stack* stack);
void make_null(Stack* stack);
void add_kitchenware(Stack* stack);
void wash_kitchenware(Stack* stack);
void top_kitchenware(Stack* stack);
void wash_all(Stack* stack);
void readFromFile(Stack* stack);
void saveToFile(Stack* stack);

int main() {
    Stack stack;
    stack.top = NULL;

    // Load stack from file
    readFromFile(&stack);

    int choice;
    do {   
        // Display the main menu interface
        system("cls");
        printf("\n=================================================================================================================\n");
        printf("                              Stack Implementation - Programming Exercises 02\n");
        printf("                            Created by Mark Jaily H. Pena and Lance Andrei E. Recla\n");
        printf("        (Please be aware that unanticipated actions or inputs may cause program issues or termination)\n");
        printf("=================================================================================================================\n"); 
        printf("\nKitchenware Washing Machine\n");
        printf("[1] Add kitchenware\n");
        printf("[2] Wash kitchenware\n");
        printf("[3] Top kitchenware\n");
        printf("[4] Wash all\n");
        printf("[0] Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        // Perform actions based on user's choice
        switch (choice) {
            case 1: // Add Kitchenware
                add_kitchenware(&stack);
                saveToFile(&stack);
                printf("\nPress any key to continue: ");
                getch();
                break;
            case 2: // Wash Kitchenware
                wash_kitchenware(&stack);
                saveToFile(&stack);
                printf("\nPress any key to continue: ");
                getch();
                break;
            case 3: // Identify Top Kitchenware
                top_kitchenware(&stack);
                printf("\nPress any key to continue: ");
                getch();
                break;
            case 4: // Wash all Kitchenware
                wash_all(&stack);
                saveToFile(&stack);
                printf("\nPress any key to continue: ");
                getch();
                break;
            case 0: // Exit Message
                printf("\nExiting the kitchenware washing machine...\n");
                break;
            default: // Error Handling of Choice
                printf("Invalid choice. Please choose again. Press any key to continue: \n");
                getch();
        }
    } while (choice != 0);

    make_null(&stack); // Free memory before exiting
    return 0;
}

// Function to push operation
void push(Stack* stack, const char* data) {
    Node* new_node = (Node*)malloc(sizeof(Node)); // Allocate memory for a new node
    if (new_node == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    strcpy(new_node->data, data); // Copy data and link the new node
    new_node->next = stack->top;
    stack->top = new_node;
}

// Function to pop operation
char* pop(Stack* stack) {
    if (is_empty(stack))
        return NULL;
    
    // Remove top node and return its data
    Node* temp = stack->top;
    char* data = strdup(temp->data);
    stack->top = stack->top->next;
    free(temp);
    return data;
}

// Function to check if the stack is empty
int is_empty(Stack* stack) {
    return stack->top == NULL;
}

// Check if the stack is full 
int is_full(Stack* stack) {
    Node* temp = (Node*)malloc(sizeof(Node));
    if (temp == NULL) {
        return 1; // Memory allocation failed, stack is full
    }
    free(temp);
    return 0; // Memory allocation successful, stack is not full
}

// Function to return the top element of the stack
char* top(Stack* stack) {
    if (is_empty(stack))
        return NULL;
    return stack->top->data;
}

// Function to make the stack empty
void make_null(Stack* stack) {
    while (!is_empty(stack))
        pop(stack);
}

// Function to add kitchenware to the stack
void add_kitchenware(Stack* stack) {
    if (stack->top && is_full(stack)) {
        printf("The STACK is FULL. Cannot add kitchenware.\n");
        return;
    }

    // Get kitchenware input from user and add to stack
    char item[50];
    printf("Enter kitchenware to be washed: ");
    scanf(" %[^\n]", item);
    if (stack->top && strlen(item) >= sizeof(stack->top->data)) {
        printf("Kitchenware name too long.\n");
    } else {
        push(stack, item);
        printf("%s added to the stack.\n", item);
    }
}

// Function to wash kitchenware 
void wash_kitchenware(Stack* stack) {
    if (is_empty(stack)) {
        printf("The STACK is EMPTY. No more kitchenware to wash.\n");
        return; 
    }

    char* item = pop(stack);
    printf("%s is being washed.\n", item);
    free(item); 
}

// Function to display top kitchenware
void top_kitchenware(Stack* stack) {
    if (is_empty(stack)) {
        printf("The STACK is EMPTY. No kitchenware to wash.\n");
    } else {
        printf("%s is next to be washed.\n", top(stack));
    }
}

// Function to wash all kitchenware
void wash_all(Stack* stack) {
    if (is_empty(stack)) {
        printf("The STACK is EMPTY. No kitchenware to wash.\n");
    } else {
        printf("Washing all kitchenware:\n");
        while (!is_empty(stack)) {
            wash_kitchenware(stack);
            Sleep(1500); // Sleep for 1.5 seconds for visual effect
        } 
        printf("All kitchenware has been washed.\n");
    }
}

// Function to read from file and load the stack in reverse order
void readFromFile(Stack* stack) {
    FILE* file = fopen("kitchenware.txt", "r");
    if (file == NULL) {
        printf("File cannot be opened for reading.\n");
        return;
    }

    char lines[100][50];
    int count = 0;
    char line[50];
    while (fgets(line, sizeof(line), file) != NULL && count < 100) {
        // Remove newline character
        line[strcspn(line, "\n")] = 0;
        strcpy(lines[count], line);
        count++;
    }

    fclose(file);

    // Push lines onto the stack in reverse order
    for (int i = count - 1; i >= 0; i--) {
        push(stack, lines[i]);
    }
}


// Function to save the stack to a file
void saveToFile(Stack* stack) {
    FILE* file = fopen("kitchenware.txt", "w");
    if (file == NULL) {
        printf("File cannot be opened for writing.\n");
        return;
    }

    Node* current = stack->top;
    while (current != NULL) {
        fprintf(file, "%s\n", current->data);
        current = current->next;
    }

    fclose(file);
}
