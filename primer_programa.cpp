#include <iostream>
#include <string>
using namespace std;
int main(){
cout<<"Este es el primer programa"<<endl;  //similar al numpy de Python
int a=4; //Se crea una variable de tipo entero y se define como 4.
float b=6.0; //Se crea una variable flotante y se define como 6.0
double c=1e-6; //Se crea una variable de tipo double y se define como 1e-6
float k; //Se crea una variable flotante
k=1.; //Se define la variable flotante k como 1 
cout<<"b = " + to_string(b)<<endl; //Se imprime en pantalla "b = 6.0", se debe pasar la variable b a una cadena de tipo string para concatenarlo con la cadena "b = "
int s; //Se crea una varible de tipo entero.
cout<<"Ingrese un numero entero"<<endl; //Se imprime en pantalla "Ingrese un numero entero"
s=cin.get(); //Se almacena el numero ingresado por el usuario en la variable s
cout<<s<<endl; //Se imprime en pantalla el numero ingresado por el usuario.
const char carac[] = "caracter"; //Se crea una variable constante (que no se puede cambiar) de tipo char
cout<<carac<<endl; //Se imprime en pantalla "caracter"
string g = "jajaja"; //Se crea una variable de tipo string y se define como "jajaja"
cout<<g<<endl; //Se imprime en pantalla "jajaja"
return 0;
}
