import numpy as np
import matplotlib.pyplot as plt
import matplotlib.animation as animation

def heat_conduction_animation(size=50, dt=0.01, xc=0.5, yc=0.5, strength=1):
    # Set up the grid
    x = np.linspace(0, 1, size)
    y = np.linspace(0, 1, size)
    X, Y = np.meshgrid(x, y)
    dx = dy = x[1] - x[0]
    r = dt / dx**2
    print(r)
    # Set up the initial and boundary conditions
    u = np.zeros((size, size))
    print(u)
    u[:, 0] = u[:, -1] = u[0, :] = u[-1, :] = 0
    

    # Define the heat source
    f = lambda x, y, t: strength * np.exp(-np.sqrt((x - xc)**2 + (y - yc)**2))

    # Set up the plot
    fig = plt.figure()
    ax = fig.add_subplot(111)
    im = ax.imshow(u, cmap='hot', vmin=0, vmax=1)

    # Define the update function for the animation
    def update(frame):
        t = frame * dt
        u[1:-1, 1:-1] = (1 - 4 * r) * u[1:-1, 1:-1] + r * (u[:-2, 1:-1] + u[2:, 1:-1] + u[1:-1, :-2] + u[1:-1, 2:]) + dt * f(X, Y, t)
        im.set_data(u)
        ax.set_title(f"Time = {t:.2f}")
        return im,

    # Set up and start the animation
    ani = animation.FuncAnimation(fig, update, frames=200, interval=50, blit=True)
    plt.close()
    return ani
heat_conduction_animation(size=50, dt=0.01, xc=0.5, yc=0.5, strength=1)