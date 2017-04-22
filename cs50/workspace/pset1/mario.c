#include <stdio.h>
#include <cs50.h>

int main(void)

{
   
    int h;
        
    {
    
    do {
    
        printf("Choose a pyramid height between 1 and 23\n");
        h = get_int();
        } while (h < 0 || h > 23);
    }
        int sCounter = h - 1;
        int hCounter = 1;
        
    for (int i = 0; i < h; i++) {
        
        
        for (int j = 0; j < sCounter; j++) {
            printf(" ");
        }
        
        for (int j = 0; j < hCounter; j++) {
            printf("#");
        }
        
        printf("  ");
        
        for (int j = 0; j < hCounter; j++) {
            printf("#");
        }
        
        printf("\n");
        sCounter = sCounter - 1;
        hCounter = hCounter + 1;
        
    }
    
    
}