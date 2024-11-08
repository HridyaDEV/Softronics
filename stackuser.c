#include <stdio.h>
#define MAX 5  // Maximum size of the stack

int stack[MAX];  // Array to store stack elements
int top = -1;    // Index of the top element, -1 means the stack is empty

// Push operation: Add an element to the stack
void push() {
    if (top == MAX - 1) {  // Check if the stack is full
        printf("Stack is full. Cannot push.\n");
    } else {
        int value;
        printf("Enter the value to push: ");
        scanf("%d", &value);  // Read the value to push from user
        top++;               // Move top to the next position
        stack[top] = value;  // Add value to the stack
        printf("Pushed %d to stack.\n", value);
    }
}

// Pop operation: Remove the top element from the stack
void pop() {
    if (top == -1) {  // Check if the stack is empty
        printf("Stack is empty. Cannot pop.\n");
    } else {
        int value = stack[top];  // Get the top element
        top--;                   // Move top down
        printf("Popped: %d\n", value);  // Print the popped value
    }
}

// Display stack elements
void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack: ");
        for (int i = 0; i <= top; i++) {  // Loop through stack elements
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

// Main function to perform stack operations based on user input
int main() {
    int choice;  // Variable to store user choice

    // Display menu and perform operations until user chooses to exit
    do {
        printf("\nChoose an operation:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform operation based on user choice
        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);  // Repeat until the user chooses to exit

    return 0;
}
