/*

input  irow = 4   and iCol = 3
output 1 2 3 
       1 2 3 
       1 2 3

*/
#include<stdio.h>
void pattern(int iRow,  int iCol)
{
    
    int i = 0;
    int j = 0;
    for(i = 1; i<=iRow; i++)
    {
        for(j=1; j<=iCol;j++)
        {
        printf("%d\t",j);
        }
        printf("\n");
    }
    



}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows\n");
    scanf("%d",&iValue1);

    printf("Enter number of coloumns\n");
    scanf("%d",&iValue2);

     pattern(iValue1,iValue2);
     return 0;
}