#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct queue{
    int front;
    int rear;
    int cap;
    int *array;
}queue;
queue* create_queue(int cap)
{
     queue *q=(queue*)malloc(sizeof(queue));
     q->front=-1;
     q->rear=-1;
     q->cap=cap;
     q->array=(int*)malloc(sizeof(int)*(q->cap));
     return q;
}
void enqueue(queue *q,int data)
{
    if((q->front)==(q->cap)-1)
    {
        cout<<"queue is full";
    }
    else 
    {
        (q->rear)++;
        q->array[q->rear]=data;
    if(q->front==-1)
    {
        q->front=0;
    }
    }
}
int dequeue(queue *q)
{
    if(q->front==-1)
    {
        cout<<"queue is empty";
        return -1;
    }
    else 
    {
        int x=q->array[q->front];
        (q->front)++;
        if((q->front)>(q->rear))
        {
            q->front=-1;
            q->rear=-1;
        }
        return x;
    }
}
void display(queue *q)
{
    if(q->front==-1)
    {
        cout<<"queue is empty";
    }
    else
    {
        for(int i=(q->front);i<=(q->rear);i++)
        {
            cout<<q->array[i]<<" ";
        }
    }
}
int main()
{
    queue *q=create_queue(10);
    enqueue(q,45);
        enqueue(q,78);
            enqueue(q,79);
                enqueue(q,78);
    dequeue(q);
    display(q);
}