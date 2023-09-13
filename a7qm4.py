import numpy as np
import matplotlib.pyplot as plt


def Convergence_secant_newtonraphson(accuracy):
    def f(x):
        return np.cos(x) -x**2
    
    def d_f(x):
        return -np.sin(x) -2*x
    # Calculation by secant method
    x_0 = 0
    x_1 = 3
    c = 0
    secant_value = []
    secant_no_iteration = []
    while abs(f(x_0)) > accuracy:  # error threshold is 10^-10
        if ((f(x_1) - f(x_0)) != 0):
            x_2 = x_1 - f(x_1) * (x_1 - x_0) / (f(x_1) - f(x_0))
            x_0 = x_1
            x_1 = x_2
            c = c + 1
            secant_no_iteration.append(c)
            secant_value.append(f(x_2))

    # calculation by Newton Raphson method
    c1 = 0
    x_0 = 5
    newton_value = []
    newton_no_iteration = []
    while abs(f(x_0)) > accuracy:
        
        x_k = x_0 - f(x_0) / d_f(x_0)
        x_0 = x_k
        c1 = c1 + 1
        newton_no_iteration.append(c1)
        newton_value.append(f(x_0))
        # print(x0)
    fig, ax = plt.subplots()
    ax.plot(newton_no_iteration, newton_value, "g", label="Newton raphson method")
    ax.plot(secant_no_iteration, secant_value, "r", label="Secant Method")
    ax.grid()
    ax.legend()
    ax.set_xlabel("Number of iterations")
    ax.set_ylabel("function Values")
    ax.set_title("Convergence of Newton-Raphson method vs Secant Method", fontsize=12)
    plt.show()

accuracy=10**-10
Convergence_secant_newtonraphson(accuracy)