A = [-7, 1, 5, 2, -4, 3, 0]

e = (anArray) ->
  length = anArray.length
  temp_a = []
  for i in [0...length]
    left = 0
    right = 0
    j = 0
    while j < i
      left += anArray[j]
      j++
    j = i + 1
    while j < length
      right += anArray[j]
      j++
    if left is right
      temp_a.push(i)

  if !!temp_a
    return temp_a
  else return -1

console.log(e(A))
