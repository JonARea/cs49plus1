#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (void)


{
    string initials = "";
    string s = get_string();
    initials = s[0];
    
    for (int i = 0; i < strlen(s); i++) {
        
        if (s[i] == '\0') {
            initials += s[i+1];
        }
    }
    
    printf("%s\n", initials);
}