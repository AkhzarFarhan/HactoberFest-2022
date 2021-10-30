prime=[]

for j in range(1,101):

    s=0
    n=j

    for i in range(1,n+1):

        if(n%i==0):
            s=s+1

    if(s==2):

        prime.append(n)

print(prime)