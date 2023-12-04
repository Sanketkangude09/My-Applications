//writw a program which accept number feom user and return multiplication  of alll digits
#include<stdio.h>
int MultDigits(int iNo)
{
    int iMulti= 1;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo %10;
        iMulti = iMulti *iDigit;
        iNo /= 10;
    }
    return iMulti;

}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);
    printf("Multiplicaion  of all digits are :%d",iRet);

    return 0;
}