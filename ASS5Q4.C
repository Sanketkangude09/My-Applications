//WRITE A PROGRAM WHICH ACCEPT THRER NUMBERS AND ORINT ITS MULTPLICATION
#include<stdio.h>
int Multiply(int iNo1,int iNo2,int iNo3)
{
    int iMulti = 0;
    iMulti = iNo1*iNo2*iNo3;
     printf("multiplication is %d\n",iMulti);
    
   //if(iNo1 || iNo2 || iNo3 ==0)
  //  {
        printf("Multiplication is zero if any number is equal to zero");
    //}
    
 //  else
   // {
       
   // }



}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;
    printf ("please enter three numbers\n");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);
    printf("MultipLICATION  of three numbers \n");
    iRet =Multiply(iValue1,iValue2,iValue3);
    return 0;


}
