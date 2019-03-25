// Implementing the Selection Sort Algorithm.

#include <stdio.h>

void bubbleSort(int* arr, int size){
    
    int i, k, temp, flag;
    
    for(k=0; k<(size-1); ++k){              // Max Passes: (n-1)
        flag = 0;
        for(i=0; i<(size-1); ++i){
            if(arr[i+1]<arr[i]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                flag = 1;
            }
        }
        if(flag==0) break;
        else continue;
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
