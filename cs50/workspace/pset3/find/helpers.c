/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
 
 
bool search(int value, int values[], int n)
{
    
    int low = 0;
    int high = n - 1;
    int mid = 0;
    

    

    if (n <= 0) {
        return false;
    }
    
    while (low <= high) {
        mid = (low + high) / 2;
        
        if (values[mid] == value) {
            return true;
        } else if (values[mid] > value) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
        
    }
    return 0;
}
        
        
        
    


/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    char sorted;
    for (int i = 0; i < n - 1; i++) {
         if (i == 0) {sorted = 'n';}
         
         if (values[i] > values[i + 1]) {
             
             sorted = 'y';
             int mem = values[i + 1];
             values[i + 1] = values[i];
             values[i] = mem;
             
        }
    }   
    if (sorted == 'n') {
            return;
    }
    else {
        sort(values, n);
             
        }    
    
    return;
}
