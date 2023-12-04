//ACCEPT ONE CHARCTER FROM USER AND CHECK WHETHER THAT CHRACTER IS VOWEL (a.e.i.o.u) or not
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL ChkVowel(char Cword)
{
    if (Cword >='A' && Cword<= 'z')
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the charchter:\n");

    scanf("%c",&cValue);
    
    bRet =ChkVowl(cValue);


    if(bRet == cValue)
    {
        printf("it is vowel");
    }
    else
    {
        printf("it is not vowel");
    }   

            return 0;

}
