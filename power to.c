#include<stdio.h>
int main()
{   long int p;
    int n;
    double q;
    printf("-----------------------------------------------------------------------\n");
    printf("2 to power n        n          2 to power -n\n");
    printf("-----------------------------------------------------------------------\n");

    p=1;

    for(n=0;n<21;++n)
        {
            if(n==0)
                p=1;
            else
                p=p*2;
            q=1/(double)p;
            printf("%10ld %10d %20.6lf\n",p,n,q);
        }

    return 0;
}
