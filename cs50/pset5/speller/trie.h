#ifndef TRIE_H
#define TRIE_H

#include <stdbool.h>

typedef struct node
{
    
    bool is_word;
    struct node * children[27];
    
}
node;

node * root;



#endif