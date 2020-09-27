#include<stdio.h>
int n;
int front=-1,rear=-1;
int a[100];

void enqueue(int);
void dequeue();
void display();
main()
{
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    display();
    dequeue();
    display();
    enqueue(6);
    display();


}

void enqueue(int k)
{

    if((front==rear+1)||(rear==n-1&&front==0))
        printf("\nThe queue is full");

    else if(rear==n-1)
    {
        rear=0;
        a[rear]=k;
    }
    else if(front==-1 && rear==-1)
    {
        front++;
        rear++;
        a[rear]=k;
    }
    else
    {
        rear++;
        a[rear]=k;
    }

}
void dequeue()
{
    if(front==-1 && rear==-1)
        printf("\nThe queue is empty.");
    else if(front==n-1)
        front=0;
    else if(front==rear)
    {
        rear=front=-1;
    }
    else
    {
        front++;
    }


}
void display()
{
    printf("\n");
    if (front > rear)
    {
        for (int i = front; i < n; i++)
        {
            printf("\n%d ", a[i]);
        }
        for (int i = 0; i <= rear; i++)
            printf("\n%d ", a[i]);
    }
    else
    {
        for(int i=front;i<=rear;i++)
            printf("\n %d ",a[i]);
    }
}
