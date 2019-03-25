// Implementing the Bubble Sort Algorithm.

#include <stdio.h>

void swap(int* A, int* B){
    int temp;
    temp = *A;
    *A = *B;
    *B = temp;
}

void bubbleSort(int* arr, int size){
    int i, k, flag;                                                         // c1
    for(k=0; k<(size-1); ++k){              // Max Passes: (n-1)            // c2
        flag = 0;
        for(i=0; i<(size-k-1); ++i){                                        // c3
            if(arr[i+1]<arr[i]){
                swap(&arr[i+1], &arr[i]);
                flag = 1;
            }
        }
        if(flag==0) break;                                                  // c4
        else continue;                                                      // c4
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
        
    bubbleSort(arr, size);

    printf("Sorted: ");
    for(i=0; i<size; ++i)
        printf("%d ", arr[i]);
        printf("\n\n");

    return 0;
}

/* Time Complexity -  Worst Case
   Total = c1 + (c2*(n-1) * c3*(n-k-1)) + c4
   -> c1 + c2*(n-1) * ((n-1) - n*(n-1)/2)                                    // k = 0 to (n-1) Arithmetic progression
   -> c1 + c2*(n-1) * (3n-n2-2)/2                                            // Approximately (Say c2~c3)
   -> a*n2 - b*n + c -->> O(n^2)
*/

/* Time Complexity -  Best Case - An already sorted array is inserted. k = 0 is the first and last pass
    Total = c1 + (c2*(n-1) * c3*(n-k-1)) + c4                                    // k = 0 to (n-1) Arithmetic progression
    -> c1 + c2 * c3 * (n-1) + c4
    -> a*n + b -->> O(n)
*/

/* Time Complexity -  Average Case - An already sorted array is inserted. k = 0 to n/2. Midway is the last pass
   Total = c1 + (c2*(n-1) * c3*(n-k-1)) + c4
   -> c1 + c2*(n-1) * ((n-1) - n*(n-1)/4)                                    // k = 0 to (n-1) Arithmetic progression
   -> c1 + c2*(n-1) * (5n-n2-4)/4                                            // Approximately (Say c2~c3)
   -> a*n2 - b*n + c -->> O(n^2)
*/
