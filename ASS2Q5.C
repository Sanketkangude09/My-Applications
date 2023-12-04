//ACCEPT NUMBER FROM USER AND CHECK WHETHER NUMBER IS EVEN OR ODD
#include<stdio.h>
#define TRUE 
#define FALSE 
typedef int BOOL;
BOOL CheckEven(int iNo)
{   int iAns = 0;
    iAns = iNo % 2;

    if(iAns == 0)    // Jar
    {
        printf("Number is even\n");
    }
    else    // Nasel tar
    {
        printf("Number is odd\n");
    }
    
}

int main()
{
int iValue = 0;
BOOL bRet = 0 ;
printf("Enter  number\n");
scanf("%d\n",&iValue);
 bRet = CheckEven(iValue);
 //DISPLAY RESULT


    return 0;
}