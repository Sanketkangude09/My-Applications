/*
    Accept number  of rows and nymber of columns from user and disaply below pattern
    input:     irow+ 3     iCol = 5   
    ouput  A A A A  A
           B B B B  B
           C C C C  C
            
*/
#include<stdio.h>

void Pattern(int iRow, int iCol) 
{
  int i = 0;
  int j = 0;
  char ch = 'A';
for(i= 0;i < iRow;i++,ch++)
{
    for(j = 0;j <iCol; j++)
    {
        printf("%c",ch);
    }
    printf("\n");
}

}
int main()
{
    int iValue1= 0;
    int iValue2 = 0;

    printf("Enter number rows\n");
    scanf("%d",&iValue1);

     printf("Enter number Columns\n");
     scanf("%d",&iValue2);
    
    Pattern(iValue1,iValue2);
    return 0;


}