// Implementing the Selection Sort Algorithm.

#include <stdio.h>
#include <stdbool.h>

void selectionSort(int *a, int size){
    
    int i, j, temp;
   
    for(j=0; j<(size-1); ++j){
        
        int imin = j;                   // Assumed to be the location of the minimum element
       
        for(i=(j+1); i<size; ++i){      // Elements after jth element are compared with a[imin]

            if(a[i]<a[imin]){           // Swapping if other terms are minimum than the assumed
                temp = a[imin];
                a[imin] = a[i];
                a[i] = temp;
            }
        }
    }

}

int main(){
    
    int i, a[] = {2, 7, 4, 1, 5, 3, 64, 25, 12, 22, 11};
    
    int size = sizeof(a)/sizeof(a[0]);
  
    printf("Unsorted: ");
    for(i=0; i<size ;++i)
        printf("%d ", *(a+i));
    printf("\n");

    selectionSort(a, size);
    
    printf("Sorted: ");
    for(i=0; i<size ;++i)
        printf("%d ", *(a+i));
    printf("\n\n");
    
    return 0;
}
