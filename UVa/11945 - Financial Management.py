# UVa id: 11945 - Financial Management

sum = 0
for i in range(12):
    inp = float(input())
    sum += inp

avg = sum / 12
print("${:.2f}".format(avg))