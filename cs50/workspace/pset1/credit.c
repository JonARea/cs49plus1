#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)



{
    int len = 0;
    int sum = 0;
    long long cc_number;
    printf("Please enter your card number\n");
    cc_number = get_long_long();
    printf("THe number is %lld\n", cc_number);
    
    //find length of number
    {
        long long i = cc_number;
        
        while (i > 0) {
            if (i >= 10) {
                i = i / 10;
                len++;
            } else {
                i = 0;
                len++;
            }
        }
        printf("Length of number is %i\n", len);
    }
    
    //check if its a valid length
    {
        if (len != 13 && len != 15 && len != 16)
        {
            printf("Length of number is invalid\n");
            return 0;
        }
        
    }
    
    //check if its a valid number
    {
        long long num = cc_number;
        int sumotherdigits = 0;
        
        
        {
            while (num > 0) {
               sumotherdigits += num % 10; 
                num /= 10;
                {
                    //check if its more than 2 digits when multiplied by 2 and sum digits if so
                    if ((num % 10) * 2 > 9) {
                        sum += (num % 10) * 2 - 9;  
                    } else {
                        sum += (num % 10) * 2;
                    }
                }
                num /= 10;
            }
        }
        sum += sumotherdigits;
        {
            
        if (sum % 10 == 0) {
            printf("Card is Valid\n");
            } else {
            printf("INVALID\n");
            }
        }
    }
}