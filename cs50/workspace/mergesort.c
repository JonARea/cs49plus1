#include <stdio.h>
#include <cs50.h>


void mergesort (int values[], int n);

int main(void)
{
    int test[6] = {6, 5, 4, 3, 2, 1};
    int len = 6;
    
    mergesort(test, len);
    printf("%i", test);
    
}

void mergesort (int values[], int n)
{
    int low = 0;
    int high = n - 1;
    int mid = high / 2;
    

    

    if (n <= 0) {
        return false;
    }
    
    if (n > 1) {
        int leftside[mid + 1];
        int rightside[high - mid];
        for (int i = 0; i <= mid; i++) {
            leftside[i] = values[i]; 
        }
        for (int i = 0; i <= high- mid; i++) {
            rightside[i] = values[i + mid + 1];
        }
        mergesort(leftside, mid + 1);
    } else {
        
        
    }
    return 0;
        
    
    
    
    
    
    
}