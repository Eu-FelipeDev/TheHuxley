import math

n = int(input())
resultado = 2 ** n
resultado_str = str(resultado)

for i in range(math.ceil(len(resultado_str)/50)):
    print(resultado_str[50*i:50*(i+1)])
