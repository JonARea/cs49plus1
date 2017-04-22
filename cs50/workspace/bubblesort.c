#include <stdio.h>
#include <cs50.h>

void sort(int values[], int n);

int main(void) 
{
    int test[5] = {5,4,3,2,1};
    int len = 5;
    
    sort(test, len);
    
    return 0;
}


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
            printf("Finished sorting array");
            for (int j = 0; j < n; j++) {
                 printf("%i", values[j]);
            }
           
    }
    else {
        sort(values, n);
             
        }    
    
    return;
}