A = []
inputan = int(input("N = "))
print "input: "
for i in range (inputan)
  a = input()
  A.append(a)

def equilibrium(A):
  kiri = 0
  kanan = sum(A)
  for i in range (len(A)):
    kanan -= A[i]
    if kiri == kanan:
      return i
    kiri += A[i]
  return -1
print "output:"
print (equilibrium(A))
