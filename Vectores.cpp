#include <iostream>
using namespace std;

//Suma dos vectores que entran por parámetro, el resultado es almacenado en la matriz C que tambiñen entra por parámetro.
void suma(int n, double A[], double B[], double C[]){
for(int i=0;i<n;i++){
  C[i]=A[i] + B[i];
}
}

//Resta dos vectores que entran por parámetro, el resultado es almacenado en la matriz C que tambiñen entra por parámetro.
void resta(int n, double A[], double B[], double C[]){
for(int i=0;i<n;i++){
  C[i]=A[i] - B[i];
}
}

//Multiplica el vetor que entra como parámetro por un escalar k (que también entra por parámetro), el resultado es almacenado en el vetor C que también entra por parámetro.
void producto_por_escalar(int n, double A[], double C[], double k){
for(int i=0;i<n;i++){
  C[i]=k*A[i];
}
}

//Calcula el producto interno de dos vectores que entran por parámetro, se retorna dicho resultado,
double producto_punto(int n, double A[], double B[]){
double p=0;
for(int i=0;i<n;i++){
  p+=A[i]*B[i]; 
}
return p;
}

//Retorna true si el producto interno de dos vectores que entran por parámetro es igual a cero, false de lo contrario.
bool ortogonalidad(int n, double A[], double B[]){
bool rta= false;
if(producto_punto(n,A,B)==0){
  rta = true;
}
return rta;
}

//Imprime en pantalla el vector X que entra por parámetro.
void imprimir(int n,double X[]){
cout<<"(";
for(int i=0;i<n;i++){
  cout<<X[i]<<",";
}
cout<<")"<<endl;
}

int main(){
int n=3;
double k=2.5;
double A[3] = {1,2,3};
double B[3] = {3,4,5};

cout<<"Suma de vectores: ";
double C[n];
suma(n,A,B,C);
imprimir(n,C);

cout<<"Resta de vectores: ";
double D[n];
resta(n,A,B,D);
imprimir(n,D);

cout<<"Producto por escalar: ";
double E[n];
producto_por_escalar(n,A,E,k);
imprimir(n,E);

cout<<"Producto punto de vectores: ";
cout<<producto_punto(n,A,B)<<endl;

cout<<"Ortogonalidad: ";
if(ortogonalidad(n,A,B)==true){
cout<<"Los vectores A y B son ortogonales, su producto interno es "<<producto_punto(n,A,B)<<endl;
}
else{
cout<<"Los vectores A y B no son ortogonales, su producto interno es "<<producto_punto(n,A,B)<<endl;
}
return 0;  
}
