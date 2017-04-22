#include <stdio.h>
#include <cs50.h>

int main (void)


{
    float change = 0;
    int coins = 0;
    {
        do {
        printf("How much change is owed?\n");
        change = get_float(); }
        while (change < 0);
    }
    
    {
        while (change > 0.009) {
            
            if (change > 0.24) {
                coins = coins + 1;
                change = change - 0.25;
            } else if (change > .09 && change < .25) {
                coins = coins + 1;
                change = change - .10;
                
            } else if (change > .04 && change < .1) {
                coins = coins + 1;
                change = change - .05;
                
            } else {
                coins = coins + 1;
                change = change - .01;
                
            }
        }
        
    }
    printf("%i\n", coins);
}