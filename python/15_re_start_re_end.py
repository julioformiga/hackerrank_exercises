import re

string, search = input(), input()
# string = 'aaadaa'
# search = 'aa'
pattern = re.compile(search)
m = pattern.search(string)

if m:
    while m:
        print((m.start(), m.end() - 1))
        m = pattern.search(string, m.start() + 1)
else:
    print((-1, -1))
