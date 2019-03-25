// Implementing the Linear Search Algorithm.
// Fact: if(-1) is True

#include <stdio.h>

int linearSearch(int *arr, int size, int x, int *index){            	// Called Fuctinon
    *index = 0;                                                     	// Initialize					// c1
    for(int i=0; i<size; ++i){
	    if(*(arr+i)==x) return 1;											// c2
	    ++(*index);                                                 // Incrementing Index as per requirement	// c2
	}
	return -1;
}

int main(void) {
	int arr[] = {10, 20, 80, 30, 60, 50, 110, 100, 130, 170};       // Given array
	int size = sizeof(arr)/sizeof(arr[0]);                          // Finding it's size
	int index, x = 23;                                              // index | Value to be searched

	if(linearSearch(arr, size, x, &index) == 1)                     // Calling function
	    printf("Exists at index = %d!\n", index);
	    
    else printf("It does not exist!\n");
	
	return -1;
}

/* Time Complexity

Total = c1 + c2*(n) + c3 -->> O(n)

*/
