#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[],int iSize)
{
    int iCnt=0,iSum=0;

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        iSum=iSum+Arr[iCnt];
    }
    return (iSum/iSize);

}

int main()
{
    int *ptr=NULL;
    int iLenght=0,i=0;
    float fRet=0;

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

  fRet=Average(ptr,iLenght);
  printf("Average is:%f\n",fRet);

  free(ptr);
    
    return 0;
}