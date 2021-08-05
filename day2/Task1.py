n = int(input())
a = 1
b = 1
res = 0
for i in range(1, n):
    res = a + b
    a = b
    b = res
print(res)