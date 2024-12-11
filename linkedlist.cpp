#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct node
{
    int data;
    struct node *next;
}node;
typedef struct stack{
    struct node *top;
}stack;
stack *intialize_stack()
{
    stack *st=(stack*)malloc(sizeof(stack));
    st->top=NULL;
    return st;
}
node *create_node(int data)
{
    node *temp=(node*)malloc(sizeof(node));
    temp->data=data;
    temp->next=NULL;
    return temp;
}
void push(stack **st,int data)
{
    node *temp=create_node(data);
    if(!temp)
    {
        cout<<"not sufficient space";
    }
    else{
        temp->next=(*st)->top;
        (*st)->top=temp;
    }
}
int pop(stack **st)
{
    if((*st)->top==NULL)
    {
        return -1;
    }
    else{
        node *temp=(*st)->top;
        int data=temp->data;
        (*st)->top=temp->next;
        temp->next=NULL;
        free(temp);
        return data;
    }
}
void display(stack *st)
{
    if(st->top==NULL)
    {
        cout<<"stack is empty";
    }
    else{
        node *temp=st->top;
        while(temp)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
}
int main()
{
    stack *st=intialize_stack();
    push(&st,10);
    push(&st,56);
    push(&st,78);
    push(&st,89);
    cout<<"delete item is :"<<pop(&st)<<endl;
    display(st);

}