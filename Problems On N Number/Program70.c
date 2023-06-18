#include<stdio.h>
#include<stdlib.h>

int SumOfArray(int Arr[],int iSize)
{
    int iCnt=0,iSum=0;

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        iSum=iSum+Arr[iCnt];
    }
    return iSum;

}

int main()
{
    int *ptr=NULL;
    int iLenght=0,i=0,iRet=0;

    printf("Enter the size of array:\n");
    scanf("%d",&iLenght);

    ptr=(int*)malloc(iLenght*sizeof(int));

    printf("Enter the element:\n");
    for(i=0;i<iLenght;i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    printf("element of array are:\n");
    for ( i = 0; i < iLenght; i++)
    {
        printf("%d\t",ptr[i]);
    }
    printf("\n");

  iRet=SumOfArray(ptr,iLenght);
  printf("Summation is:%d\n",iRet);

  free(ptr);
    
    return 0;
}