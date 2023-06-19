#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i=0, j=0;

    if(iRow<0)
    {
        iRow=-iRow;
    }
    if(iCol<0)
    {
        iCol=-iCol;
    }
    if(iRow!=iCol)
    {
        printf("Row and coloum are differant:\n");
        return;
    }

    for(i=1;i<iRow; i++)
    {
        for(j=1; j<iCol; j++)
        {
            if((i>j))
            {
                printf("*\t");   
            }
            else
            {
                printf("&\t",j);
            }

        }
        printf("\n");
    }

}

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter number of row:\n");
    scanf("%d",&iValue1);

    printf("Enter number of coloum:\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}