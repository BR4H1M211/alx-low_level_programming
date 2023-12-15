/*
 * File: 9-print_comb.c
 * Auth: Brahim
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main() {
    int digit;
  
    for (digit = 0; digit < 10; digit++) {
        putchar(digit + '0');
        
        if (digit != 9) {
            putchar(',');
            putchar(' ');
        }
    }
    
    putchar('\n');
    return 0;
}
