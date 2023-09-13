'''import matplotlib.pyplot as plt
import numpy as np
x=np.arange(1,10,40)
y=np.arange(2,20,50)
plt.plot(x,y)
plt.show()'''
#assignment 6
#question 3
import numpy as np
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation

g = 9.8
L = 2 # length of the pendulum

# initial condition
theta_0 = np.pi/4 #initial value of theta
omega_0 = 0        #initial value of omega  



# using Euler's method to solve the system
def Euler(t):
    theta = theta_0
    d_theta = omega_0
    delta_t = 1./50 # increment
    for time in np.arange(0,t,delta_t): #since it is second degree ODE we are solving system of linear equation
                                        # for theta and omega i.e d_theta
        theta =theta + d_theta*delta_t
        d_theta =d_theta-(g/L)*np.sin(theta)*delta_t  
    return theta
# plotting pendulum
x_data = [0,0]
y_data = [0,0]

fig, ax = plt.subplots()
ax.set_title("Animation motion of a pendulum",fontsize=8)
ax.plot([-0.2,0.2],[0,0],"black",linewidth=3) # upper base part of the pendulum 
ax.set_xlim(-3, 3)
ax.set_ylim(-3,2)
line, = ax.plot(0, 0)
bob, = plt.plot(0, 0, 'o', markersize=12, color='red')

def animation_frame(i):
    #print(i)
    x = L*np.sin(Euler(i)) # L *sin(theta)
    y = -L*np.cos(Euler(i)) # -L *cos(theta)
    #print(x)

    x_data[1] = x
    y_data[1] = y
    bob_x = x
    bob_y = y - 0.1 # adjust the y-coordinate of the bob to make it below the pendulum stick

    # updating the data for the bob
    bob.set_data([bob_x], [bob_y])
   
    line.set_xdata(x_data)
    line.set_ydata(y_data)

    return line,bob,
# Animation for the pendulum
animation = FuncAnimation(fig, func=animation_frame, frames=np.arange(0, 50, (1./50)),interval = 10)

plt.show()
