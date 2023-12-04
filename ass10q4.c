//write a program which acccept range from user and returen addition off all even numbers in bettwwen rang
#include<stdio.h>
int RangSumEVEN(int istart,int iend)
{
    int iCnt = 0;
    int iSum = 0;
     for(iCnt= istart; iCnt<=iend;iCnt++)
  {
    if((iCnt % 2)==0)
    {
    iSum= iCnt +iSum;
    printf("%d\n",iCnt);
    }
  }
 
  return iSum;


}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter the starting number\n");
    scanf("%d",&iValue1);

    printf("Enter the ending number\n");
    scanf("%d",&iValue2);
    iRet = RangSumEVEN(iValue1,iValue2);
    printf("Addition of All even number is %d",iRet);




    return 0;
}