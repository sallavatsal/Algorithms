// Implementing the Binary Search(Recursive) Algorithm.

#include <stdio.h>
#include <stdbool.h>

bool binarySearchRecursive(int *arr, int x, int L, int R){                  // Called function
    int mid;
    if(L>R) return false;                                                   // Terminating Codition
    mid = ((L + R)/2);                                                      // Calculating the middle term
    if(arr[mid]>x) return binarySearchRecursive(arr, x, L, mid-1);          // Middle term: arr[mid] on right - Delete Upper
    else if(arr[mid]<x) return binarySearchRecursive(arr, x, mid+1, R);     // Middle term: arr[mid] on left - Delete Lower
    
    else return true;
}

int main(){
    
    int x = 12;                                                             // Number to search
    int arr[] = {15, 20, 36, 64, 82, 113, 147, 163, 175};
    int size = sizeof(arr)/sizeof(arr[0]);

    if(binarySearchRecursive(arr, x, 0, size-1))                            // Caller function
        printf("The number exists!\n");
    
    else printf("The number does not exist!\n");
    
    return 0;
}

/* Time Complexity of Binary Search Algorithm
    
    Step 1: Applying binary search algorithm to an array of length n
            Next will be n/2. Next will be n/4 and So on... 
            
    Step 2: Time complexity of whole array T(n)
            
            T(n) = T(n/2) + c       // c is a constant as the array keeps on repeating itself
    
    Recursive Tree:
            T(n)     ->     c +     ->     c +   ....   ->  c +
                          T(n/2)           c +              c +
                                          T(n/4)            .
                                                            .
                                                            .
                                                            .
                                                            T(1)
                                                            
                                                            Number of Cs (constants) = k
                                                            
            Left to right: To go from T(n)  ->  Divide by 2    ->  T(n/2) -> ....... T(1)
            Right to left: To go from T(1)  ->  Multiply by 2  ->  ....... T(n/2) -> T(n)
            
            Thus, using right to left approach:
            
                    1*(2^k) = n     // Apply Log on both sides
            Thus,   k = log(n)      // Base 2
            
            So, k * (c) + T(1) ~ log(n)
            
            Time Complexity: O(log(n))
*/
