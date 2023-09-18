import re

s = input()
# s = '..1234567891011121'
# print(s)
pattern = re.compile(r'([A-Za-z0-9])\1')
m = re.search(pattern, s)
print(m.group()[0]) if m else print(-1)
