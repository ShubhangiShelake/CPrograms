#include<stdio.h>

int SumFactors(int iNo)
{
    int iAns=0;
    int iCnt=0;
     
    for(iCnt=1; iCnt<=(iNo/2); iCnt++)
    {
        if(iNo%iCnt!=0)
        {
           iAns=iAns+iCnt;
        }
    }
    return iAns;
    
}

int main()
{
    int iValue=0;
    int iRet=0;

   printf("Enter Number:\n");
   scanf("%d",&iValue);

    iRet=SumFactors(iValue);
    printf("Summation of non factor is :%d\n",iRet);

    return 0;
}