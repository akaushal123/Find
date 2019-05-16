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
    int max = n-1;
    int min = 0;
    // TODO: implement a searching algorithm
    if(n < 0)
    return false;
    
    while(n > 0){
        int mid = min + (max - min) /2;
        if(value == values[mid])
            return true;
        else if( value < values[mid] )
                {
                    max = mid - 1;
                }
        else 
                {
                   min = mid + 1;
                }
        n = max - min + 1;
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement a sorting algorithm
    int temp;
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i; j < n; j++)
        {
            if(values[i]>values[j])
            {
                temp = values[i];
                values[i] = values[j];
                values[j] =temp;
            }
        }
    }
    return;
}
