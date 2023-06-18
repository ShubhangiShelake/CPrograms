#include<stdio.h>

void DisplayRevers(int iNo)
{
    int iCnt=0;

    for(iCnt=iNo; iCnt>=1;iCnt--)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    int iValue=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    DisplayRevers(iValue);

    return 0;
}