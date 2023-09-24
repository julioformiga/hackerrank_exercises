#!/bin/python3

# import math
# import os
# import random
import re

# import sys


# first_multiple_input = input().rstrip().split()
#
# n = int(first_multiple_input[0])
#
# m = int(first_multiple_input[1])


matrix = []
# for _ in range(n):
#     matrix_item = input()
#     matrix.append(matrix_item)

# matrix.append('Tsi')
# matrix.append('h%x')
# matrix.append('i #')
# matrix.append('sM ')
# matrix.append('$a ')
# matrix.append('#t%')
# matrix.append('ir!')

matrix.append('#%$r%r')
matrix.append('I%Mi$i')
matrix.append('tiaxsp')
matrix.append('#st%ct')


string = ''.join(sum(zip(*matrix), ()))
string = re.sub(r'(?<=\w)\W+(?=\w)', ' ', string)
print(string)
