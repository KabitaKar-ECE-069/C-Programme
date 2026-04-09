#include <stdio.h>

int a[10];
int top = -1;

void push(int val)
{
    if(top == 9)
        printf("Stack is full\n");
    else
    {
        top++;
        a[top] = val;
    }
}

void pop()
{
    if(top >= 0)
    {
        printf("%d\n", a[top]);
        top--;
    }
    else
        printf("Stack is empty\n");
}

int main()
{
    push(10);
    push(20);
    pop();
    pop();

    return 0;
}
