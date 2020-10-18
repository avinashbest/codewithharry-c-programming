#include<stdio.h>
/*The number which each number is cube is equal to orignial number then it's called armstrong number.*/
int main()
{
    int n,a,sum,rem;
    printf("Enter the number to check where number is armstrong or not:");
    scanf("%d",&n);
    a=n;
    sum=0;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(sum==a)
        printf("%d is armstrong number",a);
    else
        printf("%d is not armstrong number",a);
    return 0;
}
