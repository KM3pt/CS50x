/* "PSet2 CAESAR"      
        from CS50                     
               by               
               KM3 (pt_2015) */

#include <cs50.h>  
#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 

int main(int argc, string argv[])
{
    // single command-line argument
    if (argc != 2)
    {
        return 1;
    }
    else
    {
        bool digit = true;
        
        for(int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (argv[1][i] >= 48 && argv[1][i] <= 57)
            {
                digit = true;
            }
            else
            {
                digit = false;
                return 1;
            }
        }
        
        if (digit)
        {
            // transform the string into int
            int k = atoi(argv[1]); 
            printf("<%s>\n", argv[0]);
            string plaintext = GetString();
            string encrypted = plaintext;
            
            // encrypt with the user key
            for (int i = 0, n = strlen(encrypted); i < n; i++)
            {
               // keep the uppercase and lowercase 
               if (encrypted[i] >= 65 && encrypted[i] <= 90) 
                   { 
                   encrypted[i] = (encrypted[i] - 65 +  k) % 26 + 65;
                   }
               else if (encrypted[i] >= 97 && encrypted[i] <= 122) 
                   {
                   encrypted[i] = (encrypted[i] - 97 +  k) % 26 + 97;
                   }
            }
            printf("Encrypted with key %d:\n", k);
            printf("%s\n", encrypted);
            
            return 0;
        }
        else
        {
            return 1;
        }
    }
}
