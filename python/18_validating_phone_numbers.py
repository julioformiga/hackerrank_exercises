import re

regex_pattern = r"^(7|8|9)([0-9]{9})$"
# s = "1252478965"
# s = "9587456281"

numbers = []
for i in range(int(input())):
    numbers.append(input())

for i in numbers:
    print("YES") if bool(re.match(regex_pattern, i)) else print("NO")
