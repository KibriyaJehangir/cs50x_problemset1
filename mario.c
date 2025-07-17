#include <stdio.h>

int main(void)
{
    int height;

    // Prompt for height between 1 and 8 (inclusive)
    do
    {
        printf("Height: ");
        scanf("%d", &height);
    }
    while (height < 1 || height > 8);

    // Loop to build the pyramid
    for (int i = 0; i < height; i++)
    {
        // Print spaces
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }

        // Print hashes
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }

        // Move to the next row
        printf("\n");
    }

    return 0;
}
