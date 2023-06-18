#include<stdio.h>
#include<stdbool.h>

int ReversDigit(int iNo)
{
    int iDigit=0,iRev=0;

    while(iNo!=0)
    {
      iDigit=iNo%10;
      iRev=iRev*10+(iDigit);
      iNo=iNo/10;
      
    }
    return iRev ;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);
  
   iRet=ReversDigit(iValue);
   printf("Number of digit are:%d\n",iRet);


    return 0;
}