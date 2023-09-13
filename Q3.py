import numpy as np
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation
#x_data=[0,0]
#y_data=[0,0]
x_data=np.arange(0,100,0.1)
fig,ax=plt.subplots()
ax.set_xlim(0,100)
ax.set_ylim(0,15)
line,=ax.plot(0,0)
def animation_frame(i):
    
    #x_data[1]=i*10
    
    y_data=x_data**i
    #x_data.append(i*10)
    #y_data.append(i)
    line.set_data(x_data,y_data)
    #line.set_ydata(y_data)
    return line,
animation=FuncAnimation(fig,func=animation_frame ,frames=np.arange(0,1,0.1),interval = 200)
plt.show()