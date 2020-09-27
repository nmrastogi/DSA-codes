#include<stdio.h>
int stack[100],top=-1,n,flag;
main()
{
    printf("The max size of stack: ");
    scanf("%d",&n);

    while(flag!=1)
    {
        int ch;
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. isEmpty\n");
        printf("5. isFull\n");
        printf("6. Leave\n");
        printf("7. Show\n");
        printf("Enter the option number: ");
        scanf("%d",&ch);

    switch(ch)
    {
    case 1:
        {
           Push();
           break;
        }
    case 2:
        {
           Pop();
           break;
        }
    case 3:
        {
           Peek();
           break;
        }
    case 4:
        {
           Empty();
           break;
        }
   case 5:
        {
           Full();
           break;
        }
  case 6:
        {
           Leave();
           break;
        }
  case 7:
        {
           Show();
           break;
        }
    }
 }
}
void Push()
{
    if(top==n-1)
    {
        printf("Stack is full\n");
    }
    else
    {
        int val;
        printf("Enter the element:");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
    }
}
void Pop()
{
    if(top==-1)
        printf("Stack is Empty\n");
    else
    {
        printf("%d is popped\n",stack[top]);
        top = top-1;
    }

}
void Peek()
{
    printf("%d is at the top\n",stack[top]);
}
void Empty()
{
    if(top==-1)
        printf("Yes\n");
    else
        printf("No\n");
}
void Full()
{
    if(top==n-1)
        printf("Yes\n");
    else
        printf("No\n");
}
void Leave()
{
    flag=1;
    printf("Exiting.....\n");
}
int Show()
{
    for(int i=0;i<=top;i++)
        printf("%d ",stack[i]);
}
