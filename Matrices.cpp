#include <iostream>
using namespace std;

//Suma dos matrices que entran por parámetro, el resultado es almacenado en la matrix C que también entra por parámetro.
void suma(int n, double A[][3], double B[][3], double C[][3]){
  for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
      C[i][j] = A[i][j] + B[i][j];
    }
  }
}

//Resta dos matrices que entran por parámetro, el resultado es almacenado en la matrix C que también entra por parámetro.
void resta(int n, double A[][3], double B[][3], double C[][3]){
  for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
      C[i][j] = A[i][j] - B[i][j];
    }
  }
}
//Multiplica la matriz que entra por parámetro por un escalar k, el resultado es almacenado en la matrix C que también entra por parámetro.
void producto_por_escalar(int n, double A[][3], double C[][3], double k){
  for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
      C[i][j] = k*A[i][j];
    }
  }
}

//Multiplica dos matrices que entran por parámetro, el resultado es almacenado en la matrix C que también entra por parámetro.
void producto_matricial(int n, double A[][3], double C[][2], double D[][2]){
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      for(int k=0;k<3;k++){
        D[i][j]+=A[i][k]*C[k][j];
      }
    }
  }
}

//Imprime en pantalla la matriz de dimensión nxm que entra por parámetro.
void imprimir(int n, int m, double C[][3]){
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cout<<C[i][j]<<" ";
    }
    cout<<endl;
  }
}

int main() {
  int n=2;
  int m=3;
  double k=3.7;

  double A[2][3]={{1,2,3},{4,5,6}};
  double B[2][3]={{6,5,4},{3,2,1}};
  double C[3][2]={{1,2},{3,4},{5,6}};

  cout<<"SUMA DE MATRICES: A+B"<<endl;
  double S[2][3];
  suma(n,A,B,S);
  imprimir(n,m,S);

  cout<<"RESTA DE MATRICES: A-B"<<endl;
  double R[2][3];
  resta(n,A,B,R);
  imprimir(n,m,R);

  cout<<"MULTIPLICACIÓN POR ESCALAR: 3.7*A"<<endl;
  double K[2][3];
  producto_por_escalar(n,A,K,k);
  imprimir(n,m,K);

  cout<<"MULTIPLICACIÓN POR ESCALAR: 3.7*B"<<endl;
  double H[2][3];
  producto_por_escalar(n,B,H,k);
  imprimir(n,m,H);

  cout<<"MULTIPLICACIÓN MATRICIAL: A*C"<<endl;
  double M[2][2];
  producto_matricial(n,A,C,M);
  imprimir(n,n,H);
  
  return 0;
}
