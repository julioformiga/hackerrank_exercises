import re

creditcard = []
# for i in range(int(input())):
#     creditcard.append(input())
creditcard.append('4123456789123456')
creditcard.append('2123456789123456')
creditcard.append('2125-4567-8912-3456')
creditcard.append('5123-4567-8912-3456')
creditcard.append('61234-567-8912-3456')
creditcard.append('4123356789123456')
creditcard.append('5133-3367-8912-3456')
creditcard.append('5123 - 3567 - 8912 - 3456')


def check_cc_number(ccnumber):
    regex_pattern = r'(?=^[4-6])((^[0-9]{16}$)|(^[0-9\-]{19}$))'
    if not re.match(regex_pattern, ccnumber):
        return False
    if len(ccnumber) == 19:
        n = ccnumber.split('-')
        number = ''
        for i in n:
            if len(i) != 4:
                return False
            number += str(i)
        ccnumber = number
    if re.findall(r'(\d)\1\1\1', ccnumber):
        return False
    # print(ccnumber)
    return True


for i in creditcard:
    # check_cc_number(i)
    # print(i, end=' : ')
    print('Valid') if check_cc_number(i) else print('Invalid')
