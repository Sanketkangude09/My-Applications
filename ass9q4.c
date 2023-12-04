//write aprogram which accept temprature in faherenehit and convert it into 
//celsius (1celsius = (Farhenit -32)*(5/9))

#include<stdio.h>
float FHtoCS(float ftemp)
{
    float fcelsius = 0.0;

    fcelsius = (ftemp -32)*5/9;
    return fcelsius;


}

int main()
{
    float fValue = 0.0;
    float fRet = 0.0;

    printf("Enter the temprature in Fahrenhit\n");
    scanf("%f",&fValue);

    fRet= FHtoCS(fValue);
    printf("temprature in Fahrenhit is convret into celsius is :%f",fRet);






    return 0;
}