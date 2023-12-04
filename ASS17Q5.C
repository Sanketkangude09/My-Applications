//INPUT 8
// OUTPUT 2 4 6 8 10 12 14 16
#include<stdio.h>
void pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2; iCnt  iNo; iCnt++)
    {
        if(iNo % 2)
        {
        printf("%d",iCnt);
        }
        
    }
    


        wrong

}

int main()
{
int iValue = 0;
printf("Enter the elemets \n");
scanf("%d",&iValue);
pattern(iValue);




 return 0;
}