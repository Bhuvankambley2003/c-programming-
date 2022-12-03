#include<stdio.h>
#include<stdlib.h>
//#define CAPACITY 5
//int stack[CAPACITY], top=-1;
int *stack, top = -1, CAPACITY;

// Prototype of Functions
void push(int ele);
int isfull();
int pop();
int isempty();
void peek();
void traverse();

// main()
int main(void)
{
    int ch,item;
    printf("Input Capacity of the stack: ");
    scanf("%d", &CAPACITY);
    // Dynamic Memory Allocation for the stack...
    stack = (int *)malloc(CAPACITY*sizeof(int));
    while(1)
    {
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.peek \n");
        printf("4.traverse\n");
        printf("5.Quit\n");

        printf("Enter your choice :\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("Enter the element to push :\n");
                scanf("%d",&item);
                push(item);
                break;
            case 2:
                item = pop();
                if(item==0)
                {
                    printf("stack is underflow\n");
                }
                else
                {
                    printf("popped item : %d\n",item);
                }
                break;
            case 3: peek();
            break;
            case 4: traverse();
            break;
            case 5: exit(0);
            default:printf("Invalid input \n\n");

        }
    }

}

// Definition of Functions.
void push(int ele)
{
    if(isfull())
    {
        printf("Stack is overflow\n");
    }
    else
    {
        top++;
        stack[top] = ele;
        printf("%d pushed \n",ele);
    }
}
int isfull()
{
    if(top==CAPACITY-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int pop()
{
    if(isempty())
    {
        return 0;
    }
    else
    {
        return stack[top--];
    }
}
int isempty()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void peek()
{
    if(isempty())
    {
        printf("stack is underflow\n");
    }
    else
    {
        printf("peek element :%d\n",stack[top]);
    }
}
void traverse()
{
    if(isempty())
    {
        printf("stack is empty\n");
    }
    else
    {
        int i;
        printf("Stack elements are : \n");
        for(i=0;i<=top;i++)
        {
            printf("%d \n",stack[i]);
        }
    }
}