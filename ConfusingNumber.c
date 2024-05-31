/*
A confusing number is a number that when rotated 180 degrees becomes a different number with each digit valid.

We can rotate digits of a number by 180 degrees to form new digits.

When 0, 1, 6, 8, and 9 are rotated 180 degrees, they become 0, 1, 9, 8, and 6 respectively.
When 2, 3, 4, 5, and 7 are rotated 180 degrees, they become invalid.
Note that after rotating a number, we can ignore leading zeros.

For example, after rotating 8000, we have 0008 which is considered as just 8.
Given an integer n, return true if it is a confusing number, or false otherwise.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

bool confusingNumber(int n) {

// to prevent error when getting base-10 log of 0
if (n == 0 || n == 1)
    return false;

// gets length of integer
int digits = floor(log10(abs(n))) + 1;

int dividend = 1;
int modulo = 10;

int previousDigit;
int digit;
int i;

for (i = 0; i < digits; i++){
    // gets previous digit for comparison in 1 cases. (11 = false)
    if (i > 0)
        previousDigit = digit;
    
    // gets specific digit in integer
    digit = (n / dividend) % modulo;

    switch (digit){
        case 0:
            //continue;
        case 1:
            if (digit == previousDigit)
                return false;
            //continue;
        case 2:
            return false;
        case 3:
            return false;
        case 4:
            return false;
        case 5:
            return false;
        case 6:
            //continue;
        case 7:
            return false;
        case 8:
            //continue;
        case 9:
            //continue;
    }
    
    dividend = dividend * 10;
}

return true;
}
