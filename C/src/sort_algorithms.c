
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "helpers.h"
#include "sort_algorithms.h"

/**
 * Insertion sort
 * inputs: int arr[], size of arr n
 * ouput: none
 */
void insertion_sort(int arr[], int n)
{
	int j, i;
	int key;

	for (j=1; j<n; j++){
		key = arr[j];

		for (i=j-1; i>=0 && arr[i]>key; i--)
			arr[i+1] = arr[i];

		arr[i+1] = key;
	}
}

void _insert(int arr[], int i, int k)
{
	int key = arr[k];
	if (i>=0 && arr[i]>key){
		swap(arr,i,k);
		_insert(arr, i-1, k-1);
	}
}

void insertion_sort_recrursive(int arr[], int n)
{
	int j;
	for (j=1; j<n; j++)
		_insert(arr, j-1, j);
}

/**
 * Selection sort
 * inputs: int arr[], size of arr n
 * ouput: none
 */
void selectrion_sort(int arr[], int n)
{
	int j, i_min;

	for (j=0; j<n-1; j++){
		i_min = min_array(arr, j, n-1);
		swap(arr,j, i_min);
	}
}

/**
 * Merge
 * combine two sorted subarrays arr[p:q] & arr[q+1:r] into one sorted array
 * inputs: int arr[], int p, q, r
 * ouput: none
 */
void merge(int arr[], int p, int q, int r)
{
	int n1, n2;
	int i, j, k;

	n1 = q-p+1;
	n2 = r-q;

	int larr[n1], rarr[n2];

	for (i=0; i<n1; i++)
		larr[i] = arr[p+i];
	for (j=0; j<n2; j++)
		rarr[j] = arr[q+1+j];

	i = j = 0;
	for (k=p; k<=r; k++)
		if (i<n1 && (j==n2 || larr[i] <= rarr[j]))
			arr[k]=larr[i++];
		else if (j<n2 && (i==n1 || larr[i] > rarr[j]))
			arr[k]=rarr[j++];
}

/**
 * Merge Sort
 * inputs: int arr[], n
 * ouput: none
 */
void _merge_sort(int arr[], int p, int r)
{
	int q;
	if (p < r) {
		q = (p+r)/2;
		_merge_sort(arr, p, q);
		_merge_sort(arr, q+1, r);
		merge(arr, p, q, r);
	}
}
void merge_sort(int arr[], int n)
{
	_merge_sort(arr, 0, n-1);
}


/**
 * Quicksort
 * Source: http://www.comp.dit.ie/rlawlor/Alg_DS/sorting/quickSort.c
 */
int partition( int arr[], int l, int r) {
	int pivot, i, j, t;
	pivot = arr[l];
	i = l; j = r+1;

	while( 1){
		do ++i; while( arr[i] <= pivot && i <= r );
		do --j; while( arr[j] > pivot );
		if( i >= j ) break;
		t = arr[i]; arr[i] = arr[j]; arr[j] = t;
	}
	t = arr[l]; arr[l] = arr[j]; arr[j] = t;
	return j;
}

void quickSort( int arr[], int l, int r){
	int j;
	if( l < r ) {
		// divide and conquer
	    j = partition( arr, l, r);
	   quickSort( arr, l, j-1);
	   quickSort( arr, j+1, r);
	}
}