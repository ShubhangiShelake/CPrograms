#include<stdio.h>
#include<stdbool.h>

bool DivisibleByFive(int iNo)
{
    if((iNo%5)==0)
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

     printf("Enter the First Element:\n");
     scanf("%d",&iValue);

     iRet=DivisibleByFive(iValue);
     if(iRet==true)
     {
        printf("%dNumber is Divisible by 5 \n");
     }
     else
     {
        printf("%dNumber is not Divisibleby 5\n");
     }

    return 0;
}