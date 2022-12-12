//binomial theoram using c
factorial(int n)
{
    int product;
    for (int i=1;i<=n;i++)
    {
        product *= i;
    }
    return product;
}
comput(int x,int y)
{
    int comp;
    comp = factorial(x)/factorial(x-y)*factorial(y);
    return comp;    
}
main()
{
    float n;
    printf("The format is (a+b)^n.\nWhat is the n? ");
    scanf("%f",&n);
    for (int c=0;c<=n;c++)
    {
        printf("%fa^%fb^%d\n",comput(n,c),n-c,c);
    }
}