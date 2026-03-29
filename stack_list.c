#include<stdio.h>
#define SIZE 100

int my_stack[SIZE];
int top=0;
int list[] ={50,200,30,150,80,120};
int n=6;

int stack_empty(){
if(top==0)
    return 1;
    else
    return 0;

}

void push(int a){
    my_stack[top]=a;
    top++;
}

int pop(){
    top--;
    return my_stack[top];
}

int main(){
    int i,x;

  for(i=0;i<n;i++){
        if(list[i] > 100)
        push(list[i]);
    }

    while(!stack_empty()){
        x=pop();
        printf("%d\n",x);
    }
}
