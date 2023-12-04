//write a program  which accept number from user and return the count of of digit in between 3 and 7 
#include<stdio.h>
int CountRange(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo %10;
        if(iDigit >3 && iDigit < 7)
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

    iRet = CountRange(iValue);
    printf("Count  of digits are :%d",iRet);

    return 0;
}