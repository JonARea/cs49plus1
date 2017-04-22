#define _XOPEN_SOURCE
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <unistd.h>

char guess[1];
char guess4[4];

int main (int argc, string argv[])

{
    if (argc != 2) {
        printf("Usage: ./crack password");
        return 1;
    }
    char salt[] = "50";
    
    string hash = argv[1];
    //string pwrd = crypt(pwrd, salt);
    // int hashlen = strlen(hash);
    // printf("%s Length is%i\n", hash, hashlen);
    // string hashofans = crypt("rofl", salt);
    // int hashofanslen = strlen(hashofans);
    // printf("%s Length is %i\n", hashofans, hashofanslen);
    
    // int a = 5;
    
    // bool y = a == 5;
    // if (y) {
    //     printf("true");
    // } else {
    //     printf("false");
    // }
    
    // {
    //     for (int i = 46; i <= 122; i++) {
    //         guess[0] = i;
            
    //         if (crypt(guess, salt) == hash) {
    //             return printf("%s", guess);
    //         } 
    //     }
            
    // }
    
    {
        for (int i = 65; i <= 122; i++) {
            
            if (i == 91) {
                i = 97;
            }
            guess4[0] = i;
            for (int j = 65; j <= 122; j++) {
                
                if (j == 91) {
                    j = 97;
                }
                guess4[1] = j;
                for (int k = 65; k <= 122; k++) {
                    
                    if (k == 91) {
                        k = 97;
                    }
                    guess4[2] = k;
                    for (int l = 65; l <= 122; l++) {
                        
                        if (l == 91) {
                            l = 97;
                        }
                        guess4[3] = l;
                        if (strcmp(crypt(guess4, salt), hash) == 0) {
                        return printf("%s", guess4);
                        } 
                    }
                }
            }
            printf("No match found yet, guess is %s\n", guess4);
        }
    }
    
}