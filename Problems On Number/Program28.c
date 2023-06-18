#include<stdio.h>

int Summation()
{
    int iAns=0;
    int iCnt=0;

    for(iCnt=1; iCnt<=5; iCnt++)
    {
        iAns=iAns+iCnt;
    }
    
    return iAns;
}

int main()
{
   int iRet=0;

   iRet=Summation();
   printf("Summation is:%d\n",iRet);


    return 0;
}