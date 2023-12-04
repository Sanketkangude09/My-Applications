//write a program  which accept number from user and return the count of even digits 
#include<stdio.h>
int CountOdd(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo %10;
        if(iDigit % 2 !=0)
        {
            iCnt++;
        }
        iNo /= 10;
    }
    return iCnt;

}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);
    printf("Count of Odd digits are :%d",iRet);

    return 0;
}