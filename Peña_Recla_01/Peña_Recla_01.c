/* List Implementation (Linked List) - Programming Exercises 01
By Mark Jaily  Peña & Lance Andrei Recla 

The variable type of our linked lists is 99-lettered string, integer and character
 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

// Structure to represent each node in the linked list
struct Node {
    char data[100];
    struct Node* next;
};


// Function prototypes
void readFromFile(struct Node** head);
void saveToFile(struct Node* head);
void addItemAtStart(struct Node** head, char* item);
void addItemAtEnd(struct Node** head, char* item);
void addItemAtPosition(struct Node** head, char* item, int position);
void deleteItem(struct Node** head, char* item);
void displayList(struct Node* head);
void deleteList(struct Node** head);

int main() {
    struct Node* head = NULL; // Initialize an empty list
    int choice;
    char item[100];
    int position;

    // Load list from file
    readFromFile(&head);

    do {
        //Main List MENU Interface
        system("cls");
        printf("\n=================================================================================================================\n");
        printf("                         List Implementation (Linked List) - Programming Exercises 01\n");
        printf("                            Created by Mark Jaily H. Pena and Lance Andrei E. Recla\n");
        printf("        (Please be aware that unanticipated actions or inputs may cause program issues or termination)\n");
        printf("=================================================================================================================\n");
        printf("\nList MENU\n\n");
        printf("[1] Add Item\n");
        printf("[2] Delete Item\n");
        printf("[3] Display List\n");
        printf("[4] Delete List\n");
        printf("[0] Exit Program\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: //Add item
                printf("Please enter the item to be added: ");
                scanf(" %[^\n]", item);
                system("cls");
                displayList(head);
                printf("\n\nWhere to add the item?\n");
                printf("[1] Start of the list\n");
                printf("[2] End of the list\n");
                printf("[3] Specific position\n");
                printf("[0] Cancel\n");
                printf("Enter choice: ");
                scanf("%d", &position);
                switch(position) {
                    case 1:
                        addItemAtStart(&head, item);
                        break;
                    case 2:
                        addItemAtEnd(&head, item);
                        break;
                    case 3:
                        printf("Enter the position to add: ");
                        scanf("%d", &position);
                        addItemAtPosition(&head, item, position);
                        break;
                    case 0:
                        break;
                    default:
                        printf("\nInvalid choice! Press any key to continue: ");
                        getch();
                }
                saveToFile(head);
                break;
            case 2: //Delete item
                system("cls"); 
                displayList(head);
                printf("\n\nPlease enter the item to be deleted: ");
                scanf(" %[^\n]", item);
                deleteItem(&head, item);
                saveToFile(head);
                printf("\nPress any key to continue: ");
                getch();
                break;
            case 3: //Displays list
                system("cls");
                displayList(head);
                printf("\n\nPress any key to continue: ");
                getch();
                break;
            case 4: //Deletes list
                system("cls");
                deleteList(&head);
                printf("The list has been emptied!\n");
                saveToFile(head);
                printf("\n\nPress any key to continue: ");
                getch();
                break;
            case 0: //Exits program
                printf("\nExiting program...\n");
                break;
            default: //Displays error message if invalid choice
                printf("\nInvalid choice! Press any key to continue: ");
                getch();
        }
    } while(choice != 0);

    // Free memory used by the list
    deleteList(&head);

    return 0;
}

//Function to read file to use as database  
void readFromFile(struct Node** head) {
    FILE* file = fopen("listItems.txt", "r");

    char line[100];
    while (fgets(line, sizeof(line), file) != NULL) {
        // Remove newline character
        line[strcspn(line, "\n")] = 0;
        addItemAtEnd(head, line);
    }

    fclose(file);
}

// Function to create/save the linked list to a file
void saveToFile(struct Node* head) {
    FILE* file = fopen("listItems.txt", "w");
    if (file == NULL) {
        printf("File cannot be opened for writing.\n");
        return;
    }

    while (head != NULL) {
        fprintf(file, "%s\n", head->data);
        head = head->next;
    }

    fclose(file);
}

//Function to add the item at start of linked list 
void addItemAtStart(struct Node** head, char* item) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->data, item);
    newNode->next = *head;
    *head = newNode;
}

//Function to add the item at end of linked list 
void addItemAtEnd(struct Node** head, char* item) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->data, item);
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

//Function to add the item at any position given 
void addItemAtPosition(struct Node** head, char* item, int position) {
    if (position <= 0) { 
        printf("Invalid position!\n");
        printf("\nPress any key to continue: ");
        getch();
        return;
    }

    if (position == 1) {
        addItemAtStart(head, item);
        return;
    }

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->data, item);

    struct Node* temp = *head;
    int i = 1;
    while (temp != NULL && i < position - 1) {
        temp = temp->next;
        i++;
    }

    if (temp == NULL) { //If position does not exist, adds the item at the end
        printf("Position does not exist, adding at the end.\n");
        addItemAtEnd(head, item);
        printf("\nPress any key to continue: ");
        getch();
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

//Function to delete an item from the linked list
void deleteItem(struct Node** head, char* item) {
    if (*head == NULL) {
        printf("The list is empty!\n");
        return;
    }

    struct Node* temp = *head;
    struct Node* prev = NULL;
    int position = 1; // Initialize position counter

    while (temp != NULL && strcmp(temp->data, item) != 0) {
        prev = temp;
        temp = temp->next;
        position++; // Increment position for each node traversed
    }

    if (temp == NULL) {
        printf("The list contains no such element!\n");
        return;
    }

    if (prev == NULL)
        *head = temp->next;
    else
        prev->next = temp->next;

    printf("The element %s, which is at position %d, has been deleted\n", temp->data, position);
    free(temp);
}

//Function to display linked list
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("The list is empty!\n");
        return;
    }

    printf("\nList contents:\n");
    int position = 1;
    while (head != NULL) {
        printf("\nPosition %d: %s", position++, head->data);
        head = head->next;
    }
}

//Function to delete current list
void deleteList(struct Node** head) {
    struct Node* current = *head;
    struct Node* next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    *head = NULL;
}
