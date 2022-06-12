#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Ingrese tamaño de la matriz"<<endl;
  cin>>n;
  double A[n][n];
  for(int i=0;i<n;i++){
    cout<<"Ingrese fila "<<i+1<<" "<<endl;
    for(int j=0;j<n;j++){
      cin>>A[i][j];
    }
  }  

  //Imprime la matriz A (matriz ingresada).
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<A[i][j]<<" ";
    }
    cout<<endl;
  }

  //Reduce la matriz A en una matriz diagonal superior..
  for(int k=0;k<n;k++){
    for(int i=k;i<n-1;i++){ 
    double b=A[k][k]; 
    double a=A[i+1+k][k]; 
    double c=a/b;
    for(int j=0;j<n;j++){
      A[i+1+k][j+k] = A[i+1+k][j+k] - c*A[k][j+k];
      }
    }
  }

  //Calcula el determinante multiplicando los elementos de la diagonal de la matriz diagonal superior.
  double det=1;
  for(int i=0;i<n;i++){
    det = det*A[i][i];
  }
  cout<<"El determinante calculado es "<<det<<endl;
  return 0;  
}
