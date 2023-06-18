#include<stdio.h>

int SummationArray(int Data[],int iSize)
{
    int Sum=0,iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        Sum=Sum+Data[iCnt];
    }
    return Sum;

}

int main()
{
  int Arr[5];
  int i=0,iRet=0,iValue=0;

  printf("Enter element of array:\n");
  for(i=0; i<5; i++)
  {
    scanf ("%d",&Arr[i]);
  }

  printf("Element of array are:\n");
  for(i=0; i<5;i++)
  {
    printf("%d\n",Arr[i]);
  }

   iRet=SummationArray(Arr,5);
   printf("Summation is:%d\n",iRet);
  
  return 0;
}