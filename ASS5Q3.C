//WRITE A PROGRAM WHIC ACCEPT TWO NUMBERS AND CHECK WHETEHER NUMBER ARE EQUAL OR NOT

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL ChkEqual(int iNo1 ,int iNo2)
{
    if(iNo1 == iNo2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2= 0;
    BOOL bRet = FALSE;
    printf("Enter the  two numbers\n");
    scanf("%d %d",&iValue1,&iValue2);
    bRet = ChkEqual(iValue1,iValue2);
    if (bRet == TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("not equal");
    }
    return 0;
}