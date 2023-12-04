//write a program which accept number from user and return diffrence between summation of even digits and summation of of odd digits
#include<stdio.h>

int CountDiff(int iNo)
{
    int evenSum = 0;
    int oddSum = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo %10;
        if(iDigit %2 == 0)
        {
            evenSum = evenSum + iDigit;
        }
        else
        {
            oddSum = oddSum + iDigit;
        }

       iNo =  iNo/10;
    }
    return evenSum - oddSum;


}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    printf("%d",iRet);

    return 0;
}