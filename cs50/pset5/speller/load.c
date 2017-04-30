#include <stdio.h>
#include <stdbool.h>


#include "trie.h"

bool load (char* dictionary)
{

    //Initialize trie..
    root trie = malloc(sizeof(node));
    node* traverse = trie;
    
    //the child to use for each letter
    int setIndex;
    int letter;
    
        
    FILE* dic = fopen(dictionary, "r");
        
        if (dic == NULL)
        {
            fprintf(stderr, "Cound not open your dic");
            return false;
        }
        
        
        //loop through chars in file and insert into trie
        do 
        {
            letter = fgetc(dic);
            
            if (islower(letter)) 
            {
                setIndex = letter - 'a';
            }
        else if (isupper(letter))
            {
                setIndex = letter - 'A';
            }
        else if (letter == '\'') 
            {
                setIndex = 26;
            }
        else if (letter == '\0')
            //found \0, set child to true and go back to the top;
            {
             traverse->is_word = true;
             traverse = trie;
             count++;
             continue;
            }
        else
            {
                traverse = trie;
                continue;
            }
            
            //if no node
        if (traverse->children[setIndex] == NULL) 
            {
                traverse->children[setIndex] = (node*)malloc(sizeof(node));
            }
        traverse = traverse->children[setIndex];
            
        }
    
        while (!feof(dic));
    
    fclose(dic);
    return true;
}

