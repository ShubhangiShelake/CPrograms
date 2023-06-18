#include<stdio.h>

int SumDigit(int iNo)
{
    int iCnt=0;
    int iDigit=0,Sum=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo>0)
    {
       iDigit=iNo%10;
       Sum=Sum+iDigit;
      iNo=iNo/10;

    }
    return  Sum;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);
  
   iRet=SumDigit(iValue);
   printf("Summation of digit are:%d\n",iRet);


    return 0;
}