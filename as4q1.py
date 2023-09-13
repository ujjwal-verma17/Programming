#assignment 4
# question 1
import matplotlib.pyplot as plt
import numpy as np
import math
x=np.linspace(0,1,10)          # taking 10 points between (0,1)
y1=[2*i*(math.cos(i**2)) for i in x]          # f' at every point of x
y2=[(math.sin((i+0.01)**2)-math.sin(i**2))*100 for i in x]     # forward difference at every point x
plt.title("visualize actual derivative and forward finite difference approximation")                #ploting graph  
plt.ylabel(" value of f' and forward difference")
plt.xlabel("point taken from [0,1]")    
plt.plot(x,y1,color='red')# plotting x and y1
plt.plot(x,y2)
plt.grid()
plt.show()
