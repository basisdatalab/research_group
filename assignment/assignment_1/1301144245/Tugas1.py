n = input("Masukkan angka : ")
k = []
for x in xrange(1,n+1):
	#a = input("Bilangan ke : " + str(x))
	k.append(input("Bilangan ke " + str(x) + ":"))

sumleft = 0
sumright = sum(k[1:])

arr = []
for i in range(n):
	if (i != 0):
		sumleft = sumleft + k[i-1]
		sumright = sumright - k[i]
	if (sumleft == sumright):
		arr.append(i)

print(arr)