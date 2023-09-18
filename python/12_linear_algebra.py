import numpy

arr = []
for i in range(int(input())):
    arr.append([float(_) for _ in input().split()])
n = numpy.linalg.det(arr)
print(round(n, 2))
