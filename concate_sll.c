//program on concatination of single linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
 };
 
 struct node *head1=NULL;
 struct node *head2=NULL;
 
 struct node *display(struct node *root)
 {
    struct node *temp;
   if(root==NULL)
   {
     printf(" List empty ");
    }
   else
   {
     temp=root;
     printf("%d",temp->data);
     temp=temp->next;
     while(temp!=NULL)
     {
       printf("->%d",temp->data);
       temp=temp->next;
      }
    }
    
  }
 
 struct node *create(struct node *head)
 {
   struct node *newnode;
   newnode=(struct node *)malloc(sizeof(struct node));
   if(newnode==NULL)
   {
     printf(" Memory not allocated \n ");
    }
   printf(" Enter data : ");
   scanf("%d",&newnode->data);
   newnode->next=NULL;
   
     return (newnode);
  }
   
 
 struct node *insert_begin(struct node  **ptr)
 {
   struct node *newnode;
   newnode=(struct node *)malloc(sizeof(struct node));
   if(newnode==NULL)
   {
     printf(" Memory not allocated \n ");
    }
    else
    {
    printf(" Enter data : ");
    scanf("%d",&newnode->data);
     newnode->next=*ptr;
     *ptr=newnode;
            
    }
   
    
 }
   
 struct node *insert_end(struct node *head)
  {
   struct node *newnode,*temp;
   newnode=(struct node *)malloc(sizeof(struct node));
   if(newnode==NULL)
   {
     printf(" Memory not allocated \n ");
    }
   printf(" Enter data : ");
   scanf("%d",&newnode->data);
   newnode->next=NULL;
   
   if(head->next==NULL)
   {
     head->next=newnode;
    }
    else
    {
      temp=head;
      while(temp->next!=NULL)
      {
        temp=temp->next;
       }
      temp->next=newnode;
     }
     return head;
   }
   
  struct node *delete_begin(struct node **head)
  {
    struct node *temp;
    if(*head==NULL)
    {
      printf(" List empty\n ");
     }
    else
    {
      temp=*head;
      *head=(*head)->next;
      printf(" deleted value is %d ",temp->data);
      free(temp);
     }
     
   }
   
 struct node *delete_end(struct node *head)
 {
   struct node *temp,*ptr;
 
    if(head==NULL)
    {
      printf(" List empty\n ");
     }
    else
    {
      temp=head;
      ptr=head;
      temp=temp->next;
      while(temp->next!=NULL)
      {
        temp=temp->next;
        ptr=ptr->next;
        }
       printf(" deleted value is %d ",temp->data);
       ptr->next=NULL;
       free(temp);
      }
      return head;
    }
  struct node *concatenate(struct node *l1,struct node *l2)
  {
    struct node *ptr;
    if(l1==NULL)
    return l1;
    if(l2==NULL)
    return l2;
    ptr=l1;
   
    while(ptr->next!=NULL)
    {
      ptr=ptr->next;
     }
    ptr->next=l2;
   
    return l1;
   }
 
  int main()
  {
    int choice,ch1,ch2,ch3,ch4,ch5,ch7;
    struct node *l1,*l2,*l3;
    do
    {
    printf("\n MENU \n ");
    printf(" 1.create list\n2.Insert at begining\n 3.Insert at end\n 4.Delete at begining\n 5.Delete at end\n 6.concatenate \n 7.Display\n 8.Exit\n ");
    printf("Enter choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:   printf("\n1.create list 1\n 2.create list 2\n 3.exit\n");
             printf("Enter choice: ");
             scanf("%d",&ch1);
             switch(ch1)
             {
               case 1: l1=create(l1);break;
               case 2: l2=create(l2);break;
               case 3: printf("\n");break;
               
               default: printf(" Invalid choice ");
              }
             break;
       case 2: printf("\n1.Insert at begining to list 1\n 2.Insert at begining to list 2\n 3.exit\n");
             printf("Enter choice: ");
             scanf("%d",&ch2);
             switch(ch2)
             {
               case 1: insert_begin(&l1);break;
               case 2: insert_begin(&l2);break;
               case 3: printf("\n");break;
               
               default: printf(" Invalid choice ");
              }
            break;
   
       case 3:printf("\n1.Insert at end to list 1\n 2.Insert at end to list 2\n 3.exit\n");
             printf("Enter choice: ");
             scanf("%d",&ch3);
             switch(ch3)
             {
               case 1: insert_end(l1);break;
               case 2: insert_end(l2);break;
               case 3: printf("\n");break;
               
               default: printf(" Invalid choice ");
              }
              break;
       case 4:printf("\n1.Delete at begining to list 1\n 2.Delete at begining to list 2\n 3.exit\n");
             printf("Enter choice: ");
             scanf("%d",&ch4);
             switch(ch4)
             {
               case 1: delete_begin(&l1);break;
               case 2: delete_begin(&l2);break;
               case 3: printf("\n");break;
               
               default: printf(" Invalid choice ");
              }
              break;
           
         case 5:printf("\n1.Delete at end to list 1\n 2.Delete at end to list 2\n 3.exit\n");
             printf("Enter choice: ");
             scanf("%d",&ch5);
             switch(ch5)
             {
               case 1: delete_end(l1);break;
               case 2: delete_end(l2);break;
               case 3: printf("\n");break;
               
               default: printf(" Invalid choice ");
              }
              break;
             
          case 6:l3=concatenate(l1,l2);break;
             
         case 7:printf("\n1.Display list 1\n 2.Display list 2\n3.Dispaly concatenated List\n 4.exit\n");
             printf("Enter choice: ");
             scanf("%d",&ch7);
             switch(ch7)
             {
               case 1: display(l1);break;
               case 2: display(l2);break;
               case 3: display(l3);break;
               case 4:printf("\n");break;
               
               default: printf(" Invalid choice ");
              }
              break;
             
           case 8:exit(0);break;
           
           default: printf(" Invalid choice ");
          }
        }while(1);
      }