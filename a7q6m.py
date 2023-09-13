#question 6
#assignment 3 
# question 4
import numpy as np
from matplotlib import pyplot as plt
import random
class Polynomial:            #class Polynomial
    def __init__ (self,l):
        self.l=l
    
    def __len__(self):
         return len(self.l)
    
    def __setintem__(self,key,value):
        self.l[key]=value
        
    def __getitem__(self,key):   # returning value of polynomial at given value
        sum=0
        j=0
        u=key
        for i in range(len(self.l)):
            sum=(self.l[i]*(u**j))+sum
            j+=1
        return sum    
            
            
        #return self.l[key]
    def __str__(self):                 # overloading print statement
        strr=[str(i) for i in self.l]
        print("Coefficient of polynomial are :")
        k=" ".join(strr)
        return k
        
    def __rmul__(self,others):          # overloading multiplication of polynomial with scalar
        if type(others)==int or float :
            
            l_1=[i*others for i in (self.l)]
            print("Coefficient of polynomial are :")
            return Polynomial(l_1)
                
    def __mul__(self,others):         # overloading multiplication of polynomial with polynomial
        
        r1 = len(self.l)
        r2 = len(others.l)
        prod = [0] * (r1 + r2 - 1)
        for i in range(r1):
            for j in range(r2):
                prod[i + j] += self.l[i] * others.l[j]
        self.l = prod
        return self               
                    
    def __add__(self,others):  #overloading addition for polynomial addition
        
        l_2=[self.l[i]+others.l[i] for i in range(len(self.l))]
        print("Coefficient of polynomial are :")
        return Polynomial(l_2)
    def __sub__(self,others):     #overloading subtraction
        
        l_3=[self.l[i]-others.l[i] for i in range(len(self.l))]
        print("Coefficient of polynomial are :")
        return Polynomial(l_3)
    def show(self,x_1,x_2):       # to show graph of polynomial
        self.x_1=x_1
        self.x_2=x_2
        x = np.linspace(self.x_1, self.x_2, 100)
        
        y = 0
        for i in range(len(self.l)):        # solving y value with x value 
            y=(self.l[i]*(x**i))+y
        plt.xlabel('Plot of the polynomial')
        plt.ylabel('P(x)')    
           
        plt.plot(x, y)
        plt.grid()
            # Show the plot
        plt.show()

    def fitViaMatrixMethod(self,l1):          # fitting via interpolation
        self.l1=l1
        b=[]
        a=[]
        y=[]
        k=[]
        for i in range(len(self.l1)):      #collecting value of b
            b.append(l1[i][1])
        for i in range(len(self.l1)):
            y=[]
            for j in range(len(self.l1)): # collecting coefficient of a,b,c,d,e......
                y.append(l1[i][0]**j)
            a.append(y)  
        for i in range(len(self.l1)):
            k.append(l1[i][0])    
        x = np.linalg.solve(a, b)       #finding solution
            
        r5=Polynomial(x)               #passing solution to polynomial class
        
        r5.show(min(k),max(k))          # to draw polynomial
        
    def derivative(self):                  # derivative method
        k=[i for i in range(1,len(self.l))]
        l_1=[self.l[i]*k[i-1] for i in range(1,len(self.l))]
        return Polynomial(l_1)
    def get_coefficient(self):
        coef = []
        for i in self.l:
            coef.append(i)
        return coef            
    def Area(self,a,b):                     #to find area of given polynomial 
        a1=0
        a2=0
        j=1
        l=1
        for i in range(len(self.l)):
            a1=self.l[i]*(b**j)/j+a1
            j+=1
        for i in range(len(self.l)):
            a2=self.l[i]*(a**l)/l+a2
            l+=1
            
        return (a1-a2)

    def Aberth(self, arr):
        self.arr = arr
                                    # creating a polynomial from  a the given arr elements
        p = Polynomial([1])
        for i in self.arr:
            p = p * Polynomial([-i, 1])

        coef = p.get_coefficient()            #coefficient of a polynomial
        degree = len(coef) - 1                # degree of the Polynomial
        dp = p.derivative()                   # using derivative methods for finding coefficient of derivative
                                              # upper and lowerbounds for Aberth's method
        upper = 1 + 1 / abs(coef[-1]) * max(abs(coef[x]) for x in range(degree))
        lower = abs(coef[0]) / (abs(coef[0]) + max(abs(coef[x]) for x in range(1, degree + 1)))
                                              # Starting the Aberth method by randomly choosing an estiamate for the roots
        roots = []

        for i in range(degree):
            rad = random.uniform(lower, upper)   #taking random value btw lower and upper bound
            angle = random.uniform(0, np.pi * 2)  #taking random value between 0 and pi/2
            root = complex(rad * np.cos(angle), rad * np.sin(angle))
            roots.append(root)
        iteration = 0
        
        while iteration < 100:            #number of iteration

            for i in range(len(roots)):
                ratio = p[roots[i]] / dp[roots[i]]
                offset = ratio / (1 - (ratio * sum(1 / (roots[i] - j)
                                                   for j in (roots) if j != roots[i])))

                roots[i] -= offset
            iteration += 1
        print("The estimated roots are :", roots)


t = Polynomial([])
t.Aberth([2, 3, 0])    
        
        
        
        
                
        
'''        
p1=Polynomial([1,-1,1])

p2=Polynomial([1,1,1])
p3=p2+p1
#p1.show(-1,2)
#print(p1[2])
p1.fitViaMatrixMethod([(1,4), (0,1), (-1, 0), (2, 15), (3,12)])
print(p3)'''