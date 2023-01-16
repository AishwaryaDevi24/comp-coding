from itertools import count


def countBits(n: int):
    solution = []
    for i in range(0, n+1):  
        solution.append((bin(i).replace("0b", "")).count('1'))
    return solution

print(countBits(5))

print(bin(4))
n = [1,2,3,4]
print(n in range(1,3))            
str1 = "tropical tropical ugh"
str2 = "tropical fruity yes"
print(str2.count('tropical'))