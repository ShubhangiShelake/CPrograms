#include<stdio.h>

int CountMaxDigit(int iNo)
{
    int iDigit=0;
    int iMax=0;

    while(iNo!=0)
    {
      iDigit=iNo%10;
      if((iDigit>iMax))
      {
        iMax=iDigit;
      }
      if(iMax==9)
      {
        break;
      }
      iNo=iNo/10;
    }
    return iMax;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);
  
   iRet=CountMaxDigit(iValue);
   printf("Miximum of digit are:%d\n",iRet);


    return 0;
}