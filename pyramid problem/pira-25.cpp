#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    for(i=i-2;i>=1;i--)
    {
        for(k=1;k<=i;k++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}
