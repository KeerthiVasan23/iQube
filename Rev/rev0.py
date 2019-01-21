print "Enter the flag:"
x=raw_input()
secret=''
ans=''
key=ord('i')^3
for i in x:
	secret+=chr(ord(i)^key)
secret=secret.encode('hex')
if(secret=='031b1f080f110324045a3c0b1e59350324091f082a5d59350324095a181a5a180b1e5917'):
	print ("Yep! That's the flag...")
else:
	print "G0t fl4g???"

#iqube{iNn0Vat3_iNcub@73_iNc0rp0rat3}
#031b1f080f110324045a3c0b1e59350324091f082a5d59350324095a181a5a180b1e5917 key=ord('i')^3
#soln:
'''
rvsecret=secret.decode('hex')
for i in rvsecret:
	ans+=chr(ord(i)^key)
print(ans)
'''
