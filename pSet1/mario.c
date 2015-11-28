/* "PSet1 MARIO"      
       from CS50                     
              by               
              KM3 (pt_2015) */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int row, spaces, x, height;

    // get input
    do
    {
        printf("height: ");
        height = GetInt();
    }
    while (height < 0 || height > 23);
    {
        for (row = 0; row < height; row++)
        {
            // print spaces
            for (spaces = 0; spaces < (height - row - 1); spaces++)
            {
                printf(" ");
            }
            // print hashes
            for (x = 0; x < (row + 2); x++)
            {
                printf("#");
            }
        // new line
        printf("\n");
        }
    }
}
