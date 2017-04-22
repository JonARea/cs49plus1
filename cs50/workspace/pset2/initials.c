#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (void)


{
    string s = get_string();
    int i = 0;
    {
        
    while (s[i] == ' ') {
        i++;
    }
    printf("%c", s[i]);
    }
    
    while (i < strlen(s)) {
        
        if (s[i] == ' ') {
            if (s[i + 1] != ' ') {
            printf("%c", s[i + 1]);
            }
        }
        i++;
    }
    printf("\n");
    
    
}