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

  //Crea la matriz identidad.
  double I[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==j){
        I[i][j]=1;
      }
      else{
        I[i][j]=0;
      }
    }
  }

  //Asigna a las primeras n columnas de la matriz B la matriz A.
  double B[n][2*n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      B[i][j]=A[i][j];
    }
  }

  //Asigna a las primeras n columnas de la matriz B la matriz I.
  for(int i=0;i<n;i++){
    for(int j=n;j<2*n;j++){
      B[i][j]=I[i][j-n];
    }
  }

  //Reduce la matriz B en una matriz diagonal superior.
  for(int k=0;k<n-1;k++){
    int cont=0;
    for(int i=cont;i<n-1;i++){ 
    double b=B[k][k]; 
    double a=B[i+1+k][k]; 
    for(int j=0;j<2*n;j++){
      B[i+1+k][j+k] = b*B[i+1+k][j+k] - a*B[k][j+k];
      }
    }
    cont++;
  }

  //Reduce la matriz B en una matriz diagonal inferior.
  for(int k=0;k<n-1;k++){
  int contador=0;
    for(int i=contador;i<n-1;i++){ 
    double b=B[n-1-k][n-1-k]; 
    double a=B[n-i-2-k][n-1-k]; 
    for(int j=0;j<2*n;j++){
      B[n-i-2-k][2*n-j-1-k] = b*B[n-i-2-k][2*n-j-1-k] - a*B[n-1-k][2*n-1-j-k];
      }
    }
    contador++;
  }

  //Divide cada fila de la patriz B por su pivote.
  for(int i=0;i<n;i++){
    double b=B[i][i];
    for(int j=0;j<2*n;j++){
      B[i][j]=B[i][j]/b;
    }
  }
  
  double C[n][n];
  //Asigna las ultimas n columnas de B a la matriz C.
  for(int i=0;i<n;i++){
    for(int j=n;j<2*n;j++){
      C[i][j-n]=B[i][j];
    }
  }

  cout<<"La inversa de la matriz ingresada es:"<<endl;
  //Imprime matriz C.
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cout<<C[i][j]<<" ";
       }
      cout<<endl;
     }
  
  return 0;
}