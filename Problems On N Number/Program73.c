#include<stdio.h>
#include<stdlib.h>

void DisplayEvenOddCount(int Arr[],int iSize)
{
    int iCnt=0,iEven=0,iOdd=0;

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iEven++;
        }
        else
        {
            iOdd++;
        }
    }
    printf("Even Count is:%d\n",iEven);
    printf("Odd count is:%d\n",iOdd);
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

    DisplayEvenOddCount(ptr,iLenght);

  free(ptr);
    
    return 0;
}