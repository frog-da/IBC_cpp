n = int(input())
a = 1
b = 1
res = 0
for i in rnge(1, n):
    res = a + b
    a = b
    b = res
print(res)