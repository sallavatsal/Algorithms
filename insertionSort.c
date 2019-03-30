// Implementing the Bubble Sort Algorithm.

#include <stdio.h>

void insertionSort(int *arr, int size){
    int i, hole, value;

    for(i=1; i<(size-1); ++i){
        hole = i;                            // Imaginary hole                            //c1
        value = arr[i];                      // Temporary Stored                          //c1
        
        while(hole>0 && arr[hole-1]>value){                                               //c2
            arr[hole] = arr[hole-1];
            --hole;
        }
        
        arr[hole] = value;                   // Fill up the hole with the value           //c2
     }
}

int main(){
    int i;
    int arr[] = {2, 7, 4, 1, 5, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printf("Unsorted: ");
    for(i=0; i<size; ++i)
        printf("%d ", arr[i]);
    printf("\n");
    
    insertionSort(arr, size);
    
    printf("Sorted: ");
    for(i=0; i<size; ++i)
        printf("%d ", arr[i]);
    printf("\n\n");
    
    return 0;
    
}

/* Time Complexity (Best Case: Sorted)
    Total = (c1+c3)*(n-1) = O[n]; */

/* Time Complexity (Worst Case: Reverse Sorted)
    Total = c1+c3 + (1+2+3+....+(n-1) )= a*n^2 +b*n + c = O[n^2]; */

/* Time Complexity (Average Case)
    Total = c1+c2+c3 = O[n^2]; */

// Even though with the same time complexity as the bubble sort and the selection sort, insertion sort is better.
