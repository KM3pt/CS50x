/* "PSet2 VIGENERE"      
          from CS50                     
                 by               
                 KM3 (pt_2015) */

#include <cs50.h>  
#include <stdio.h>
#include <string.h> 

int main(int argc, string argv[])
{
    // command line error
    if (argc != 2)
    {
        return 1;
    }
    else
    {
        bool key = true;
        
        for(int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if ((argv[1][i] >= 65 && argv[1][i] <= 90) || (argv[1][i] >= 97 && argv[1][i] <= 122))
            {
                key = true;
            }
            else
            {
                key = false;
                return 1;
            }
        }
        
        if (key)
        {
            string k = argv[1];           
            printf("<%s>\n", argv[0]);
            
            string plaintext = GetString();
            string encrypted = plaintext;
            
            // transform the key to lowercase
            for (int i = 0, n = strlen(k); i < n; i++)
            {
                if (k[i] >= 65 && k[i] <= 90)
                    k[i] = k[i] + 97 - 65;
            }
                 
            // encrypt the plaintext with key
            int alpha_count = 0;
                        
            for (int i = 0, n = strlen(encrypted); i < n; i++)
            {
               if ((encrypted[i] >= 65 && encrypted[i] <= 90) || (encrypted[i] >= 97 && encrypted[i] <= 122))
               {
                   alpha_count++;
                   int k_map = (alpha_count - 1) % strlen(k);
                   
                   // keep the uppercase and lowercase
                   if (encrypted[i] >= 65 && encrypted[i] <= 90) 
                       {
                       encrypted[i] = (encrypted[i] - 65 +  (k[k_map] - 97)) % 26 + 65;
                       }
                   else if (encrypted[i] >= 97 && encrypted[i] <= 122)
                       { 
                       encrypted[i] = (encrypted[i] - 97 +  (k[k_map] - 97)) % 26 + 97;
                       }
               }

            }
            printf("Encrypted with key <%s>:\n", k);
            printf("%s\n", encrypted);
            
            return 0;
        }
        else
        {
            return 1;
        }
    }
}
