#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct node
{
    int data;
    struct node *next;
}node;
typedef struct queue{
    struct node *front;
    struct node *rear;
}queue;
queue *intialize_queue()
{
    queue *q=(queue*)malloc(sizeof(queue));
    q->front=NULL;
    q->rear=NULL;
    return q;
}
node *create_node(int data)
{
    node *temp=(node*)malloc(sizeof(node));
    temp->data=data;
    temp->next=NULL;
    return temp;
}
void enqueue(queue *q,int data)
{
    node *temp=create_node(data);
    if(!temp)
    {
        cout<<"not sufficient space";
    }
    else{
          if(q->front==NULL)
          {
             q->front=temp;
             q->rear=temp;
          }
          else
          {
            q->rear->next=temp;
            q->rear=temp;
          }
          return;
    }
}
int dequeue(queue *q)
{
    if(q->front==NULL)
    {
        return -1;
    }
    else{
        node *temp=q->front;
        int data=temp->data;
        q->front=temp->next;
        temp->next=NULL;
        free(temp);
        if(q->rear->next==q->front)
        {
            q->rear=NULL;
            q->front=NULL;
        }
        return data;
    }
}
void display(queue *q)
{
    if(q->front==NULL)
    {
        cout<<"queue is empty";
    }
    else{
        node *temp=q->front;
        while(temp!=(q->rear->next))
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
}
int main()
{
    queue *q=intialize_queue();
    enqueue(q,10);
    enqueue(q,56);
    enqueue(q,78);
    enqueue(q,89);
    cout<<"delete item is :"<<dequeue(q)<<endl;
    display(q);

}