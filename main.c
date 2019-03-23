// Implementing the Binary Search Algorithm.

#include <stdio.h>
#include <stdbool.h>

bool binarySearchRecursive(int *arr, int x, int L, int R){                  // Called function
    
    int mid;
    if(L>R) return false;                                                   // Terminating Codition

    mid = ((L + R)/2);                                                        // Calculating the middle term
    
    if(arr[mid]>x) return binarySearchRecursive(arr, x, L, mid-1);          // Middle term: arr[mid] on right
    else if(arr[mid]<x) return binarySearchRecursive(arr, x, mid+1, R);     // Middle term: arr[mid] on right
    
    else return true;
}

int main(){
    
    int x = 12;                                                            // Number to search
    int arr[] = {15, 20, 36, 64, 82, 113, 147, 163, 175};
    int size = sizeof(arr)/sizeof(arr[0]);

    if(binarySearchRecursive(arr, x, 0, size-1))                            // Caller function
        printf("The number exists!\n");
    
    else printf("The number does not exist!\n");
    
    return 0;
}
