//write a program which accept width and height of reactngle from user and calculate area

//formula  Area = Width *Height
#include<stdio.h>
double CalculateArea(float height ,float Width)
{
    float fArea = 0.0;
    fArea = height * Width;


    return fArea;



}
int main()
{
    float fValue1 = 0.0;
    float fValue2 = 0.0;
    double dRet = 0.0;


    printf("Enter the height\n");
    scanf("%f",&fValue1);

    printf("Enter the Width\n");
    scanf("%f",&fValue2);

    dRet=CalculateArea(fValue1,fValue2);

    printf("area of Reactangle is %f",dRet);






    return 0;
}