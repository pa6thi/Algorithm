inputstring=input('enter the string')
modifedString=""
for t in inputstring:
  if(t=='<'or t=='>' or t=='\\'):
     modifedString+='\\'+t
  else:
     modifedString+=t	
	 
print(modifedString)
