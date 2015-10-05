##################################################
# find_max_cross_subarray
# input: list a, int low, int mid, int high
# output: tuple(left, right, sum)
##################################################
def find_max_cross_subarray(a, low, mid, high):
	left_sum = -9999
	left_index = 0
	t_sum = 0

	for index, val in enumerate(reversed(a[low:mid+1])):
		# print "(index, val) = (%d, %d)" % (index, val)
		t_sum += val
		if t_sum > left_sum:
			left_sum = t_sum
			left_index = mid - index

	right_sum = -9999
	right_index = 0
	t_sum = 0

	for index, val in enumerate(a[mid+1:high]):
		t_sum += val
		if t_sum > right_sum:
			right_sum = t_sum
			right_index = mid + index + 1

	return (left_index-1, right_index, left_sum + right_sum)

##################################################
# find_max_subarray
# input: list a, int low, int high
# output: tuple(left, right, sum)
##################################################
def find_max_subarray(a, low, high):
	if high==low:
		return (low, high, a[low])
	else:
		mid = (low+high)/2
		print "%d   %d    %d" % (low, mid, high)

		(left_low, left_high, left_sum) = find_max_subarray(a, low, mid)
		(right_low, right_high, right_sum) = find_max_subarray(a, mid+1, high)
		(cross_low, cross_high, cross_sum) = find_max_cross_subarray(a, low, mid, high)

		if left_sum >= right_sum and left_sum >= cross_sum:
			return (left_low, left_high, left_sum)
		elif right_sum >= left_sum and right_sum >= cross_sum:
			return (right_low, right_high, right_sum)
		else:
			return (cross_low, cross_high, cross_sum)
