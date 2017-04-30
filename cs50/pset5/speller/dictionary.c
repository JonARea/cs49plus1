/**
 * Implements a dictionary's functionality.
 */
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "dictionary.h"
#include "trie.h"

struct node* root;
int count = 0;

/**
 * Returns true if word is in dictionary else false.
 */ 
bool check(const char *word)
{
     
    struct node* traverse = root;
    
    
    //the child to use for each letter
    int setIndex = 0;
    int letter = 0;
    
    for (int i = 0; i <= strlen(word); i++)
    {
            letter = word[i];
            
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
            
        {
             if (traverse->is_word == true)
             {
                 return true;
             }
             else 
             {
                 return false;
             }
        }
            
        if (traverse->children[setIndex] == NULL) 
            {
               return false;
            }
        else 
        {
            traverse = traverse->children[setIndex];
        }
    }
    return false;
}

/**
 * Loads dictionary into memory. Returns true if successful else false.
 */
bool load(const char *dictionary)
{
     //Initialize trie..
    
    root = (struct node*)malloc(sizeof(node));
    struct node* traverse = root;
    
    for (int i = 0; i < 27; i++)
    {
        traverse->children[i] = NULL;
    }
    
    //the child to use for each letter
    int setIndex = 0;
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
        // else if (isupper(letter))
        //     {
        //         setIndex = letter - 'A';
        //     }
        
        else if (letter == '\n')
            //found \0, set child to true and go back to the top;
            {
             traverse->is_word = true;
             traverse = root;
             count++;
            
             
             continue;
            }
            else if (letter == '\'') 
            {
                setIndex = 26;
            }
        else
            {
                traverse = root;
                continue;
            }
            
            //if no node
        if (traverse->children[setIndex] == NULL) 
            {
                traverse->children[setIndex] = (struct node*)calloc(1, sizeof(struct node));
            }
        traverse = traverse->children[setIndex];
            
        }
    
        while (letter != EOF);
    
    fclose(dic);
    
    return true;
    
}

/**
 * Returns number of words in dictionary if loaded else 0 if not yet loaded.
 */
unsigned int size(void)
{
    return count;
}

/**
 * Unloads dictionary from memory. Returns true if successful else false.
 */
bool unload(void)
{
    bool loopChildren(struct node*);
    
    
    bool finished = loopChildren(root);
    
    if (finished)
    {
        return true;
    }
    else 
    {
        return false;
    }
    
}

bool loopChildren(struct node* a)
    {
        struct node* traverse = a;
        
           //loop children until all are null
            for (int j = 0; j < 27; j++)
            {
                if (traverse->children[j] != NULL)
                {
                    loopChildren(traverse->children[j]);
                }
                
            }
            
            if (traverse != root) 
                {
                    free(traverse);
                    traverse = root;
                }
            else    
            {
                free(root);
            }
            
        return true;
    }
