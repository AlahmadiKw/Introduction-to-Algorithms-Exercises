from math import floor

# Heap support functions to return parent and left & right child index
def getLeftChild(i):
	return 2*i+1
def getRightChild(i):
	return 2*i+2
def getParent(i):
	return (i - 1) / 2

# MaxHeapify
# based on page 154. assumes the bin trees at left(i) and right(i) are max heaps
# but A[i] might be smaller than its children thus violating max heap property
# inputs: A for a list of integers, i for an index in the list
def maxHeapify(A, i):
	n = len(A)
	l = getLeftChild(i)
	r = getRightChild(i)
	if l < n and A[l] > A[i]:
		largest = l
	else:
		largest = i
	if r < n and A[r] > A[largest]:
		largest = r
	if largest != i:
		A[i], A[largest] = A[largest], A[i]
		maxHeapify(A, largest)

# iterative version (no loop)
def maxHeapifyIterative(A, i):
	n = len(A)
	largest = -1
	while True:
		l = getLeftChild(i)
		r = getRightChild(i)
		if l < n and A[l] > A[i]:
			largest = l
		else:
			largest = i
		if r < n and A[r] > A[largest]:
			largest = r
		if largest != i:
			A[i], A[largest] = A[largest], A[i]
			i = largest
		else:
			return
