#question 5
import scipy.integrate
import numpy as np
import matplotlib.pyplot as plt
trapezoid_list=[]
simpson_list=[]
quad_list=[]
real_list=[]
f= lambda x: 2*x*np.e**(x**2)          #given function 
u=np.linspace(0,4,200)          # dividing the interval (0,4) in sub-intervals (0,u)
for i in range(1,len(u)):          # finding area for each sub interval
   quad_intg=scipy.integrate.quad(f,0,u[i]) # integration using Quadrature rule
   quad_list.append(quad_intg[0]) 
   x=np.linspace(0,u[i],100)               # array to use in trapezoid and simpson
   y=f(x)
   trapz_intg=scipy.integrate.trapz(y,x)
   trapezoid_list.append(trapz_intg)       #integration using  trapezoidal approximation

   simps_intg=scipy.integrate.simps(y,x)
   
   
   simpson_list.append(simps_intg)        # simpson's approximation
   real_list.append(np.exp(u[i]**2)-np.exp(1))  # original value of the integration 
   
   
x=[u[i] for i in range(1,len(u))] # x axis values

plt.plot(x,simpson_list,"*",label="Simpson's Rule")      #plotting simpson integration
plt.plot(x,quad_list,color='red',label="Quadrature")     #plotting quad integration
plt.plot(x,trapezoid_list,label="Trapezoidal Rule")     #plotting trapezoid integration
plt.plot(x,real_list,label="Real value of integration")
plt.legend()
plt.xlabel("Point of the interval [0,u]")
plt.ylabel("Value of the integration")
plt.grid()
plt.title("Plotting of different Numerical integration methods in scipy")
plt.show()