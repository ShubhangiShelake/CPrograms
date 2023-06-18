#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrown(int iNo)
{
    int iDigit=0,iRev=0;
    int temp=iNo;

    while(iNo!=0)
    {
      iDigit=iNo%10;
      iRev=iRev*10+(iDigit);
      iNo=iNo/10;
      
    }
    if(iRev==temp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter number:\n");
    scanf("%d",&iValue);
  
   bRet=CheckPallindrown(iValue);
   if(bRet==true)
   {
     printf("It is number are pallindrown:\n");
   }
   else
   {
     printf("It is not a pallindrown number:\n");
   }


    return 0;
}