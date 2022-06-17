#include<stdio.h>
#include<stdlib.h>

struct node
{
   int data;
   struct node*next;                    //structure declaration
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

InsertFirst(PPNODE Head,int iNo)
{
  PNODE newn=NULL;
  newn=(PNODE)malloc(sizeof(NODE));

  newn->data=iNo;
  newn->next=NULL;
  
 if(*Head==NULL)
  {
    *Head=newn;
  }
 else
  {
     newn->next=*Head;
     *Head=newn;
  }
}
  
 
InsertLast(PPNODE Head,int iNo)
{
  PNODE newn=NULL;
  newn=(PNODE)malloc(sizeof(NODE));

  newn->data=iNo;
  newn->next=NULL;
  
 if(*Head==NULL)
  {
    *Head=newn;
  }
 else
  {
    //code
  }
}     
 
void Display(PNODE head)
{
 printf("elements from linked list are:\n");
 
while(head!=NULL)
 {
   printf("| %d |->",head->data);
  head=head->next;
 }
printf("NULL\n");
}



int main()
{
    PNODE First = NULL;     // struct node * First  = NULL;

    InsertFirst(&First,101);    // InsertFirst(60, 101);
    InsertFirst(&First,51);     // InsertFirst(60,51);
    InsertFirst(&First,21);
    InsertFirst(&First,10);

    Display(First);

    return 0;
}
