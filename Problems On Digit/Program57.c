#include<stdio.h>

void DisplayOddAndEvenDigit(int iNo)
{
    int iEven=0,iOdd=0;
    int iDigit=0;

    if(iNo==0)
    {
        iEven++;
    }

    while(iNo>0)
    {
       iDigit=iNo%10;
       if((iDigit%2)==0)
       {
         iEven++;
       }
       else
       {
        iOdd++;
       }
      iNo=iNo/10;
    }
    printf("Count of Even Digits are;%d\n",iEven);
    printf("Count of Odd Digits are:%d\n",iOdd);

}

int main()
{
    int iValue=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);
  
   DisplayOddAndEvenDigit(iValue);


    return 0;
}