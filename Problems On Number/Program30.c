#include<stdio.h>

int Factorial(int iNo)
{
    int iAns=1;
    int iCnt=0;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        iAns=iAns*iCnt;
    }
    
    return iAns;
}

int main()
{
    int iValue=0;
   int iRet=0;

   printf("Enter Number:\n");
   scanf("%d",&iValue);

   iRet=Factorial(iValue);
   printf("Factorial is:%d\n",iRet);


    return 0;
}