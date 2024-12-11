#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct stack
{
    int top;
    int cap;
    int *array;
}stack;
stack *create_stack(int cap)
{
    stack *st=(stack*)malloc(sizeof(stack));
    st->cap=cap;
    st->top=-1;
    st->array=(int*)malloc(sizeof(int)*(st->cap));
    return st;
}
void push(stack *st,int data)
{
    if(st->top==(st->cap-1))
    {
       cout<<"stack overflow";
       return;
    }
    st->array[++(st->top)]=data;

}
int pop(stack *st)
{
    if(st->top==-1)
    {
        cout<<"stack is empty";
        return -1;
    }
    else
    {
    int x=st->array[st->top];
    (st->top)--;
    return x;
    }
}
void display(stack *st)
{
     if(st->top==-1)
    {
        cout<<"stack is empty";
    }
    else
    {
        for(int i=(st->top);i>=0;i--)
        {
            cout<<st->array[i]<<" ";
        }
    }
}
int main()
{
    stack *st=create_stack(10);
    push(st,10);
    push(st,12);
    push(st,24);
    push(st,89);
    pop(st);
    display(st);
}