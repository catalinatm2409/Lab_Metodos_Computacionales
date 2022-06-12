import numpy as np
from numpy.linalg import det
from numpy.linalg import inv
import sympy as sp

m=input('Ingrese el tamaño de la matriz: ')
n=int(m)
A = np.zeros((n,n))
B = sp.zeros(n,n)

for i in range(0,n):
  print('Ingrese fila '+str(i))
  for j in range(0,n):
    A[i][j] = input(' ')
    

for i in range(0,n):
  B.row_del(i)
  B=B.row_insert(i,sp.Matrix([A[i]]))

print(A)

det = det(A)
if det==0:
  print('La matriz ingresada no es invertible.')
else:
  print('La inversa de la matriz ingresada es (usando numpy):')
  print(inv(A))
  print('La inversa de la matriz ingresada es (usando sympy):')
  print(B.inv())






