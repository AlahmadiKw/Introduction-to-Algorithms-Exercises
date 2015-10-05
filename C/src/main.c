
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main()
{
	int arr[10] = {1,5,3,6,0,7,4,8,9,2};
	// int x[10]   = {0, 2, 4, 6, 9, 1, 3, 5, 7, 8};

	printf("min is at index %d\n\n", min_array(arr,0,9));

	/* sorting demo */
	printf("Before sort\n");
	print_arr(arr, 10);

	// insertion_sort(arr, 10);
	// selectrion_sort(arr, 10);
	// merge_sort(arr, 10);
	insertion_sort_recrursive(arr, 10);

	printf("\nAfter sasmdlowrt\n");
	print_arr(arr, 10);


	printf("search for value = %d is at index = %d\n",
		   6,
		   binary_search(arr,6,10) );


	printf("\n\n");
}
