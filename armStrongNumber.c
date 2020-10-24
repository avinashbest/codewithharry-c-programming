#include <stdio.h>
/*The number which each digit's cube is equal to orignial number then it's called armstrong number.*/
void isArmstrong(int n) //Function for finding Armstrong
{
    int a, sum, rem;
    a = n;
    sum = 0;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }
    if (sum == a)
        printf("%d is armstrong number", a);
    else
        printf("%d is not armstrong number", a);
}
int main()
{
    int n;
    printf("Enter the number to check where number is armstrong or not:");
    scanf("%d", &n);
    isArmstrong(n);//calling function

    return 0;
}
