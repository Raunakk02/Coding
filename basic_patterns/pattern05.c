#include<stdio.h>

int main()
{
    int n;
    printf("ENTER NUMBER OF ROWS : ");
    scanf("%d",&n);
    for(int i=0;i<=(n/2)-1;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j>((n/2)-i)&&j<((n/2)+i+1))
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    for(int i=(n/2)-1;i>=0;i--)
    {
        for(int j=n;j>0;j--)
        {
            if(j>((n/2)-i)&&j<((n/2)+i+1))
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}
