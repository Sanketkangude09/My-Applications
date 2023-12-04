//ACCEPT ONE FORM USER IF NUMBER IS LESS THAN 10 THEN PRINT "HELLO" OTHERWISE PRINT "DEMO"
#include<stdio.h>
void Display(int iNo)
{
    if (iNo <= 10)
    {
        printf ("HELLOO\n");
    }
    else
    {
        printf("Demo");

    }

}

int main()
{
int iValue = 0;
printf("enter the number\n");
scanf("%d",&iValue);
Display(iValue);

    return 0;
}