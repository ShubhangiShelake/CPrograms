#include<stdio.h>

int Multiplication(int iNo1,int iNo2)
{
    int iAns=0;

    iAns=iNo1*iNo2;
    return iAns;
}

int main()
{
    int iValue1=0, iValue2=0,iMult=0;

     printf("Enter the First Element:\n");
     scanf("%d",&iValue1);

     printf("Enter the Secound Element:\n");
     scanf("%d",&iValue2);
      
      iMult=Multiplication(iValue1,iValue2);
      printf("Multiplication is:%d\n",iMult);

    return 0;
}