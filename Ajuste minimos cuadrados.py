import numpy as np

def S(X):
  rta=0
  for i in range(len(X)):
    rta += X[i]
  return rta

def SS(X):
  rta=0
  for i in range(len(X)):
    rta += X[i]**2
  return rta

def delta(X):
  sum1=0
  sum2=0
  for i in range(len(X)):
    sum1 += X[i]**2

  for j in range(len(X)):
    sum2 += X[j]
    
  return len(X)*sum1 - sum2**2

def SXY(X,Y):
  rta=0
  for i in range(len(X)):
    rta += X[i]*Y[i]
  return rta

#Retorna el punto de corte con el eje y del ajuste lineal por mínimos cuadrados.
def A(X,Y):
  return (SS(X)*S(Y)-S(X)*SXY(X,Y))/delta(X)

#Retorna la pendiente del ajuste lineal por mínimos cuadrados.
def B(X,Y):
  return (len(X)*SXY(X,Y)-S(X)*S(Y))/delta(X)

def sigma_y(X,Y):
  a=A(X,Y)
  b=B(X,Y)
  X=np.array(X)
  Y=np.array(Y)
  return np.sqrt(SS(Y-a-b*X)/(len(X)-2))

def sigma_A(X,Y):
  return sigma_y(X,Y)*np.sqrt(SS(X))/delta(X)

def sigma_B(X,Y):
  return sigma_y(X,Y)*len(Y)/delta(X)

def fit(X,Y):
  return "y={:.4f}+{}x".format(A(X,Y),B(X,Y))

def coeficiente_correlacion(X,Y):
  return (len(X)*SXY(X,Y)-S(X)*S(Y))/(np.sqrt(len(X)*SS(X)-(S(X))**2)*np.sqrt(len(X)*SS(Y)-(S(Y))**2))

def ajuste(X,Y,x):
  b=A(X,Y)
  m=B(X,Y)
  x=np.array(x)
  return m*x + b
