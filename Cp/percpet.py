import numpy as np

X1=[2.7810836,
1.465489372,
3.396561688,
1.38807019,
3.06407232,
7.627531214,
5.332441248,
6.922596716,
8.675418651,
7.673756466]

X2=[2.550537003,
2.362125076,
4.400293529,
1.850220317,
3.005305973,
2.759262235,
2.088626775,
1.77106367,
-0.242068655,
3.508563011]

Y=[0,0,0,0,0,1,1,1,1,1]


def f(w1,w2,b,x1,x2):
    z=w1*x1+w2*x2+b
    return 1.0 if z>=0.0 else 0.0
        

def error(w1,w2,b):
    err=0.0
    for x1,x2,y in zip(X1,X2,Y):
        fx=f(w1,w2,b,x1,x2)
        err+=(fx-y)**2
    return err

def grad_w1(w1,w2,b,x1,x2,y):
    fx=f(w1,w2,b,x1,x2)
    return (y-fx)*x1

def grad_w2(w1,w2,b,x1,x2,y):
    fx=f(w1,w2,b,x1,x2)
    return (y-fx)*x2

def grad_b(w1,w2,b,x1,x2,y):
    fx=f(w1,w2,b,x1,x2)
    return (y-fx)



def linear():
    eta=0.01
    w1,w2,b=np.random.uniform(0,1,3)
    max_epochs=20
    for i in range(max_epochs):
        err=error(w1,w2,b)
        print("Epoch: {:02}\tError: {:.1f}".format((i+1),err),end='')
        print("\tw1={:.4f}  w2={:.4f}  b={:.4f}".format(w1,w2,b),end='\n\n')
        if err<=0.0 and i>=9:
            return
        for x1,x2,y in zip(X1,X2,Y):
            w1+=eta*grad_w1(w1,w2,b,x1,x2,y)
            w2+=eta*grad_w2(w1,w2,b,x1,x2,y)
            b+=eta*grad_b(w1,w2,b,x1,x2,y)



linear()
