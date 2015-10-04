
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "helpers.h"
#include "search_algorithms.h"

/**
 * Binary Search
 * inputs: int arr[], n
 * ouput: none
 */
int _binary_search(int arr[], int s, int e, int v)
{
	int mid = s+(e-s)/2;

	if (s > e)
		return -1;
	if (v == arr[mid])
		return mid;
	else if (v < arr[mid])
		return _binary_search(arr, s, mid, v);
	else
		return _binary_search(arr, mid+1, e, v);



	return -1;
}

int binary_search(int arr[], int v, int n){
	return _binary_search(arr, 0, n-1, v);
}
