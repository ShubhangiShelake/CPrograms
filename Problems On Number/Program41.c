#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int iCnt=0;

    for(iCnt=1; iCnt<=(iNo/2); iCnt++)
    {
        if((iNo%iCnt==0)&&(iNo%2==0))
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return 0;
}