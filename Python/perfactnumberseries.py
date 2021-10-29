perfect=[]

for j in range(1,10000):
    sum=0
    n=j

    for i in range(1,n):
        if(n%i==0):
            sum=sum+i

    if(sum==n):
        perfect.append(n)

print(perfect)