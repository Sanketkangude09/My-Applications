//WRITE A PROGRAM  WHICH ACCEPT TOTAL MARKS & OBTAINED MARKSA FROM USER AND CALCULATE PERCETAGE
#include<stdio.h>
float Percentage(float fTotal,float fobtain)
{
    float fper =0.0;
    fper = ((fobtain / fTotal)*100);
    printf("%f",fper);
    
  
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fRet = 0.0; 
    printf("plesae enter total marks\n");
    scanf("%d",&iValue1);
    printf("enter obtained marks\n");
    scanf("%d",&iValue2);
    fRet = Percentage(iValue1,iValue2);
    printf("total percenatge \n");
    return 0;
}