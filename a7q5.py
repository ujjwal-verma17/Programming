import matplotlib.pyplot as plt

import numpy as np
from scipy import linalg
def f(o):           #returning value of  of main function
    k=np.array([3*o[0] - np.cos(o[1]*o[2])-1.5,4*o[0]**2 -625*o[1]**2 + 2*o[2] -1, 20*o[2] + np.e**(-1*o[0]*o[1])+9])
    return k
def jac(a):         # returning determinant  of jacobian matrix 
    J=np.array([[3,a[2]*np.sin(a[1])*a[2],a[1]*np.sin(a[1]*a[2])],[8*a[0],-1250*a[1],2],[-a[1]*np.e**(-1*a[0]*a[1]),-a[0]*np.e**(-1*a[0]*a[1]),20]])
    return linalg.det(J)
def matrx(a):      # returning value of jocobi matrix
    K=np.array([[3,a[2]*np.sin(a[1])*a[2],a[1]*np.sin(a[1]*a[2])],[8*a[0],-1250*a[1],2],[-a[1]*np.e**(-1*a[0]*a[1]),-a[0]*np.e**(-1*a[0]*a[1]),20]])

    return K
    
a=np.array([0,1,1]) #initalization

count=[]
f_norm=[]
u=0
while ((linalg.norm(f(a)))>10**(-4)):     #checking norm value
    x_k=a-linalg.solve((matrx(a)),f(a))
    
    a=x_k
    f_norm.append(linalg.norm((f(a))))        # appending norm value
    count.append(u)
    u+=1
    #x=linalg.solve(matrx(a),[0,0,0])
#plotting part

plt.plot(count, f_norm, c='blue', label="Convergence of Newton-Raphson")
plt.xlabel("No of iterations")
plt.ylabel("Norm Values at each iteration")
plt.title("Norm  of f with respect to no of iterations", fontsize=12)
plt.grid()
plt.legend()
plt.show()
