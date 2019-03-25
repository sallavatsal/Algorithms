// Implementing the Selection Sort Algorithm.

#include <stdio.h>
#include <stdbool.h>

void selectionSort(int *arr, int size){
    
    int i, j, temp;
    
    for(i=0; i<(size-1); ++i){
        int imin = i;                   // Assumed to be the location of the minimum element              // c1
        for(j=(imin+1); j<size; ++j){   // Elements after jth element are compared with a[imin]
            if(arr[j]<arr[imin])            // Swapping if other terms are minimum than the assumed           // c2
                imin = j;               // Update the minimum index                                       // c2
        }
        temp = arr[i];                                                                                      // c3
        arr[i] = arr[imin];                                                                                   // c3
        arr[imin] = temp;                                                                                   // c3
    }
}

int main(){
    
    int i, arr[] = {111, 2, 7, 4, 1, 5, 3, 64, 25, 12, 22, 11};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printf("Unsorted: ");
    for(i=0; i<size ;++i)
        printf("%d ", *(arr+i));
    printf("\n");
    
    selectionSort(arr, size);
    
    printf("Sorted: ");
    for(i=0; i<size ;++i)
        printf("%d ", *(arr+i));
    printf("\n\n");
    
    return 0;
}

/* Output
 Unsorted: 2 7 4 1 5 3 64 25 12 22 11
 Sorted: 1 2 3 4 5 7 11 12 22 25 64
 */

// Time Complexity
/* c1, c2 & c3 are considered in the worst cases

c1 -> (n-1) times
c2 -> (n-1) [for i=0] + (n-2) [for i=1] + (n-3) [for i=2] .... + (1) [for i=(n-1)] ---> Arithmetic Progression -> n*(n-1)/2 
c3 -> (n-1) times

Total = (n-1)*c1 + n(n-1)/2*c2 + (n-1)*c3 = a*(n^2) + b*(n) + c
Total -->> O(n^2)
*/
