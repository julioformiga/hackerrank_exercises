n = 5
arr = map(int, input().split())
arr = list(arr)
arr.sort(key=int)
arrk = list()
[arrk.append(i) for i in arr if i not in arrk]
print(arrk[-2])
