//WRITE A PROGRAM  to find even factorial of given number
#include<stdio.h>
int EvenFactorial(int iNo)
{
    int iFact = 1;
    int iCnt= 0;
    for(iCnt = 1; iCnt <=iNo;iCnt ++);
    {
        iFact = iFact * iCnt;
       
    }
   
 
   
}
int main()
{
    int iValue =  0;
    int iRet  = 0;
    printf("enter the number");
    scanf("%d",&iValue);
    iRet = EvenFactorial(iValue);
    printf("Even Factorial of Number is  %d",iRet);
    return 0;

}
