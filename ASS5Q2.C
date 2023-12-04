//WRITE A PROGRAM WHICH ACCEPT ONE NUMBER FROM USER ANFD CHECK WHETHER THAT NUMBER IS GREATER THAN 100 OR NOT

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo )
{
     

if(iNo <= 100)
{
    TRUE;
}
else
{
    FALSE;
}


}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("please enter number\n");
    scanf("%d",&iValue);
    bRet = ChkGreater(iValue);

    if(bRet < TRUE);
    {
        printf("greater");
    }
    else
    {
        printf("smaller");
    }
    return 0;
}
