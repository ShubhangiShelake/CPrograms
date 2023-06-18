#include<stdio.h>

int Summation(int iNo)
{
    int iAns=0;
    int iCnt=0;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        iAns=iAns+iCnt;
    }
    
    return iAns;
}

int main()
{
    int iValue=0;
   int iRet=0;

   printf("Enter Number:\n");
   scanf("%d",&iValue);

   iRet=Summation(iValue);
   printf("Summation is:%d\n",iRet);


    return 0;
}