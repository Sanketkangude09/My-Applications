//write a program which accept number from  user and check whether it contains 0 or not
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL ChkZero(int iNo)
{
    int iDigit= 0;   //wrong 
     int iCount = 0;
     while(iNo != 0)
    {
        iDigit = iDigit %10;
        iNo = iNo/10;
       
        printf("%d\n",iNo);
        
    }
    if(iDigit == iCount)
    {
        return TRUE;
    }
    else{
        return FALSE;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("enter number \n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);
    if(bRet == TRUE)
    {
        printf("it contains zero");
    }
    else 
    {
        printf("there is no zero\n");
    }
    return 0;
}