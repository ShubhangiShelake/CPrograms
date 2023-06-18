#include<stdio.h>

int Addition(int No1, int No2)
{
  int Ans=0;
   Ans=No1+No2;
   return Ans;
}

int main()
{
    int a=11;
    int b=10;
    int iRet=0;

    iRet=Addition(a,b);
    printf("Addition is:%d\n",iRet);

    return 0;
}