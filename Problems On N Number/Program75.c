#include<stdio.h>
#include<stdlib.h>

void DisplayEvenOddSum(int Arr[],int iSize)
{
    int iCnt=0,iEven=0,iOdd=0;

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iEven=iEven+Arr[iCnt];
        }
        else
        {
            iOdd=iOdd+Arr[iCnt];
        }
    }
    printf("Summation of even number is:%d\n",iEven);
    printf("Summation of odd number is:%d\n",iOdd);
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

    DisplayEvenOddSum(ptr,iLenght);

  free(ptr);
    
    return 0;
}