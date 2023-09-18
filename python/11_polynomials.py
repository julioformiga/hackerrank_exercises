import numpy

arr = input().split()
arr = [float(_) for _ in arr]
x = float(input())

print(numpy.polyval(arr, x))
