"""
Python Program to Print Linear range of mountain where height is
input as a list.

Example

>>>O
>>>4 5 6 8 3 6
                                     O                          
OUTPUT:                             O O                         
                       O           O O O                 O      
            O         O O         O O O O               O O     
   O       O O       O O O       O O O O O             O O O    
  O O     O O O     O O O O     O O O O O O     O     O O O O   
 O O O   O O O O   O O O O O   O O O O O O O   O O   O O O O O  
O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O 

"""
class Pattern:
    @staticmethod
    def mountain(i,n,s):
        #Funtion to return each mountain as a 2-D list
        l=list()
        for j in range(n):
            if n-j<=i:
                l.append(list(" ".join(list(s*(i-(n-j)+1))).center(2*i)))
            else:
                l.append(list(" "*(2*i)))
        return  l
    
    def Pprint(self,sym,num):
        #Funtion to concat each mountain and print them in Linear order.
        max_num = max(num)
        fArr = []
        for i in num:
            fArr.append(self.mountain(i,max_num,sym))

        for j in list(zip(*fArr)):
            for i in j:
                print("".join(i),end='')
            print()
            
#Driver Code  
if __name__=='__main__':
    
    Pattern.Pprint(Pattern,input(),list(map(int,input().split())))
        

#CONTRIBUTED BY init-13 (Nitin Das)
# Hactoberfest2021
