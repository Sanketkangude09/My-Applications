//write a program ehich accept nnumber from user and count frequecy of suct digut which are less than 6
#include<stdio.h>

int Count(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo %10;
        if(iDigit <6)
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

    iRet = Count(iValue);
    printf(" frequecy of digit which is less than 6 :%d",iRet);

    return 0;
}