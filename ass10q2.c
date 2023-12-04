//write a prgram which accept range from user and siaplay all even number in btetween that range

#include<stdio.h>
void RangeDisplayEven(int istart,int iend)
{
    int iCnt = 0;
    if(istart,iend < 0) // Updator
    {
        istart,iend = -istart,-iend;
    }
    
    for(iCnt= istart; iCnt<=iend;iCnt++)
  {
    if((iCnt %2 )==0)
    {
        printf("%d\n",iCnt);

    }
   
    
  }
    



}
int main()
{

int iValue1 = 0;
int iValue2= 0;
int iRet =0; 

printf("Enter the starting Number\n");
scanf("%d",&iValue1);

printf("Enter the ending number\n");
scanf("%d",&iValue2);

 RangeDisplayEven(iValue1,iValue2);







    return 0;
}