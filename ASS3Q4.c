//accept one charcter from uswe and convert case of that charcter
#include<stdio.h>
void DisplayConvert(char Cvalue)
{

    if( Cvalue >= 'A'&& Cvalue <= 'Z' )
          
    {
        Cvalue = Cvalue +32;
        printf("%c",Cvalue);
    }
    else if( Cvalue >='a' && Cvalue <='z')
    {
         Cvalue = Cvalue -32;
        printf("%c",Cvalue);
    }

}
int main()
{char cvalue= 0;
printf("Enter the charchter\n");
scanf ("%c",&cvalue);

DisplayConvert(cvalue);



    return 0;
}