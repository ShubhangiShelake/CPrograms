#include<stdio.h>
#include<stdlib.h>

void DisplayRevers(int Arr[], int iSize)
{
    int iCnt =0;

    for(iCnt = iSize; iCnt >=0; iCnt--)
    {
        printf("%d\t",Arr[iCnt]);
    }
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(i = 0 ;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("\n");

     DisplayRevers(ptr, iLength);


    free(ptr);

    return 0;
}