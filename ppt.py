import numpy as np
import matplotlib.pyplot as plt

def euler_vs_modified_euler(f, y0, t0, tn, n):
    """
    Plot the difference between the Euler method and the Euler modified method
    for the given function `f`, initial value `y0`, start time `t0`, end time `tn`,
    and number of time steps `n`.
    """
    # Compute the time step
    dt = (tn - t0) / n
    
    # Set up the time array
    t = np.linspace(t0, tn, n+1)
    
    # Set up the solution arrays
    y_euler = np.zeros(n+1)
    y_euler[0] = y0
    y_modified = np.zeros(n+1)
    y_modified[0] = y0
    
    # Compute the solutions using the Euler method and the Euler modified method
    for i in range(n):
        y_euler[i+1] = y_euler[i] + dt * f(t[i], y_euler[i])
        y_modified[i+1] = y_modified[i] + dt * f(t[i] + dt/2, y_modified[i] + (dt/2) * f(t[i], y_modified[i]))
    
    # Compute the difference between the two solutions
    diff = np.abs(y_euler - y_modified)
    
    # Plot the difference
    plt.plot(t, diff)
    plt.title("Difference between Euler and Euler Modified Methods")
    plt.xlabel("Time")
    plt.ylabel("Absolute Difference")
    plt.show()
