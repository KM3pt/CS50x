/* "PSet2 INITIALS"      
          from CS50                     
                 by               
                 KM3 (pt_2015) */

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    // nome
    printf("");
    string name = GetString();
    
    if (name != NULL)
    {
        // print first inicial
        printf("%c", toupper(name[0]));
        
        // print any inicial after a space
        for (int i = 0, n = strlen(name); i <= n; i++)
        {
            if (name[i] == ' ')
            {
                printf("%c", toupper(name[i + 1]));
            }
        }
        // retuns a new line
        printf("\n");
        }
}  

