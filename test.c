#include <stdio.h>

int main()
{
    int num1, num2, num3;
    char str[] = "GOOD";
    printf("Enter first grades:");
    scanf("%d", &num1);
    printf("Enter second grades:");
    scanf("%d", &num2);
    printf("Enter third grades:");
    scanf("%d", &num3);

    float avg = (num1 + num2 + num3) / 3;

    printf("Average grades: %.2f\n", avg);
    if (avg >= 80)
    {
        printf("%s\n", str);
    }
}