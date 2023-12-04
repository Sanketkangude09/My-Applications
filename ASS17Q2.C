//ACCEPT NUMBER FROM USER AND display below pattern
//input 5
//output : 5# 4# 3# 2# 1# 

#include<stdio.h>
void pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = iNo;iCnt >= 1; iCnt--)
    {
        printf("%d\t#\t",iCnt);
        
    }
    printf("\n");


}

int main()
{
    int iValue = 0;
    printf("Enter the number of elemets :\n");
    scanf("%d",&iValue);
    pattern(iValue);
    return 0;
}

