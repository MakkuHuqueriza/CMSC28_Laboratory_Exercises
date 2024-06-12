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
    char data[69];
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

int main() {
    Stack stack;
    stack.top = NULL;

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
            case 1:
                add_kitchenware(&stack);
                printf("\nPress any key to continue: ");
                getch();
                break;
            case 2:
                wash_kitchenware(&stack);
                printf("\nPress any key to continue: ");
                getch();
                break;
            case 3:
                top_kitchenware(&stack);
                printf("\nPress any key to continue: ");
                getch();
                break;
            case 4:
                wash_all(&stack);
                printf("\nPress any key to continue: ");
                getch();
                break;
            case 0:
                printf("\nExiting the kitchenware washing machine...\n");
                break;
            default:
                printf("Invalid choice. Please choose again. Press any key to continue: \n");
                getch();
        }
    } while (choice != 0);

    make_null(&stack); // Free memory before exiting
    return 0;
}

// Push operation
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

// Pop operation
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

// Check if the stack is empty
int is_empty(Stack* stack) {
    return stack->top == NULL;
}

// Check if the stack is full (memory allocation failure)
int is_full(Stack* stack) {
    Node* temp = (Node*)malloc(sizeof(Node));
    if (temp == NULL) {
        return 1; // Memory allocation failed, stack is full
    }
    free(temp);
    return 0; // Memory allocation successful, stack is not full
}

// Return the top element of the stack
char* top(Stack* stack) {
    if (is_empty(stack))
        return NULL;
    return stack->top->data;
}

// Make the stack empty
void make_null(Stack* stack) {
    while (!is_empty(stack))
        pop(stack);
}

// Add kitchenware to the stack
void add_kitchenware(Stack* stack) {
    if (stack->top && is_full(stack)) {
        printf("The STACK is FULL. Cannot add kitchenware.\n");
        return;
    }

    // Get kitchenware input from user and add to stack
    char item[69];
    printf("Enter kitchenware to be washed: ");
    scanf("%s", item);
    if (stack->top && strlen(item) >= sizeof(stack->top->data)) {
        printf("Kitchenware name too long.\n");
    } else {
        push(stack, item);
        printf("%s added to the stack.\n", item);
    }
}


// Wash kitchenware
void wash_kitchenware(Stack* stack) {
    if (is_empty(stack)) {
        printf("The STACK is EMPTY. No more kitchenware to wash.\n");
    } else {
        char* item = pop(stack);
        printf("%s is being washed.\n", item);
        free(item); // Free memory allocated by strdup
    }
}

// Display top kitchenware
void top_kitchenware(Stack* stack) {
    if (is_empty(stack)) {
        printf("The STACK is EMPTY. No kitchenware to wash.\n");
    } else {
        printf("%s is next to be washed.\n", top(stack));
    }
}

// Wash all kitchenware
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
