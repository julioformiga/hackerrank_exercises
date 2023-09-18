import numpy

arr = [float(_) for _ in input().split()]
x = float(input())

print(numpy.polyval(arr, x))
