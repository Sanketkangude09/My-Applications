//ACCEPT TWO NUMBER FROM USER AND DISPLAY FIRST NUMBER IN SECOND NUMBER OF TIMES
// INPUT : 12 5 
//OUTPUT: 12 12 12 12 12

//INPUT:-2 3
//OUTPUT : -2 -2 -2



#include<stdio.h>
 Display(int iNo,int iFrequency)
 {
{ 
    int icnt = 0;
    for (icnt = 1; icnt <= iFrequency;icnt++)
        printf("%d\n",iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;
    printf("enter number\n");
    scanf("%d",&iValue);

    printf("enter frequency\n");
    scanf("%d",&iCount);
    Display(iValue,iCount);


    return 0;
}