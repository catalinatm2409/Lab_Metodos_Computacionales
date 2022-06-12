#include <iostream>
#include <string>
#include <math.h>
using namespace std;

//Esta funcion calcula la suma de m numeros.
//Para esto entra por parametro un array con m numeros que se quieren sumar, el numero entero m tambien entra por parametro.
float suma(int m,double a[]){
float rta = 0;
for(int i=0;i<m;i++){
rta += a[i];
}
return rta;
}

//Esta funcion calcula la suma de los cuadrados de m numeros.
//Para esto entra por parametro un array con m numeros, el numero entero m tambien entra por parametro.
float sumatoria_cuadrados(int m, double a[]){
float rta = 0;
for(int i=0;i<m;i++){
rta += pow(a[i],2);
}
return rta;
}

//Esta función calcula la suma de los dígitos de un número
//Recibe como parametro un entero x, el cual corresponde al número donde sus dígitos se sumarán. Retorna la suma de ellos.
int suma_digitos(int x){
    int res =0;
    int coc=3;
    while(coc!=0){
        coc = x/10;
        res+= x%10;
        x=coc;
    }
    return res;
}

//Esta función calcula la forma binario de un número dado. 
//Recibe como parametro un entero d, y retorna el número en forma binaria, es decir, en base 2.
string numero_binario(int d){
    string bin;
    int res;
    int coc;
    while(d!=0){
        coc =d/2;
        res = d%2;
        d=coc;
        if (res==0){
            bin +="0";
        }
        else{
            bin+="1";
        }
    }
    string num_b (bin.rbegin(),bin.rend());
    return num_b;
}

//Esta función calcula la forma hexadecimal de un número entero.
//Recibe como parametro un entero p, y retorna la forma hexadecimal de este mismo, es decir, es base 16.
string numero_hexadecimal(int p){
    string num_h;
    int res;
    int coc;
    if (p>=16){
        while(p>=16){
            coc=p/16;
            res=p%16;
            if (res ==10){
                num_h+="A";
            }
            else if(res==11){
                num_h+="B";
            }
            else if (res ==12){
                num_h+="C";
            }
            else if (res ==13){
                num_h+="D";
            }
            else if (res ==14){
                num_h+="E";
            }
            else if (res ==15){
                num_h+="F";
            }
            else if (res ==16){
                num_h+="G";
            }
            else{
                num_h+=to_string(res);
            }
            p=coc;
        }
        num_h+=to_string(p);
        string num (num_h.rbegin(),num_h.rend());
        return num;
        }
    else { 
            if (p ==10){
                num_h+="A";
            }
            else if(p==11){
                num_h+="B";
            }
            else if (p ==12){
                num_h+="C";
            }
            else if (p ==13){
                num_h+="D";
            }
            else if (p ==14){
                num_h+="E";
            }
            else if (p ==15){
                num_h+="F";
            }
            else if (p ==16){
                num_h+="G";
            }
            else{
                num_h+=to_string(p);
            }
            return num_h;
      }
}


//Esta funcion retorna el maximo y minimo numero de una lista de m numeros.
//Para esto entra por parametro un array con m numeros, el numero entero m tambien entra por parametro.
double* maximo_minimo(int m,double a[]){
double max = a[0];
double min = a[0];
for(int i=0;i<m;i++){
if(a[i]>max){
max = a[i];
}
if(a[i]<min){
min = a[i];
}
}
double b[2] = {max, min};
return b;
}

//Esta funcion calcula de forma recursiva el factorial del numero entero n.
//Para esto entra como parametro el numero entero n.
int factorial(int n){
if(n==0){
return 1;
}
else{
return n*factorial(n-1);
}
}

//Esta funcion usa la serie de Taylor de la funcion e^x, se calcula la sumatoria hasta una numero n de e^x.
//Para esto entra como parametro el numero entero n y un numero real x.
float aproximacion(int n, float x){
float rta = 0;
for(int i=0;i<n+1;i++){
rta += pow(x,i)/factorial(i);
}
return rta;
}

//Esta funcion calcula de forma recursiva el n-esimo numero de la sucesion de Fibonacci.
//Para esto entra como parametro el numero entero n.
int fibonacci(int n){
if(n==1){
return 0;
}
else if(n==2){
return 1;
}
else{
return fibonacci(n-1)+fibonacci(n-2);
}
}

//Función principal donde se encuentra toda la interfaz de las funciones. Está dividida por puntos.
int main(){
int n;
cout<<"PUNTO 1"<<endl;
cout<<"Cuantos numeros desea sumar?"<<endl;
cin>>n;
double a[n];
for(int i=0;i<n;i++){
cout<<"Ingrese el valor "<<i;cin>>a[i];
}
cout<<"La suma de los numeros ingresados es "+to_string(suma(n,a))<<endl;

cout<<"PUNTO 2"<<endl;
int m;
cout<<"Cuantos numeros desea que se sumen al cuadrado?"<<endl;
cin>>m;
double b[m];

for(int i=0;i<m;i++){
cout<<"Ingrese el valor "<<i;cin>>b[i];
}
cout<<"La suma de los cuadrados de los numeros ingresados es "+to_string(sumatoria_cuadrados(m,b))<<endl;

cout<<"PUNTO 3"<<endl;
int d;
cout<<"Inserte el número que desea convertir en forma binaria: "<<endl;
cin>>d;
cout<<"El número "+to_string(d)+ " en forma binaria es "+numero_binario(d)<<endl;

cout<<"PUNTO 4"<<endl;
int p;
cout<<"Inserte el número que desea convertir en forma hexadecimal: "<<endl;
cin>>p;
cout<<"El número "+to_string(p)+ " en forma hexadecimal es "+numero_hexadecimal(p)<<endl;

cout<<"PUNTO 5"<<endl;
int j;
cout<<"Cuantos numeros desea comparar?"<<endl;
cin>>j;
double c[j];

for(int i=0;i<j;i++){
cout<<"Ingrese el valor "<<i;cin>>c[i];
}
cout<<"El numero maximo es "+to_string(maximo_minimo(j,c)[0])+" y el numero minimo es "+to_string(maximo_minimo(j,c)[1])<<endl;

cout<<"PUNTO 6"<<endl;
int f;
cout<<"Ingrese el n-esimo numero de la sucesion de Fibonacci que desea consultar: "<<endl;
cin>>f;
cout<<"El numero #"+to_string(f)+" de la sucesion de fibonacci es: "+to_string(fibonacci(f))<<endl;

cout<<"PUNTO 7"<<endl;
int x;
cout<<"¿Para cuál número desea sumar sus propios dígitos?: "<<endl;
cin>>x;
cout<<"La suma de los dígitos es: "+to_string(suma_digitos(x))<<endl;

cout<<"PUNTO 9"<<endl;
int u;
int v;
cout<<"Inserte el orden al que quiere aproximar e^x:  "<<endl;
cin>>u;
cout<<"Inserte un valor para x: "<<endl;
cin>>v;
cout<<"La aproximacion de orden "+to_string(u)+" de e^"+to_string(v)+ "es: "+to_string(aproximacion(u,v))<<endl;

return 0;
}
