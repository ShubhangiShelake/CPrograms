#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Minimum(int Arr[],int isize)
{
    int iCnt=0;
    int iMini=Arr[0];

    for(iCnt=0; iCnt<isize; iCnt++)
    {
        if((Arr[iCnt]<iMini))
        {
            iMini=Arr[iCnt];
        }
    }
    return iMini;

}

int main()
{
    int *ptr=NULL;
    int iLenght=0,i=0,iValue=0;
    int iRet=0;

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

   iRet=Minimum(ptr,iLenght);
   printf("Minimum number are:%d\n",iRet);
    
  free(ptr);
    
    return 0;
}