#include <stdio.h>

int main()
{
    int age;
    printf("enter age :");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("You are eligible for Voting");
    }
    else
    {
        printf("You are not eligible for Voting");
    }
    return 0;
}
