#include<stdio.h>
#include<stdbool.h>

bool DivisibleByFive(int iNo)
{
    int iAns=0;
    iAns=iNo%5;
    if(iAns==0)
    {
        return 1;
    }
    else
    {
        return 0;
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
        printf("%dNumber is Divisibleby 5 \n");
     }
     else
     {
        printf("%dNumber is not Divisible by 5\n");
     }   

}