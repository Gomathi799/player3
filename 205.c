#include<stdio.h>
void main()
{
    char a[1000];
    int n,i,j;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            a[i]=a[i]-32;
        }
        else if(a[i]>='A'&&a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
    }
    for(i=0;a[i]!='\0';i++)
    printf("%c",a[i]);
}
