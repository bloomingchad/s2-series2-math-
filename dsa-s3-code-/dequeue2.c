#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAX 6

int dequeue[MAX];
int front = -1;
int rear = -1;

enum return_code {
    success,
    failure
};

void welcome_user() {
    puts("welcome user!");
}

void thank_user_when_exit() {
    puts("thanks you for using the app!");
}

void exitApp(enum return_code code) {
    thank_user_when_exit();
    if (code == success) exit(0);
    else                 exit(1);
}

int read_num(char* msg) {
    int to_read_num;
    printf("%s: ", msg);
    scanf("%d", &to_read_num);
    return to_read_num;
}

void operation_success_show(const char* op) {
    printf(">>>  [%s] operation success!\n", op);
}

void handle_error(const char* op, const char* reason) {
    printf(">>>  [%s] operation failed, [%s]\n", op, reason);
    puts("try again!");
}

bool dequeue_isEmpty() {
    return front == -1;
}

bool dequeue_isFull() {
    return (rear + 1) % MAX == front;
}

void dequeue_push_front(int num_to_insert) {
    if(dequeue_isFull()) {
        handle_error("push_front", "dequeue is full!!");
        return;
    }
    
    if (dequeue_isEmpty()) {
        front = 0;
        rear = 0;
    } else {
        front = (front - 1 + MAX) % MAX;  // Move front backward
    }
    
    dequeue[front] = num_to_insert;  // Insert the element
    operation_success_show("push_front");
}

void dequeue_push_rear(int num_to_insert) {
    if(dequeue_isFull()) {
        handle_error("push_rear", "dequeue is full!!");  // Fix: was "empty"
        return;
    }
    
    if (dequeue_isEmpty()) {
        front = 0;
        rear = 0;
    } else {
        rear = (rear + 1) % MAX;  // Move rear forward
    }
    
    dequeue[rear] = num_to_insert;  // Insert the element
    operation_success_show("push_rear");
}

void dequeue_pop_front() {
    if(dequeue_isEmpty()) {
        handle_error("pop_front", "dequeue is empty!!");
        return;
    }
    
    if (front == rear) {  // Only one element
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % MAX;  // Move front forward
    }
    
    operation_success_show("pop_front");
}


void dequeue_pop_rear() {
    if(dequeue_isEmpty()) {
        handle_error("pop_rear", "dequeue is empty!!");
        return;
    }
    
    if (front == rear) {  // Only one element
        front = -1;
        rear = -1;
    } else {
        rear = (rear - 1 + MAX) % MAX;  // Move rear backward
    }
    
    operation_success_show("pop_rear");
}

void dequeue_display() {
    if(dequeue_isEmpty()) {
        handle_error("display", "is empty");
        puts("{ }");
        return;
    }

    printf("    {");

    for(int i = front; i <= rear; i++) {
        if (i == rear) {
            printf("%d", dequeue[i]);
        } else {
            printf("%d, ", dequeue[i]);
        }
    }
    puts("}");
}

void draw_main_menu() {
    puts("dequeue demo!");
    puts("1. push_front");
    puts("2. push_rear");
    puts("3. pop_front");
    puts("4. pop_rear");    
    puts("5. display");
    puts("6. quit app");
}

void draw_separator() {
    puts("-------------------------------------");
}

int main() {
    welcome_user();
    draw_main_menu();

    int menu_choice;
    int num_to_insert;
    while (true) {
        //draw_separator();
        //draw_main_menu();
        menu_choice = read_num("please enter operation");
        switch(menu_choice) {
            case 1:
                num_to_insert = read_num("enter num to push");
                dequeue_push_front(num_to_insert);
                break;
            case 2:
                num_to_insert = read_num("enter num to push");
                dequeue_push_rear(num_to_insert);
                break;
            case 3:
                dequeue_pop_front();
                break;
            case 4:
                dequeue_pop_rear();
                break;
            case 5:
                dequeue_display();
                break;
            case 6:
                exitApp(success);
                break;
            default:
               puts("please enter correct choice!");
        }
    }
}