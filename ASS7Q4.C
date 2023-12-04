//WRITE A PROGRAM WHICH ACCEPT NUMBER FROM USER AND DISAPLY ITS TABLE
#include<stdio.h>
void Table(int iNo)
{
   if(iNo < 0)     // Updator
    {
        iNo = -iNo;
    }
    int iTable = 0;
    int iCnt = 0;
    for(iCnt = 1; iCnt <=10;iCnt ++)
    {
        if(iTable = iNo * iCnt)
    { 
        printf(" %d",iTable);
    }
    }
}
int main()
{
    int iValue = 0;
    printf("enter number\n");
    scanf("%d",&iValue);

    Table(iValue);




    return 0;
}