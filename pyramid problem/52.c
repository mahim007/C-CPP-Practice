#include<stdio.h>

int main()
{
       int i,j,k,n;
       
       printf("n=");
       scanf("%d",&n);
       for(i=n;i>=1;i--) {
              for(j=i;j<n;j++)
                     printf(" ");
              for(k=1;k<=2*i-1;k++)
                     printf("*");
              
              printf("\n");
       }
       
       
       for(i=2;i<=n;i++) {
              for(j=i;j<n;j++)
                     printf(" ");
              
              for(k=1;k<=2*i-1;k++)
                     printf("*");
              
              printf("\n");
       }
       
       return 0;
}