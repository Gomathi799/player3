#include<stdio.h>
void main()
{
    char a[1000];
    int n,i,c=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++);
    n=i;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='A'&&a[i]<='E'||a[i]>='0'&&a[i]<='9')
        {
            c++;
        }
    }
    if(n==c)
    printf("yes");
    else
    printf("no");
}
