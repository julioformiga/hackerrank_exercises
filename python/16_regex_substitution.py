import re

# text = ''
# for i in range(int(input())):
#     text += input()
#     text += '\n'


text = 'c $&1|| || && && &|&&| & | | &&c'

print(text)
text = re.sub(r'(?<=\s)&&(?=\s)', 'and', text)
text = re.sub(r'(?<=\s)\|\|(?=\s)', 'or', text)

print(text)
