#include<stdio.h>
#include<stdlib.h>
int main()
{
    int queue[100],front=0,rear=0,i,j=1,x=100,num,ch;
    printf("\n1.Insertion \n2.Deletion \n3.Display \n4.Exit\n");
    while(1)
    {
        
        printf("\nEnter the Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            if(rear==x)
                printf("\n Queue is Full");
            else
            {
                printf("enter the number elements to be entered \n");
                scanf("%d",&num);
                for(i=0;i<num;i++)
                {
                    printf(" Enter no %d:\n",j++);
                    scanf("%d",&queue[rear++]);
                }
                
            }
            break;
        case 2:
            if(front==rear)
            {
                printf("\n Queue is empty");
            }
            else
            {
                printf("\n Deleted Element is %d",queue[front++]);
                x++;
            }
            break;
        case 3:
            printf("Queue Elements are:\n ");
            if(front==rear)
                printf("\n Queue is Empty");
            else
            {
                for(i=front; i<rear; i++)
                {
                    printf("\t%d",queue[i]);
                    
                }
                break;
            }
            case 4:
                exit(0);
            default:
                printf("Wrong Choice: please see the options");
            
        }
    }
    return 0;
}