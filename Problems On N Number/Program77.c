#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckOccurance(int Arr[],int iSize,int iNo)
{
    int iCnt=0,iCount=0;

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
       if((Arr[iCnt])==iNo)
       {
          iCount++;
       }
    }
    if(iCount==0)
    {
        return false;
    }
    else
    {
        return true;
    }

}

int main()
{
    int *ptr=NULL;
    int iLenght=0,i=0,iValue=0;
    bool bRet=false;

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

  bRet=CheckOccurance(ptr,iLenght,iValue);
  if(bRet==true)
  {
    printf("%d Occuare in the array:\n",iValue);
  }
  else
  {
    printf("%d there is no occuare in array:\n",iValue);
  }
  free(ptr);
    
    return 0;
}