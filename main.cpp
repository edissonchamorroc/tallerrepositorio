#include <iostream>
#include<fstream>
#include<sstream>
#include<string>

using namespace std;
int tobin(int numero);
int main()
{
//    string texto;
//    int binario[1500]={};
//    int longitud=0,ascii;
//    cout << "Ingrese un texto"<<endl;

//    getline(cin,texto);
//    longitud=texto.length();
//    for(int i=0;i<longitud;i++)
//    {
//        ascii=texto[i];
//        binario[i]=tobin(ascii);
//        cout<<binario[i];
//    }
   /* char nombre[12]={},texto[50]={};
    cout << "Ingrese texto a guardar"<<endl;
    cin.get(texto,50);
    cout<< "Ingrese nombre del archivo"<<endl;
    cin>>nombre;

    ifstream leer;
    ofstream escribir;

    escribir.open(nombre);
    escribir<<texto;
    escribir.close();*/

//*****************************************************
   int clave, opcion;
   char nombre[30];
   ofstream guardar;
   guardar.open("fichero.txt",ios::app);//app se para en la ultima linea si dañar datos ingresados
   //con ate se para al final mientras el archivo está abierto, si se cierra se dañan los datos
   while(true){
       cout<<"1. Guardar Registro"<<endl;
       cout<<"Ingreso opcion: ";
       cin>>opcion;
       switch (opcion) {
        case 1:{
          cout<<"Ingrese nombre: "<<endl;
          cin>>nombre;
          cout<<"Ingrese clave: "<<endl;
          cin>>clave;
          guardar<<nombre<<""<<clave<<endl;
           break;}

       }
   }
//*****************************************************


    return 0;
}
//int tobin(int numero){
//    int residuo, base=1, binario = 0;
//    while(numero > 0){
//        residuo = numero%2;
//        binario = binario + residuo*base;
//        numero = numero/2;
//        base = base*10;
//    }
//    return binario;
//}
