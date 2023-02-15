
# problem id: 74218899

def even_fibo(n,n1,n2):
    i = 2
    for i in range(n):
        c = 4*n2 + n1
        arr.append(c)
        n1 = n2
        n2 = c
    print(arr[n])

n = int(input())
n1 = 0
n2 = 2
arr = [n1, n2]
even_fibo(n, n1, n2)




