//write a program which accept area in square feet and convert it into sqaure meter
//(1 square feet = 0.0929 square memter)
#include<stdio.h>
double SquareMeter(float fNo)
{
    float SquareMeter = 0.0;
    SquareMeter = fNo *0.0929;
    return SquareMeter;



}
int main()
{
    float fValue = 0;
    double dRet = 0.0;
    printf("Entert the square feet\n");
    scanf("%f",&fValue);

    dRet = SquareMeter(fValue);
    printf("area in square feet it convertedinto square meter is %f",dRet);



    return 0;
}