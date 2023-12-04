//writw a program which accept number and print its number line

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = -iNo; iCnt <= iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }

}
int main()
{
    int iValue = 0;
    printf("enter number\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}