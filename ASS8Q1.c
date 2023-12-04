//write a program which accept number from user and  disaply beloe pattern
#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    int print = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
     for(int iCnt = 1; iCnt <=iNo; iCnt ++)
         {
          printf("* ",print);

         }
   for(int iCnt = 1; iCnt <=iNo; iCnt ++)
     {
      
      printf("# ",print);

      }

      

}
int main()
{
    int iValue = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    Display(iValue);



    return 0;
}