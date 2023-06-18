#include<stdio.h>

int CountMiniDigit(int iNo)
{
    int iDigit=0;
    int iMini=9;

    while(iNo!=0)
    {
      iDigit=iNo%10;
      if((iDigit<iMini))
      {
        iMini=iDigit;
      }
      if(iMini==0)
      {
        break;
      }
      iNo=iNo/10;
    }
    return iMini;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);
  
   iRet=CountMiniDigit(iValue);
   printf("Minimum of digit are:%d\n",iRet);


    return 0;
}