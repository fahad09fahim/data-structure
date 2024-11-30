#include <stdio.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    // Error handling
    if (num < 0 || num > 100)
    {
        printf("Invalid Input\n");
        return 1;
    }
    //  grade checking
    if (num >= 80 && num <= 100)
    {
        printf("A+\n");
    }
    else if (num >= 60 && num <= 79)
    {
        printf("A \n");
    }
    else if (num >= 40 && num <= 59)
    {
        printf("B \n");
    }
    else if (num >= 39 && num <= 30)
    {
        printf("C \n");
    }
    else if (num >= 0 && num <= 30)
    {
        printf("F\n");
    }
    return 0;
}