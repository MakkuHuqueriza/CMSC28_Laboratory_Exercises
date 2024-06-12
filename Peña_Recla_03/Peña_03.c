/* Queue Implementation - Programming Exercises 03 By Mark Jaily Peña 
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <conio.h> // For getch() function
#include <windows.h> // For Sleep() function

// Structure to represent each node in the queue
typedef struct QueueNode {
    char name[50];
    float total_amount;
    struct QueueNode* next;
} QueueNode;

// Structure to represent the queue
typedef struct Queue {
    QueueNode* front;
    QueueNode* rear;
} Queue;

// Function prototypes for queue operations
Queue* INIT();
bool EMPTY(Queue* Q);
void ENQUEUE(char name[], float total_amount, Queue* Q);
void DEQUEUE(Queue* Q);
void FRONT(Queue* Q);

// Function prototypes for checkout counter system
void fall_in_line(Queue* Q);
void serve_customer(Queue* Q);
void next_customer(Queue* Q);
void closing_time(Queue* Q);

int main() {
    Queue* Q = INIT(); // Initialize the queue

    int choice;
    do { 
        //Main Menu Interface
        system("cls");
        printf("\n=================================================================================================================\n");
        printf("                              Queue Implementation - Programming Exercises 03\n");
        printf("                                       Created by Mark Jaily H. Pena\n");
        printf("        (Please be aware that unanticipated actions or inputs may cause program issues or termination)\n");
        printf("=================================================================================================================\n"); 
        printf("\n[The Barbequeue] Counter 0:\n");
        printf("[1] Fall in line\n");
        printf("[2] Serve customer\n");
        printf("[3] Next customer\n");
        printf("[4] Closing time\n");
        printf("[0] Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                fall_in_line(Q);
                break;
            case 2:
                serve_customer(Q);
                printf("\nPress any key to continue: ");
                getch();
                break;
            case 3:
                next_customer(Q);
                printf("\nPress any key to continue: ");
                getch();
                break;
            case 4:
                closing_time(Q);
                printf("\nPress any key to continue: ");
                getch();
                break;
            case 0:
                printf("Exiting the checkout system.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                printf("\nPress any key to continue: ");
                getch();
        }
    } while(choice != 0);

    // Free memory used by the queue
    while (!EMPTY(Q))
        DEQUEUE(Q);
    free(Q);

    return 0;
}

// Function to initialize an empty queue
Queue* INIT() {
    Queue* Q = (Queue*)malloc(sizeof(Queue));
    Q->front = Q->rear = NULL;
    return Q;
}

// Function to check if the queue is empty
bool EMPTY(Queue* Q) {
    return Q->front == NULL;
}

// Function to add a customer to the queue
void ENQUEUE(char name[], float total_amount, Queue* Q) {
    QueueNode* newNode = (QueueNode*)malloc(sizeof(QueueNode));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    strcpy(newNode->name, name);
    newNode->total_amount = total_amount;
    newNode->next = NULL;

    if (Q->rear == NULL) {
        Q->front = Q->rear = newNode;
    } else {
        Q->rear->next = newNode;
        Q->rear = newNode;
    }
}

// Function to remove a customer from the queue
void DEQUEUE(Queue* Q) {
    if (EMPTY(Q)) {
        printf("The QUEUE is EMPTY. No orders to serve.\n");
        return;
    }
    QueueNode* temp = Q->front;
    Q->front = Q->front->next;
    if (Q->front == NULL) {
        Q->rear = NULL;
    }
    printf("Now serving %s with total amount payable of %.4f.\n", temp->name, temp->total_amount);
    free(temp);
}

// Function to get the name and total amount of a customer at the front of the queue
void FRONT(Queue* Q) {
    if (EMPTY(Q)) {
        printf("The QUEUE is EMPTY. No order to serve.\n");
        return;
    }
    printf("Next order: For %s with total amount payable of %.4f.\n", Q->front->name, Q->front->total_amount);
}

// Function for the "Fall in line" menu option
void fall_in_line(Queue* Q) {
    char name[50];
    float total_amount;

    printf("Enter customer's name: ");
    scanf(" %[^\n]", name);
    printf("Enter total amount of items to be paid: ");
    scanf("%f", &total_amount);

    ENQUEUE(name, total_amount, Q);
}

// Function for the "Serve customer" menu option
void serve_customer(Queue* Q) {
    DEQUEUE(Q);
}

// Function for the "Next customer" menu option
void next_customer(Queue* Q) {
    FRONT(Q);
}

// Function for the "Closing time" menu option
void closing_time(Queue* Q) {
    system("cls");
    if (EMPTY(Q)) {
        printf("The QUEUE is EMPTY. No customer/s to serve.\n");
        return;
    }

    while (!EMPTY(Q)){
        DEQUEUE(Q);
        Sleep(1500); // Sleep for 1.5 seconds for visual effect
    }
    printf("All customers have been served.\n");
}
