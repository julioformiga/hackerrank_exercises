N = int(input())
# N = 2
list = []
for i in range(N):
    c = input()
    match c.split()[0]:
        case 'insert':
            c1 = int(c.split()[1])
            c2 = int(c.split()[2])
            list.insert(c1, c2)
        case 'remove':
            c1 = int(c.split()[1])
            list.remove(c1)
        case 'append':
            c1 = int(c.split()[1])
            list.append(c1)
        case 'pop':
            list.pop()
        case 'sort':
            list.sort()
        case 'reverse':
            list.reverse()
        case 'print':
            print(list)
