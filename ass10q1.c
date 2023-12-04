//write a program which accept range from user and display all numbers between the range
//23 30
//23 24 25 26 27 28 29 30 

#include<stdio.h>
void RangeDisplay(int istart,int iend)
{
    int iCnt = 0;
     if(istart,iend < 0) // Updator
    {
        istart,iend = -istart,-iend;
    }
    for(iCnt= istart; iCnt<=iend;iCnt++)
  {
    printf("%d\t",iCnt);
  }




}
int main()
{

int iValue1 = 0;
int iValue2= 0;

printf("Enter the starting Number\n");
scanf("%d",&iValue1);

printf("Enter the ending number\n");
scanf("%d",&iValue2);

RangeDisplay(iValue1,iValue2);







    return 0;
}