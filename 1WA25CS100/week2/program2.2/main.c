#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

// Insert an element
void insert() {
    int value;

    // Check overflow
    if ((rear + 1) % MAX == front) {
        printf("Queue Overflow! Circular Queue is full.\n");
        return;
    }

    printf("Enter the element to insert: ");
    scanf("%d", &value);

    if (front == -1) {
        front = 0;
        rear = 0;
    } else {
        rear = (rear + 1) % MAX;
    }

    queue[rear] = value;
    printf("%d inserted successfully.\n", value);
}

// Delete an element
void delete() {
    int value;

    // Check underflow
    if (front == -1) {
        printf("Queue Underflow! Circular Queue is empty.\n");
        return;
    }

    value = queue[front];

    if (front == rear) {
        // Queue becomes empty
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % MAX;
    }

    printf("%d deleted successfully.\n", value);
}

// Display the queue
void display() {
    int i;

    // Check underflow
    if (front == -1) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Circular Queue elements: ");

    i = front;
    while (1) {
        printf("%d ", queue[i]);

        if (i == rear)
            break;

        i = (i + 1) % MAX;
    }

    printf("\n");
}

// Main function
int main() {
    int choice;

    while (1) {
        printf("\n--- CIRCULAR QUEUE ---\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert();
                break;

            case 2:
                delete();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

