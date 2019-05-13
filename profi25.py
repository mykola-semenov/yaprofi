import sys

a = 1
b = int(input()) + 1

while a + 1 < b:    
    c = (a + b) // 2
    print('?',' '.join([str(i) for i in range(a, c)]))
    if input() == 'Odd':
        b = c
    else:
        a = c
    sys.stdouta

print('!', a)