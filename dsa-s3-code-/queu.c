#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void insert();
void delete_element();
void display();

void insert() {
    int value;

    if (rear == SIZE - 1) {
        printf("Queue overflow.\n");
        return;
    }

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    if (front == -1) {
        front = 0;
    }

    rear++;
    queue[rear] = value;
    printf("%d inserted into the queue.\n", value);
}

void delete_element() {
    if (front == -1 || front > rear) {
        printf("Queue underflow.\n");
        return;
    }

    printf("Deleted value: %d\n", queue[front]);

    front++;

    if (front > rear) {
        front = -1;
        rear = -1;
        printf("Queue has been reset as it is now empty.\n");
    }
}

void display() {
    int i;

    if (front == -1) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements are: ");
    for (i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n--- Queue Menu ---\n");
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
                delete_element();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting the program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
