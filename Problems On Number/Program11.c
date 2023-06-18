#include<stdio.h>
#include<stdbool.h>

bool DivisibleByFiveOrThree(int iNo)
{
    if((iNo%3)==0 && (iNo%5)==0)
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
    int iValue=0,iRet=0;

     printf("Enter the Number:\n");
     scanf("%d",&iValue);

     iRet=DivisibleByFiveOrThree(iValue);
     if(iRet==true)
     {
        printf("Number is Divisibleby 5 or 3\n");
     }
     else
     {
        printf("Number is not Divisible by 5 or 3\n");
     }   

}