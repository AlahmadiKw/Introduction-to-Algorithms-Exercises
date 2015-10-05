
#include <stdio.h>
#include "helpers.h"

/* swap: interchangev[i] and v[j] */
void swap(int arr[], int i, int j)
{
	int temp;

	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int min_array(int arr[], int s, int e)
{
	int i_min = s;
	int i;

	if (s == e)
		return s;
	if (s > e)
		return -1;

	for (i=s+1; i<=e; i++)
		if (arr[i] < arr[i_min])
			i_min = i;

	return i_min;

}

void print_arr(int arr[], int n){
	int i;
	for (i=0; i<n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
