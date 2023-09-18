import re

s = input()
# s = 'rabcdeefgyYhFjkIoomnpOeorteeeeet'
# s = 'eebaabaabaabaae'
# print(s)
pattern = re.compile(
    r'((?<=[qwrtypsdfghjklzxcvbnm])[aeiou]{2,}(?=[qwrtypsdfghjklzxcvbnm]))',
    re.IGNORECASE,
)
m = re.findall(pattern, s)
print('\n'.join(m)) if m else print(-1)
