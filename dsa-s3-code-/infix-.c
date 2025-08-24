#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define MAX 100 

int prece(char c) {
    switch(c) {
        case '^':
          return 3;
        case '*':
        case '/':
          return 2;
        case '+':
        case '-':
          return 1;
        default:
          return 0;
    }
}

char stack[MAX];
char result[MAX];
int top = -1;
int j = 0;

int stackIsEmpty() {
    return top == -1;
}

void push(char op) {
    if (top >= MAX - 1) {
        exit(1);
    }
    stack[++top] = op;
}

char pop() {
    if (stackIsEmpty()) {
        exit(1);
    }
    return stack[top--];
}

void append_to_result(char c) {
    if (j >= MAX - 1) {
        exit(1);
    }
    result[j++] = c;
}

int main() {
    char expr[100];
    fgets(expr, sizeof(expr), stdin);
    expr[strcspn(expr, "\n")] = 0;

    int expr_length = strlen(expr);
    for (int i = 0; i < expr_length; i++) {
        char current_char = expr[i];

        if (isspace(current_char)) {
            continue;
        }

        if (isalnum(current_char)) {
            append_to_result(current_char);
        } else if (current_char == '(') {
            push(current_char);
        } else if (current_char == ')') {
            while (!stackIsEmpty() && stack[top] != '(') {
                append_to_result(pop());
            }
            if (!stackIsEmpty() && stack[top] == '(') {
                pop();
            }
        } else {
            while (
                !stackIsEmpty()   &&
                stack[top] != '(' && 
                prece(current_char) <= prece(stack[top])
            ) {
                if (
                    current_char == '^' &&
                    prece(current_char) == prece(stack[top])
                ) {
                    break;
                }
                append_to_result(pop());
            }
            push(current_char);
        }
    }

    while (!stackIsEmpty()) {
        append_to_result(pop());
    }

    result[j] = '\0';
    printf("%s\n", result);

    return 0;
}