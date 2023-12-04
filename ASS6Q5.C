//write a program which accept N and print 5 multipale of N
#include<stdio.h>
void MultipleDisplay(int iNo)
{
int iCnt= 0 ;
int iMulti = 0;
    for(int iCnt = 1; iCnt <= 5 ;iCnt ++)
    {
        if(iMulti = iNo* iCnt)
        {
        printf("%d \t",iMulti);
        }
    
    }


}
int main()
{

int iValue = 0;
printf ("Enter the number\n");
scanf("%d",&iValue);
MultipleDisplay(iValue);


    return 0;
}