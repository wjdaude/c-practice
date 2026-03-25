#include <stdio.h>

int my_stack[5];
int top = 0;

void push(int a)
{
    my_stack[top] = a;
    top++;
}

pop()
{
    top--;
    return my_stack[top];
}

int main()
{
    push(90);
    push(30);
    push(70);

    printf("%d", pop());
}