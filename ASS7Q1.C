//write A program which accept number from user and if number is less than 50 then print small
//if it is greater than 50 ans less than 100 then print medium
//if it is greater than 100 the print large
#include<stdio.h>
void Number(int iNo)
{
    if (iNo < 50)
    {
        printf("Small");
    } 
     else if(iNo = 50  && iNo <100)
    {
        printf("medium");
    }
    else if(iNo =50 || iNo > 100)
    {
        printf("large");

    }
   


}
int main()
{
int iValue = 0;
printf("Enter the number\n");
scanf("%d",&iValue);

Number(iValue);

return 0;


}