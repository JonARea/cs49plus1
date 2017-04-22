#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int n;
    
    
        
    {
    
    do {
            printf("How many minutes long is your shower?\n");
            n = get_int();
        }
    while (n < 0);
    }
    
    {
        
        n = n*12;
        printf("That's %i bottles of water\n", n);
    }
}
