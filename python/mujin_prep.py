import matplotlib.pyplot as plt

def get_next_num(n:int)->int:
    og_n = n
    s = 0
    while n!=0:
        s += n%10
        n = n//10

    return og_n + s

data_n = []
data_m = []

n = 143766
m = 143739

iter_limit = 1e6
iterations = 0

while (n!=m) and iterations<iter_limit:
    if n < m:
        n = get_next_num(n)
    
    elif m < n:
        m = get_next_num(m)

    iterations += 1

    data_n.append(n)
    data_m.append(m)

print(n, m, iterations)
plt.plot(data_n, 'ko', label = f"Traj of {n}")
plt.plot(data_m, 'ro', label = f"Traj of {m}")
plt.legend()
plt.show()
