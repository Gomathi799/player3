#include<stdio.h>
void main()
{
    char a[10000];
    int n,i,j,k=0;
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++);
    n=i;
    for(i=0;i<n;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            printf("%c",a[i]);
            a[i]='$';
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!='$')
        printf("%c",a[i]);
    }
}
