#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int stack[30], top , ch , i , n , x;
void push();
void pop();
void peek();
void display();
void main()
{

    top=-1;
    printf("\n enter the size[max=30] : ");
    scanf("%d",&n);
    printf("\n stack using array");
    printf("\n 1.push");
    printf("\n 2.pop");
    printf("\n 3.peek");
    printf("\n 4.display");
    printf("\n 5.exit");
    do
    {
        printf("\n enter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            {
                push();
                break;
            }
        case 2:
            {
                pop();
                break;
            }
        case 3:
            {
                peek();
                break;
            }
        case 4:
            {
                display();
                break;
            }
        case 5:
            {
                printf("\n exit");
                break;
            }
        default:
            {
                printf("\n please enter a");
                printf("valid choice[1/2/3/4/5]");
            }
        }
    }
    while(ch!=5);
}
void push()
{
    if(top>=n-1)
    {
        printf("\n stack is over flow");
    }
    else
    {
        printf("\n enter a value : ");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n stack is underflow");
    }
    else
    {
        printf("\n pop element is : ");
        printf("%d",stack[top]);
        top--;
    }
}
void peek()
{
    if(top<=-1)
    {
        printf("\n stack is empty");

    }
    else
    {
        printf("\n peek element is : ");
        printf("%d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n the element in stack : ");
        for(i=top ; i>=0 ; i--)
            printf("%d  ",stack[i]);
        printf("\n press next choice");
    }
    else
    {
        printf("the stack is empty");
    }
}

