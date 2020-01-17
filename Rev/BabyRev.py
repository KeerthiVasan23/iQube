print "Enter the flag:"
x=raw_input()
secret=''
ans=''
key=ord('i')^3
for i in x:
	secret+=chr(ord(i)^key)
secret=secret.encode('hex')
if(secret=='24051c0b293e2c11033b1f080f47540324045a3c0b1e59350324091f082a5d59350324095a181a5a180b1e5917'):
	print ("Yep! That's the flag...")
else:
	print "G0t fl4g???"


rev='24051c0b293e2c11033b1f080f47540324045a3c0b1e59350324091f082a5d59350324095a181a5a180b1e5917'

rev=rev.decode('hex')

for i in rev:
	ans+=chr(ord(i)^key)

print ans
