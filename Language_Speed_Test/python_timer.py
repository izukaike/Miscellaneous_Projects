import time
temp = 0

now = time.time()
for i in range(1_000_000):
    temp = temp + 1
end = time.time()
print(int((end-now) * 1_000))
