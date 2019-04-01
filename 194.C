#include<stdio.h>
void main()
{
    char a,b;
    scanf("%c\t%c",&a,&b);
    if(a=='S'&&b=='R'||b=='S'&&a=='R')
    printf("R");
    else if(a=='S'&&b=='P'||b=='S'&&a=='P')
    printf("S");
    else if(a=='P'&&b=='R'||b=='P'&&a=='R')
    printf("P");
    else if(a==b)
    printf("D");
    
}
