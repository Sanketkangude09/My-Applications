//write a program which accept number range from user and display all numbers in between 
//that range in revrse order

#include<stdio.h>
void RangeDisplayRev(int iend,int istart)
{
    
    int iCnt = 0;

     if(istart,iend < 0) // Updator
    {
        istart,iend = -istart,-iend;
    }
    for(iCnt= iend; iCnt>=istart;iCnt--)
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

RangeDisplayRev(iValue1,iValue2);







    return 0;
}