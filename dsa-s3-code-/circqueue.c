#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAX 6

int cqueue[MAX];
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

bool cqueue_isEmpty() {
    return (front == -1 && rear == -1);
}

bool cqueue_isFull() {
    return ((rear + 1 ) % MAX == front);
}

void cqueue_insert(int num_to_insert) {
    if(cqueue_isFull()) {
        handle_error("insert", "cqueue is full!!");
        return;
    }

    if(front == -1) {
        front = 0;
    }

    rear = (rear + 1) % MAX;
    cqueue[rear] = num_to_insert;
    operation_success_show("insert");
}

void cqueue_deletion() {
    if(cqueue_isEmpty()) {
        handle_error("delete", "cqueue is empty!!");
        return;
    }

    if(front == rear) {
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % MAX;
    }
    operation_success_show("delete");
}

void cqueue_display() {
    if(cqueue_isEmpty()) {
        handle_error("display", "is empty");
        puts("{ }");
        return;
    }

    printf("    {");
    
    int i = front;
    for (;;) {

        if (i == rear) {
            printf("%d", cqueue[i]);
            break;
        } else {
            printf("%d, ", cqueue[i]);
        }
        i = ((i+1)% MAX);
    }
    puts("}");
}

void draw_main_menu() {
    puts("circ queue demo!");
    puts("1. insertion");
    puts("2. deletion");
    puts("3. display");
    puts("4. quit app");    
}

void draw_separator() {
    puts("-------------------------------------");
}

int main() {
    welcome_user();
    draw_main_menu();

    int menu_choice;
    while (true) {
        //draw_separator();
        //draw_main_menu();
        menu_choice = read_num("please enter operation");
        switch(menu_choice) {
            case 1: {
                int num_to_insert = read_num("please enter num to insert");
                cqueue_insert(num_to_insert);
                break;
            }
            case 2:
                cqueue_deletion();
                break;
            case 3:
                cqueue_display();
                break;
            case 4:
                exitApp(success);
                break;
            default:
               puts("please enter correct choice!");
        }
    }
}