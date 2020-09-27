#include<stdio.h>
void dequeue();
void enqueue(int);
void display();
int front=-1,rear=-1;
int n;
int a[100];
main()
{
     printf("Enter the size of queue: ");
     scanf("%d",&n);
     enqueue(1);
     enqueue(2);
     dequeue();
     display();
     enqueue(3);
     enqueue(4);
     enqueue(5);
     display();


}
void enqueue(int k)
{
   if(rear==n-1)
     printf("\nThe queue is full");
   else
   {
       if(front==-1)
            front=0;
      rear++;
      a[rear]=k;
      printf("\n%d is inserted.",k);
   }
}
void dequeue()
{
     if(front==-1)
          printf("\nThe queue is empty.");
     else
     {
         printf("\n%d is removed.",a[front]);
         front++;
     }
}
void display()
{
     for(int i=front;i<=rear;i++)
          printf("\n %d",a[i]);
}
