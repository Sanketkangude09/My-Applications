//WRO\ITE A PROGRAM WHICH ACCEPT NUMBER FROM USER and disaply ist dtable revrese
#include<stdio.h>
void TableRev(int iNo)
{
     if(iNo < 0)     // Updator
    {
        iNo = -iNo;
    }
    
    int iCnt = 0;
    int imulti = 0;
   for(iCnt = 10; iCnt >=1;iCnt--)
    {
        if(imulti = iNo * iCnt)
    { 
        printf(" %d",imulti);
    }
    }

}
int main()
{
    int iValue = 0;
    printf("enter number\n");
    scanf("%d",&iValue);
    TableRev(iValue);



    return 0;
}