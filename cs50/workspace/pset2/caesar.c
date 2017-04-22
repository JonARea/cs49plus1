#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])

{
     
    if (argc != 2) {
        printf("Run with one argument\n");
        return 1;
    }
     
     long long k = atoll(argv[1]);
    while (k > 26) {
        k -= 26;
    }
    printf("plaintext:");
    string plaintext = get_string();
    //string ciphertext;
    
    
    //add k to plaintext
    {
        char c;
        
        for (int i = 0, n = strlen(plaintext); i < n; i++) {
            
            //check if its alpha
            
            
            if (((plaintext[i] >= 65) && (plaintext[i] <= 90)) || ((plaintext[i] >= 97) && (plaintext[i] <= 122))) {
                
                //loop it around
                if (((plaintext[i] + k >= 65) && (plaintext[i] + k <= 90)) || ((plaintext[i] + k >= 97) && (plaintext[i] + k <= 122))) {
                    c = plaintext[i] + k;
                    printf("%c", c);
                } else {
                    c = plaintext[i] + k - 26;
                    printf("%c", c);
                }
            } else {
                printf("%c", plaintext[i]);
            }
        }
    }
    
    printf("\n");
    return 0;
}

