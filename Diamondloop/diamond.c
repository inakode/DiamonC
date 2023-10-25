#include <stdio.h>
#include <cs50.h>

int h;

int main(void)
{
    // this diamond spaces are dotted, try it.
    do
    {
        h = get_int("Height: ");
    } while (h < 1);

    // Rows
    for (int i = 0; i < h; i++)
    {
        // dots to the UPPER LEFT side Diamond
        for (int k = 0; k < h - i - 1; k++)
        {
            printf(".");
        }
        // hashes for UPPER LEFT Diamod
        for (int x = 0; x <= i; x++)
        {
            printf("$");
        }
        printf(" ");
        // hashes UPPER RIGHT Diamond
        for (int y = 0; y < h + i - h + 1; y++)
        {
            printf("$");
        }
        // Dots UPPER RIGHT Diamond
        for (int z = 0; z < h - i - 1; z++)
        {
            printf(".");
        }

        printf("\n");
    }
    // here finishes first UPPER half of Diamond

    // SPACE between UPPER and LOWER body
    printf("\n");
    // SPACE between UPPER and LOWER body

    // start of LOWER half diamond
    for (int i = 0; i < h; i++)
    {
        // dots to the LOWER LEFT side Diamond
        for (int k = 0; k < i; k++)
        {
            printf(".");
        }
        // hashes for LOWER LEFT Diamod
        for (int x = 0; x < h - i; x++)
        {
            printf("$");
        }
        printf(" ");
        // hashes LOWER RIGHT Diamond
        for (int y = 0; y < h - i; y++)
        {
            printf("$");
        }
        // Dots for LOWER RIGHT Diamond
        for (int z = 0; z <= i; z++)
        {
            printf(".");
        }
        // SPACE
        printf("\n");
    }
    // SPACE
    printf("\n");
}
