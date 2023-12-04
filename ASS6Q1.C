//WRIE A  PROGRAM WHIC ACCCPEPT NUMBER FROM USER AND PRINT THAT NUMBER OF $ & * ON SCREN
#include<stdio.h>
void Pattern(int iNo)
{ 
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
       

    for(iCnt = 1;iCnt <=iNo; iCnt++)
    {
        printf("$""*\t");
    }


}
int main()
{
   int iValue = 0;
   printf("enter the number\n") ;
   scanf("%d",&iValue);
   Pattern(iValue);
   return 0;
}