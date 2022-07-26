void main()
{
    int n,r;
    printf("enter number");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%2;
        printf("%d",r);
        n=n/2;
    }

}
