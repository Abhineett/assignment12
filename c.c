#include<stdio.h>
//int oddnumber(int n);
void main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    oddnumber(n);

}
void oddnumber(int n)
{

    if(n>=1)
    {
        oddnumber(n-1);
        printf("%d",2*n);

    }
}
