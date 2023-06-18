#include<stdio.h>

int Summation()
{
    int iNo1=1;
    int iNo2=2;
    int iNo3=3;
    int iNo4=4;
    int iNo5=5;
    int iAns=0;

   iAns=iAns+iNo1;
   iAns=iAns+iNo2;
   iAns=iAns+iNo3;
   iAns=iAns+iNo4;
   iAns=iAns+iNo5;

    return iAns;
}

int main()
{
   int iRet=0;

   iRet=Summation();
   printf("Summation is:%d\n",iRet);


    return 0;
}