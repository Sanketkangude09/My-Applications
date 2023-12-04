//WRITE A PROGRAM WHICH ACCEPT ONE NUMBER FROM USER AND PRINT THAT NUMBER OF EVEN NUMBERS ON SCREEN
//ALOGARITHM = 
/*
START
    CRATE A VARIBLE iVALUE which accaept input 
    inmain function create a printf which print enter the number
    wriiten scanf to take input 
    call the function from main function to print even function 


STOP
*/
#include<stdio.h>
void printEven(int iNo)
{
   
  int icnt = 0;
    
    if (iNo <= 0)
    {
       
      return;
    }
    else
    {
     for(icnt=0; icnt<iNo ; icnt++)
         { 
         printf("%d ",2*(icnt+1));
         }
    }


}
int main()
{
    int iValue =0;
    printf("enter the number\n");
    scanf("%d",&iValue);

    printEven(iValue);



    return 0;
}