//WRITE a program to find a factorial of given number
#include<stdio.h>
int Factorial(int iNo)
{
    int fact = 1;
    int iCnt = 0;
    if(iNo < 0)     // Updator
    {
        iNo = -iNo;
    }
    switch(iNo)
   for ( iCnt= 1; iCnt <= iNo; iCnt++) 
        {
            fact = fact*iCnt;
        }
        
        

}
int main()
{
    int iValue = 0;
    int iRet =0;
    printf("enter number\n");
    scanf("%d",&iValue);
    iRet = Factorial(iValue);
    printf("factorial of number is %d",iRet);
    return 0;
    



}