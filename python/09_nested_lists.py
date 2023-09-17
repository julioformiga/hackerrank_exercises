records = [
    ['Herry', 37.21],
    ['Tina', 37.2],
    ['Berry', 37.21],
    ['Firenze', 37.2],
    ['Akriti', 41],
    ['Harsh', 39],
]
# for _ in range(int(input())):
#     name = input()
#     score = float(input())
#     records.append([name, score])
# for _ in records:
#     print(_)
print(records)
records.sort(key=lambda x: (x[1], x[0]))
records = [_ for _ in records if _[1] != records[0][1]]
records = [_ for _ in records if _[1] == records[0][1]]
[print(_[0]) for _ in records]
