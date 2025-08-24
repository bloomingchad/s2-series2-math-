#include <stdio.h>

int stack[100], choice, n, top, x, i;
void push(void);
void pop(void);
void display(void);
void peak(void);
int main() {
  top = -1;
  printf("\nEnter the size of the stack [max=100]: ");
  scanf("%d", &n);
  printf("1.PUSH\n2.POP\n3.DISPLAY\n4.PEAK\n");
  do {
    printf("\nEnter the choice: ");
    scanf("%d", &choice);
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
      peak();
      break;
    default:
      printf("\n\tPlease enter a valid choice!");
    }
  } while (choice >= 1 && choice <= 4);
  return 0;
}

void push() {
  if (top >= n - 1) {
    printf("\n\tStack overflow");
  } else {
    printf("Enter a value to be pushed: ");
    scanf("%d", &x);
    top++;
    stack[top] = x;
  }
}

void pop() {
  if (top <= -1) {
    printf("\n\tStack underflow");
  } else {
    printf("\n\tThe popped element is %d", stack[top]);
    top--;
  }
}

void peak() {
  if (top <= -1) {
    printf("Stack is empty");
  } else {
    printf("Peak element = %d", stack[top]);
  }
}

void display() {
  if (top >= 0) {
    printf("\nThe elements in stack are:\n");
    for (i = top; i >= 0; i--) {
      printf("\n%d", stack[i]);
    }
    printf("\nNext choice?");
  } else {
    printf("Stack is empty");
  }
}
