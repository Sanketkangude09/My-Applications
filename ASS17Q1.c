//ACCEPT NUMBER FROM USER AND display below pattern
//input 5
//output : A B C D E
#include<stdio.h>
void pattern(int iNo)
{
    int iCnt = 0;
    char ch = 'A';
    for(iCnt = 1;iCnt <= iNo; iCnt++)
    {

        printf("%c\t",ch);
        ch++;
    }
    printf("\n");


}

int main()
{
    int iValue = 0;
    printf("Enter the number of elemets\n");
    scanf("%d",&iValue);
    pattern(iValue);

}