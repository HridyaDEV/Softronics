


// implementing stack using array

	#include <stdio.h>
#define MAX 5 

int stack[MAX];  
int top = -1;    


void push(int value) {
    if (top == MAX - 1) {  
        printf("Stack is full. Cannot push %d.\n", value);
    } else {
        top++;               
        stack[top] = value;  
        printf("Pushed %d to stack.\n", value);
    }
}


int pop() {
    if (top == -1) {  
        printf("Stack is empty. Cannot pop.\n");
        return -1;   
    } else {
        int value = stack[top]; 
        top--;                  
        return value;           
    }
}


void peek() {
    if (top == -1) {  
        printf("Stack is empty. No top element to show.\n");
    } else {
        printf("Top element: %d\n", stack[top]);  
    }
}


int main() {
    
    push(10);  
    push(20);  
    peek();    

    int poppedValue = pop();  
    printf("Popped: %d\n", poppedValue);  

    peek();    

    return 0;
}

