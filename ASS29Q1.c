#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct Node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    if(*Head == NULL)
    {
       *Head = newn;
    }
    else
    {
        newn-> next = *Head;
        *Head = newn;
    }


}
void Display(PNODE Head)
{
  printf("contents of linked list are:\n");

    while(Head != NULL)
    {
        printf("|  %d | ->",Head ->data );
        Head = Head->next;
    }
    printf("NULL\n");
    
}
int Count(PNODE Head)
{
    int iCnt = 0;
    while(Head != NULL)
    {
        iCnt++;
       Head = Head-> next;
    }
    return iCnt;

}
int SearchFirstOcc( PNODE Head,int No )  
{
    PNODE Temp = NULL;
    Temp = Head;
    while(Temp != NULL)
    {
        if(Temp ->data == No)
        {
            printf("Suucess")
        }
    
        else
        {
            printf("sEARCH NOT SUCCEFULL")
        }
        Temp = Temp -> next;

    }


}


int main()
{
    PNODE First = NULL;
    int iRet = 0;


    InsertFirst(&First,70);
    InsertFirst(&First,60);
    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    Display(First);
    iRet =Count(First);
    printf("Number of node in linked lisr are%d\n",iRet);

    iRet = SearchFirstOcc(First ,30);
    Display(First);
    iRet =Count(First);
    printf("Number of node in linked lisr are%d\n",iRet);


    
    

   

    return 0;
}