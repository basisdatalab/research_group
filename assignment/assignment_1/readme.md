# Equilibrium Index
Time limit: 10s
Memory limit: 64mb

## Description
Equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes. For example, in an array A:
A[0] = -7, A[1] = 1, A[2] = 5, A[3] = 2, A[4] = -4, A[5] = 3, A[6]=0
3 is an equilibrium index, because:
A[0] + A[1] + A[2] = A[4] + A[5] + A[6]
6 is also an equilibrium index, because sum of zero elements is zero, i.e., A[0] + A[1] + A[2] + A[3] + A[4] + A[5]=0
7 is not an equilibrium index, because it is not a valid index of array A.

## Input Format
The first line of input is integer N(1 < N < 100), where N is the array length.
The next N-line of input is integer K(-255 < K < 256), where K is the array values.

## Output Format
Output is a single line containing a set of equilibrium index. Return -1 if the array doesn't have an equilibrium index.

## Sample Input
```
7
-7
1
5
2
-4
3
0
```

## Sample Output
```
3 6
```

Goodluck~
