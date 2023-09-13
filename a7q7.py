


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
    def get_coef(self):
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
    def Aberth(self):
        
        p = Polynomial(self.l)
        coef = p.get_coef()
        degree = len(coef) - 1
        upper = 1 + 1 / abs(coef[-1]) * max(abs(coef[x]) for x in range(degree))
        lower = abs(coef[0]) / (abs(coef[0]) + max(abs(coef[x]) for x in range(1, degree + 1)))
        roots = []
        for i in range(degree):
            radius = random.uniform(lower, upper)
            angle = random.uniform(0, np.pi * 2)
            root = complex(radius * np.cos(angle), radius * np.sin(angle))
            roots.append(root)
        # print(p)
        q = p.derivative()

        iteration = 0
        while iteration <= 10:
            for i in range(len(roots)):
                ratio = (p[roots[i]]) / (q[roots[i]])
                offset = ratio / (1 - (ratio * sum(1 / (roots[i] - j) for j in roots if j != roots[i])))
                roots[i] -= offset
            iteration += 1
        return roots
def find_root(function, a, b):
    s = function  
    x0, xn = a, b
    x = np.linspace(x0, xn, num=5)
    y = [s(i) for i in x]
    model = np.polyfit(x, y, len(y) - 1)  # generating a polynomial
    p = Polynomial(list(model))
    roots = p.Aberth()  # finding the roots of the Polynomial using  Aberth method

    # clearing out the complex roots
    index = []
    for i in range(len(roots)):
        if round(roots[i].imag, 10) == 0:
            index.append(i)
    roots1 = []
    for i in range(len(roots)):
        for j in index:
            if j == i:
                roots1.append(roots[i].real)

    roots1.sort()
                                            # finding a list of numbers which are  between the roots
    new_roots = [x0]
    for i in range(len(roots1)):
        if (i == len(roots1) - 1):
            break
        new_roots.append((roots1[i] + roots1[i + 1]) / 2)
    new_roots.append(xn)
    interval_roots = []
                                            
    for i in range(len(new_roots) - 1):
        if (s(new_roots[i]) * s(new_roots[i + 1]) < 0):
            r = round(bisection(s, new_roots[i], new_roots[i + 1]), 10)
            interval_roots.append(r)
    if len(interval_roots)==0:
        print("No roots in the interval")
    else :
        print("The roots in the interval[",a,b,"] are :\n",interval_roots)

# bisection method to find out roots
def bisection(f, a, b):
    s = a
    t = b
    N = 10000
    for n in range(1, N + 1):
        m_n = (s + t) / 2
        f_m_n = f(m_n)
        if f(s) * f_m_n < 0:
            s = s
            t = m_n
        elif f(t) * f_m_n < 0:
            s = m_n
    return (s + t) / 2


find_root(lambda x: np.sin(x), -np.pi , 4 * np.pi )
    
