//write a program which accept number from user and print even factors of that number
#include<stdio.h>
void DisplayEvenfactor(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 2;i <= (iNo/2);i++)
    {
        if(iNo%i==0 && i%2==0)
        {
              printf("%d\n",i);
        }
    }


}
int main()
{
int iValue =0;
printf("Enter the number\n");
scanf("%d",&iValue);

DisplayEvenfactor(iValue);



    return 0;
}

//time coplexcity is  O(N/2)