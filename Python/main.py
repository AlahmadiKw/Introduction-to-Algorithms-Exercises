

from ch4_exercises import *
from ch6_exercises import *

if __name__ == '__main__':

	A = [16, 4, 10, 14, 7, 9, 3, 2, 8, 1]
	Aexpected = [16, 14, 10, 8, 7, 9, 3, 2, 4, 1]
	maxHeapify(A, 1)
	print A
	print Aexpected