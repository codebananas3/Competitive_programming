x=int(input())
for i in range (x):
    count=0
    a,b=input().split()
    a,b=int(a),int(b)
    l=list(map(int,input().split()))
    for i in l:
        if (i < b):
            count+=1
        

    print (count)