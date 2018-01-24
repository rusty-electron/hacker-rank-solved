m,n=map(int,input().split())
string = list(input())
string = [int(x) for x in string]
for i in range(1,m):
  k=i-1
  while (i-k)!=n and k>=0:
    string[i]^=string[k]
    k-=1
print(''.join(map(str,string[:m])))