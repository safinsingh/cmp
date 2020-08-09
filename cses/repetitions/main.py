E=input();B={};C=0;D=''
for A in E:
	if A not in B or A!=D:B[A]=0
	if D==A:B[A]+=1
	if B[A]>C:C=B[A]
	D=A
print(C+1)