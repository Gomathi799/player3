#include<stdio.h>
void main()
{
    int a,b,c,r,n=0,i=1,k,l=0;
    scanf("%d%d",&a,&b);
    c=a*b;
    while(c)
    {
        r=c%2;
        n=n+(i*r);
        i=i*10;
        c=c/2;
    }
    while(n)
    {
        k=n%10;
        if(k==1)
        {
            l++;
        }
        n=n/10;
    }
    printf("%d",l);
}
