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
     
    string key = argv[1]; 
    int len = strlen(key);
    {
    for  (int i = 0; i < len - 1; i++) {
        if (!isalpha(key[i])) {
            
            return printf("Key must be alphabetical\n");
            }
        }
    }
    
    
    printf("plaintext:");
    string plaintext = get_string();
    //string ciphertext;
    
    
    //add k to plaintext
    {
        char c;
        
        for (int i = 0, j = 0, k = 0, n = strlen(plaintext); i < n; i++) {
            
            //check if its alpha, if not just return it
            
            
            if (!isalpha(plaintext[i])) {
                printf("%c", plaintext[i]);
                
            } else {
                //convert key char to digit shift
                if (islower(key[j])) {
                   k = key[j] - 97; 
                } else { k = key[j] - 65;
                }
                
                //loop it around
                if ((isupper(plaintext[i]) && islower(plaintext[i] + k)) || (!isalpha(plaintext[i] + k))) {
                    c = plaintext[i] + k - 26;
                    printf("%c", c);
                    j++;
                }
                else {
                    c = plaintext[i] + k;
                    printf("%c", c);
                    j++;
                }
                if (j == strlen(key)) {j = 0;}
            }
            
            
        }
    
    printf("\n");
    return 0;
    }
}
