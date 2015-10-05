

from ch4_exercises import *


if __name__ == '__main__':

	test_list = [-100, -3, -25, 200, -2, -2] #, -16, -23, 18, 20,
	             # -7, 12, -5, -22, 15, -4, 7]

	print len(test_list)*'%3s ' % (tuple(test_list))
	print len(test_list)*'%3s ' % (tuple(range(len(test_list))))

	(l, r, total) = find_max_subarray(test_list, 0, len(test_list)-1)

	print "%d, %d, %d" % (l, r, total)