//ACCEPT ONR NUMBER FROM USER AND CHECK WHETHER IS DIVDIBLE BY 5 OR NOT
#include<stdio.h>
typedef int BOOL;
#define TRUE 1 ;
#define FALSE 0;

Check (int iNo)
{
if((iNo % 5)== 0)
{
    return 1;
}
else 
{
    return 0;
}

}
int main()
{
    int iValue = 0;
    BOOL bRet = 0 ;
    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = Check (iValue);

if(bRet == 1)
{
    printf("Divisible by 5\n");
}

else 
{
    printf ("Not divisible by 5\n");
}

return 0;


}