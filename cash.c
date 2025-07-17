#include <stdio.h>
#include <math.h>

int main(void)
{
    float dollars;

    // Prompt user until they give a positive float
    do
    {
        printf("Change owed: ");
        scanf("%f", &dollars);
    }
    while (dollars < 0);

    // Convert dollars to cents and round to nearest integer
    int cents = round(dollars * 100);

    // Count coins
    int coins = 0;

    coins += cents / 25;
    cents %= 25;

    coins += cents / 10;
    cents %= 10;

    coins += cents / 5;
    cents %= 5;

    coins += cents;

    printf("%d\n", coins);
}
