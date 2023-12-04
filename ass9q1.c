//write a program which accept radius of circle from user and calculate its area . 
//consider value of pi AS 3.14(Area = pi * radius *radius)

#include<stdio.h>

double CircleArea(float fRadius)
{
     float fArea = 0.0;
     float Pie = 3.14;

      fArea = (Pie*fRadius * fRadius);

     return fArea;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
     printf("Enter the Radius\n");
     scanf("%f",&fValue);


     dRet = CircleArea(fValue);
     printf("Area of circle is :%f",dRet);



    return 0;
}