#include<stdio.h>

int Summation()
{
    int iAns=0;

   iAns=iAns+1;
   iAns=iAns+2;
   iAns=iAns+3;
   iAns=iAns+4;
   iAns=iAns+5;

    return iAns;
}

int main()
{
   int iRet=0;

   iRet=Summation();
   printf("Summation is:%d\n",iRet);


    return 0;
}