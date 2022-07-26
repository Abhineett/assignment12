#include<stdio.h>
void squares(int n);
void main()
{

    int n;
    printf("enter the number");
    scanf("%d",&n);
    squares(n);
}
void squares(int n)
{
    if(n>=1)
    {
        squares(n-1);
        printf("%d",n*n);
    }
}
