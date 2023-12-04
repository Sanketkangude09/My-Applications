//write a program which accept amount in US dollar and return its corresponding value in indian currency
//consider 1 $ as 70 rupees
#include<stdio.h>
int DollarTOINR(int iNo)
{
    int  iRupees = iNo *70;
   
}
int main()
{

    int iValue = 0;
    int iRet = 0;
    printf("enter the number of USD\n");
    scanf("%d",&iValue);

    iRet = DollarTOINR(iValue);
    printf("  Value in INR is %d",iRet);
    return 0;
}
