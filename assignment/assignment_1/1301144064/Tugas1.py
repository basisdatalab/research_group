"""def solution(a):
	sum_left, sum_right = 0, sum(a)
	for index, value in enumerate(a):
		sum_right -= value
		if sum_left == sum_right:
			yield index
			sum_left += value"""

n = input("Input : ")
k = []
for x in xrange (1,n+1):
	k.append(input("Bilangan ke " + str(x) + ":"))
	
sum_left = 0
sum_right = sum (k[1:])

arr = []
for i in range(n):
	if (i != 0):
		sum_left = sum_left + k[i-1]
		sum_right = sum_right - k[i]
	if (sum_left == sum_right) :
		arr.append(i)
		
print(arr)