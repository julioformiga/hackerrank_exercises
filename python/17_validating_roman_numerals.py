import re

"""
I = 1
V = 5
X = 10
L = 50
C = 100
D = 500
M = 1000
"""
regex_pattern = r"^(M{0,3})(CM|CD|D?C{0,3})(XC|XL|L?X{0,3})(IX|IV|V?I{0,3})$"
print(str(bool(re.match(regex_pattern, input()))))
