#include<stdio.h>
void main()
{
    char a[10000];
    int n,i,j,k=0;
    scanf("%s",a);
    for(i==0;a[i]!='\0';i++);
    n=i;
    for(i=0;i<n;i++)
    {
        
        if(a[i]=='a'||a[i]=='b')
        {
            k++;
        }
    }
    if(k==n||k==n-1)
    printf("yes");
    else
    printf("no");
    
}
