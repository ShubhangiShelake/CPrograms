#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CheckLastOccurance(int Arr[],int iSize,int iNo)
{
    int iCnt=0,iCount=0;

    for(iCnt=iSize-1; iCnt>=0 ;iCnt--)
    {
       if((Arr[iCnt])==iNo)
       {
          break;
       }
    }
    return iCnt;
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

    printf("Enter Frquance number:\n");
    scanf("%d",&iValue);

  iRet=CheckLastOccurance(ptr,iLenght,iValue);
  if(iRet==-1)
  {
    printf("%d there is no LastOccuare in the array:\n",iValue);
  }
  else
  {
    printf("%d  Lastoccuare in array index of %d:\n",iValue,iRet);
  }
  free(ptr);
    
    return 0;
}