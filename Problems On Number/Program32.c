#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iAns=1;
    int iCnt=0;
     
     printf("Factors are:\n");
    for(iCnt=1; iCnt<=(iNo/2); iCnt++)
    {
        if(iNo%iCnt==0)
        {
           printf("%d\n",iCnt);
        }
    }
    
}

int main()
{
    int iValue=0;

   printf("Enter Number:\n");
   scanf("%d",&iValue);

   DisplayFactors(iValue);

    return 0;
}