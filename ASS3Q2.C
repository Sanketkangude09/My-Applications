//write a program which accept number from user and print even Factors of that number
#include<stdio.h>
void DisplayFactor(int iNo)
{
    int icnt = 0;
    
    if (iNo <= 0)
    {
        iNo = -iNo ;     //updater
    }
    for(icnt=2; icnt <=(iNo/2)  ;icnt+=2)
    {
     if( (iNo % icnt)==0  )
     {
        printf("%d",icnt);
     }
    }
}
int main()
{
int iValue = 0;
printf("Enter a number\n");
scanf("%d",&iValue);
DisplayFactor(iValue);



    return 0;
}