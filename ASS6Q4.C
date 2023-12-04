//write a program which accept N from user and print all odd numbaers up to N

#include<stdio.h>
void OddDispaly(int iNo)
{
    int iCnt ;
    for(iCnt = 1; iCnt < iNo ;iCnt ++)
    {
        if(iCnt%2 )
         {
         printf("%d\t",iCnt);
            }

    }



}
int main()
{
    int iValue = 0;
    printf("enter number\n");
    scanf("%d",&iValue);

        OddDispaly(iValue);


    return 0;


}