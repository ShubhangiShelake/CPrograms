#include<stdio.h>
#include<stdbool.h>

int SumFactors(int iNo)
{
    int iAns=0;
    int iCnt=0;
     
    for(iCnt=1; iCnt<=(iNo/2); iCnt++)
    {
        if(iNo%iCnt==0)
        {
           iAns=iAns+iCnt;
        }
    }
    return iAns;
    
}

bool CheckPerfect(int iData)
{
    int iAns=0;

    iAns=SumFactors(iData);
    if(iAns==iData)
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

   printf("Enter Number:\n");
   scanf("%d",&iValue);

    bRet=CheckPerfect(iValue);
    if(bRet==true)
    {
        printf("It is perfect number:\n");
    }
    else
    {
        printf("It is not a perfect number:\n");
    }

    return 0;
}