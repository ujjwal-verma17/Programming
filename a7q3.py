#assignment 7
# question 3
# biection method to find nth root of a integer 
def Bisection_method(n,a,eps):
    # checking whether n th root can be found or not
    if a<0 and (n%2==0):
        try:
            raise Exception(str(n)+f"th root not possible of {a} ")
        except Exception as inst:
                print(type(inst))
                print(inst)
        return None
    if a >0:
        x=0
        y=a/n
    else:
        x=a/n
        y=0
    # nth root of a  means finding the solution of x^n-a
    def f(x):
        return x**n -a
    # implementing bisection to approximate the solution of f
    i=0
    while(abs(x - y) >eps):
        z=(x+y)/2
        if (f(z)<0 and f(x)<0) or (f(z)>0 and f(x)>0):
            x=z
        else:
            y=z
    root=(x+y)/2
    print("The",n,"th root of",a,"is",root)
Bisection_method(5,-27,0.0001)
