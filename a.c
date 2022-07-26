#include<stdio.h>
int naturalnumber(int n);
void main()
{

    int n;
    printf("enter the number");
    scanf("%d",&n);
    naturalnumber(n);
}
int naturalnumber(int n)
{
    if(n>=1)
    {
        naturalnumber(n-1);
        printf("%d",n);


    }





}

