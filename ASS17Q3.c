//accept number from user and print below pattern
//imput 5
//output : 1 * 2 * 3 * 4 *  5 * 
#include<stdio.h>
void pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {

        printf("%d\t*\t",iCnt);
    }
    printf("\n");




}
int main()
{
int iValue = 0;
printf("Enter the elemets:\n");
scanf("%d",&iValue);
pattern(iValue);

return 0;
}

