#include <cs50.h>
#include <stdio.h>
// declare constants

// constants for tiling
int stop_tile = 0;

// number of times to repeat tile
int g = 50;

// constant for row size
int h;

int main(void)
{

    do
    {
        h = get_int("Size: ");
    } while (h < 1);

    do
        // Rows
        for (int i = 0; i < h; i++)

        {
            // spaces to the 1st tile UPPER LEFT side Diamond {k, x, y, z} rows = i
            for (int k = 0; k < h - i - 1; k++)
            {
                printf(" ");
            }
            // hashes for UPPER LEFT Diamod
            for (int x = 0; x <= i; x++)
            {
                printf("$");
            }

            // in this line you can print a space between LEFT and RIGHT side UPPER half diamond

            // hashes UPPER RIGHT Diamond
            for (int y = 0; y < h + i - h + 1; y++)
            {
                printf("$");
            }
            // spaces UPPER RIGHT Diamond
            for (int z = 0; z < h - i - 1; z++)
            {
                printf(" ");
            }

            // SECOND TILE UPPER HALF DIAMOND {p, q, r, s, t} rows = i

            // spaces to the UPPER LEFT side Diamond
            for (int p = 0; p < h - i - 1; p++)
            {
                printf(" ");
            }
            // hashes for UPPER LEFT Diamod
            for (int q = 0; q <= i; q++)
            {
                printf("$");
            }
            // here you can print a space between LEFT and RIGHT side UPPER half diamond

            // hashes UPPER RIGHT Diamond
            for (int r = 0; r < h + i - h + 1; r++)
            {
                printf("$");
            }
            // spaces UPPER RIGHT Diamond
            for (int s = 0; s < h - i - 1; s++)
            {
                printf(" ");
            }
            printf("\n");

            stop_tile++;
        }

    while (stop_tile < g);

    // here finishes first UPPER half of Diamond

    // SPACE between UPPER and LOWER body

    // SPACE between UPPER and LOWER body

    // start of LOWER half diamond
    do
        for (int o = 0; o < h; o++)

        {
            // spaces to the LOWER LEFT side Diamond
            for (int k = 0; k < o; k++)
            {
                printf(" ");
            }
            // hashes for LOWER LEFT Diamod
            for (int x = 0; x < h - o; x++)
            {
                printf("$");
            }
            // here you can add a printed space to separate LOWER LEFT from RIGHT side

            // hashes LOWER RIGHT Diamond
            for (int y = 0; y < h - o; y++)
            {
                printf("$");
            }
            // spaces for LOWER RIGHT Diamond
            for (int z = 0; z <= o; z++)
            {
                printf(" ");
            }
            // SKIP ROW
            printf("\n");

            stop_tile++;
        }

    while (stop_tile < g);

    // SPACE to commandline$
    printf("\n");
}
//  AQUI TERMINA EL PRIMER DIAMANTE