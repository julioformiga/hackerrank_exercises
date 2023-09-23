import re

uids = []
# for i in range(int(input())):
#     uids.append(input())
uids.append('B1CDEF2354')
uids.append('B1CD102354')
uids.append('B1CDEF23546')
regex_pattern = (
    r'^(?!.*(.).*\1)(?=(?:[^A-Z]*[A-Z]){2})(?=(?:\D*\d){3})[A-Za-z0-9]{10}$'
)
for i in uids:
    print('Valid') if re.match(regex_pattern, i) else print('Invalid')
