//WRITE A PROGRAM WHICH ACCEPT NUMBER FROM USER AND PRINT NUMBERS TILL THAT NUMBER

#include<stdio.h>
void Display(int iNo)
{
int iCnt = 0;
if (iNo< 0)
{
    iNo = -iNo;
}
for(iCnt =1; iCnt <= iNo;iCnt++)
{
    printf("%d",iCnt);
}


}


int main()
{
    int iValue = 0;
    printf("enter number\n");
    scanf("%d",&iValue);
    Display(iValue);
    
    
    
    
    
    
    
    
    return 0;
}