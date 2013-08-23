
from __future__ import division

saved = {}
t = input()

def func(f):
    if f in saved:    return saved[f]
    x,y,z,n = f 
    if z >= n:    return 1
    if x == 120:    return 0 
    if y == 10:    return 0

    saved[f] = (func((x+1,y+1,z,n)) + func((x+1, y,z,n)) + func((x+1,y,z+1,n)) + func((x+1, y, z+2,n)) + func((x+1, y, z+3,n)) + func((x+1, y, z+4,n)) + func((x+1, y, z+5,n))+ func((x+1, y, z+6,n))+ func((x,y,z+1,n)) + func((x,y,z+1,n))) / 10
    return saved[f]

def converter(f):
    v = f.index('.')
    x,y = int(f[:v]), int(f[-1])
    return x*6+(y)

for i in range(t):
    x,y,z = raw_input().split()
    v = y.index('/')
    q = int(y[:v])
    x,y,z = converter(x), int(y[(v+1):]), int(z)
    d = str(func((x,y,q,z)))
    # e = d.index('.')
    # f = d[:e] + d[e:e+3]
    f = d[:5]
    print float(f)