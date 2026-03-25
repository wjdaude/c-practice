#include <stdio.h>

int my_stack[5];
int top = 0;

int stack_empty()
{
    if (top == 0)
        return 1;
    else
        return 0;
}

int stack_full()
{   
    if (top >= 5)
        return 1;
    else
        return 0;
}

void push(int a)
{
    if (stack_full()){
        printf("꽉차있어서 못넣음");
    }else{
        my_stack[top] = a;
        top++;
    }
}

int pop()
{
    if (stack_empty())
        printf("비어있어서 못꺼냄");
    else
    {
        top--;
        return my_stack[top];
    }
}

int main()
{
    push(90);
    push(30);
    push(70);

    printf("%d", pop());
}