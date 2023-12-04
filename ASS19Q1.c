//ACCEPT NUMBER  OF ROWS AND COLUMNS FROM USER AND DISPLAY BELOW PATTERN
/*
    INPUT :  iRow = 4    iCol = 4;
    output = A B C D
             a b c d
             A B C D
             a b c d

*/
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = 'A';
    

    for(i=1;i<=iRow;i++)
  {
    for(j= 1; j <=iCol; j++)
    {
        printf("%c\t",ch);


        wrong
        
    }
    printf("\n");
  }

   
    

}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    printf("Enter number of Rows\n");
    scanf("%d",&iValue1);

     printf("Enter number of Columns\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}
