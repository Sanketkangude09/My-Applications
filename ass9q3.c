//write a program which accept distance in kilomemter and convert it into meter
//(1 kilometer = 1000 meter)
#include<stdio.h>
float KMtoMeter(float fNo)
{
    float fMeter = 0.0;
    fMeter = fNo *1000;

    return fMeter;


}
int main()
{
    float fValue  = 0.0;
    float fRet = 0.0;
    printf("Enter the kilometers\n");
    scanf("%f",&fValue);

    fRet = KMtoMeter(fValue);
    printf("Conversion of kilometer into meter is %f",fRet);








    return 0;


}