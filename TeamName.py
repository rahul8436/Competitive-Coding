def distinct(key1, key2):
    lst = len(set(key1 + key2))
    return lst


for r in range(int(input())):
    n = int(input())
    xml = input().split()
    value = {}
    res = 0
    for m in xml:
        zs = m[1:]
        if zs in value:
            value[zs].append(m[0])
        else:
            value[zs] = [m[0]]
    val = list(value.keys())
    for m in range(len(value)):
        for nk in range(m + 1, len(value)):
            lts = distinct(value[val[m]], value[val[nk]])
            res += (lts - len(value[val[m]])) * (lts - len(value[val[nk]]))
    print(2 * res)