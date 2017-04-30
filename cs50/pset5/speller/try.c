#include <stdio.h>
#include <stdbool.h>


#include "trie.h"


int main (void)
{
    
    char* word = "Blue";
    char* word1 = "Red";
    char* word2 = "Green";
    char* word3 = "Black";
    char* arr[4];
    
    arr[0] = word;
    arr[1] = word1;
    arr[2] = word2;
    arr[3] = word3;
    
    for (int i = 0; i < 4; i++)
    {
    printf("%s\n", arr[i]);
    }
    
    root trie = malloc(sizeof(node));
    
    for (int i = 0; i < 4; i++)
    {
        char* temp = arr[i];
        
        for (int j = 0; j < strlen(temp); j++)
        {
            if (isupper(temp[j]))
            {
                
            }
        }
        
    }
    
    
    
}

