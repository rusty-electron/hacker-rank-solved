N,K = map(int,raw_input().split())
S = raw_input()
answer=[]
answer.append(int(S[0]));i=0;j=0
temp=int(answer[0])
while len(answer) < N:
    answer.append(temp^int(S[j+1]))
    j+=1
    if j>= K-1:
        i+=1
        temp =  temp^answer[i-1]
    temp = temp^int(answer[j])
print ''.join(map(str,answer))