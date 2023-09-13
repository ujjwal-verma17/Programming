#assignment 7
#question 1
import numpy as np
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation
boundary_condition=[0,0]
h=0.1
k= 0.1
x=np.arange(0,1+h,h)
t=np.arange(0,1+k,k)
#initialcondition=np.sin(np.pi*x)
initialcondition=np.e**(-x)
n=len(x)
m=len(t)
T=np.zeros((n,m))
T[0,:]=boundary_condition[0]
T[-1,:]=boundary_condition[1]
T[:,0]=initialcondition
#print(T.round(3))
fact=k/h**2
for j in range(1,m):
    for i in range(1,n-1):
        T[i,j]=fact*T[i-1,j-1]+(1-2*fact)*T[i,j-1] +fact*T[i+1,j-1]
#print(T.round(3))        

#x_data=[]
#y_data=[]

fig,ax=plt.subplots()
ax.set_xlim(-1,2)
ax.set_ylim(-400,400)
line,=ax.plot(0,0)
def animation_frame(i):
    y_data=T[:,i].copy()
    #print(y_data)
    x_data=np.arange(0,1+h,h)
    #x_data.append(i*10)
    #y_data.append(i)
    line.set_data(x_data,y_data)
    #line.set_ydata(y_data)
    return line,
animation=FuncAnimation(fig,func=animation_frame ,frames=np.arange(m),interval = 200)  #frames is for 10 points as we are taking 0.1 gap
plt.show()