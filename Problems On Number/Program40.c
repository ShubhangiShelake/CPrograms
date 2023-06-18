#include<stdio.h>

void DisplayRevers(int iNo)
{
    int iCnt=iNo;

    while(iCnt>=1)
    {
        printf("%d\n",iCnt);
        iCnt--;
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