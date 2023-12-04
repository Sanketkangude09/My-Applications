//write a program which accept range from user and return addition of all number
//in etween that range (range should conatin postive number only)
#include<stdio.h>
int RangeSUM(int istart,int iend)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt= istart; iCnt<=iend;iCnt++)
  {
    iSum= iCnt +iSum;
    printf("%d\n",iCnt);
  }
 
  return iSum;





}
int main()
{

int iValue1 = 0;
int iValue2= 0;
int iRet = 0;

printf("Enter the starting Number\n");
scanf("%d",&iValue1);

printf("Enter the ending number\n");
scanf("%d",&iValue2);

iRet = RangeSUM(iValue1,iValue2);
printf("Addition is %d",iRet);







    return 0;
}