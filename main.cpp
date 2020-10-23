#include <iostream>
#include<fstream>
#include<sstream>
#include<string>

using namespace std;
//int tobin(int numero);
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
   int clave,Nclave, opcion, comparadorclave;
   char nombre[30],Nnombre[30];
   ofstream guardar;
   ofstream temp;//para escritura temporal
   ifstream leer;
   guardar.open("fichero.txt",ios::app);//app se para en la ultima linea si dañar datos ingresados
   //con ate se para al final mientras el archivo está abierto, si se cierra se dañan los datos
   while(true){
       cout<<"1. Guardar Registro"<<endl;
       cout<<"2. Leer Registro"<<endl;
       cout<<"3. clave a buscar"<<endl;
       cout<<"4. clave a eliminar"<<endl;
       cout<<"Ingreso opcion: ";
       cin>>opcion;
       switch (opcion) {
         case 1:{
              cout<<"Ingrese nombre: "<<endl;
              cin>>nombre;
              cout<<"Ingrese clave: "<<endl;
              cin>>clave;//cin solo lee hasta donde haya espacio
              guardar<<nombre<<" "<<clave<<endl;
               break;}
         case 2:{
                   leer.open("fichero.txt");
                   leer>>nombre;//>> con este solo lee hasta el primer espacio
                   while(!leer.eof())
                   {
                       leer >> clave;//ojo con el dato de clave, se debe poder representar en 4 bytes
                       cout << "Nombre: " << nombre << endl;
                       cout << "Clave: "<< clave<<endl;
                       cout<<endl;
                       leer >> nombre;

                   }

                   leer.close();
                   break;
               }
       case 3:{
           leer.open("fichero.txt");
           leer>>nombre;
           bool encontrado=false;
           cout<<"Ingrese clave a buscar:";
           cin>>comparadorclave;
           while(!leer.eof())
           {
             leer>>clave;//
             if(clave==comparadorclave)
             {
                 cout<<"Nombre: " <<nombre<<endl;
                 cout<<"Clave: " <<clave<<endl;
                 encontrado=true;
             }
             leer>>nombre;
           }
           if(encontrado==false)
           {
               cout<<"\nContrasena no existe "<<endl;
           }
           leer.close();
           break;

       }
       case 4:
       {
           leer.open("fichero.txt");
           temp.open("temp.txt");//creacion de un nuevo archivo
           leer>>nombre;
           bool encontrado=false;
           cout<<"Ingrese clave a eliminar:";
           cin>>comparadorclave;
           while(!leer.eof())
           {
             leer>>clave;//
             if(clave==comparadorclave)
             {
                 cout<<"Nombre: " <<nombre<<endl;
                 cout<<"Clave: " <<clave<<endl;
                 encontrado=true;
                 cout<<"Eliminado"<<endl;
             }
             else
             {
                 temp<<nombre<<clave<<endl;
             }
             leer>>nombre;
           }
           if(!encontrado)
           {
               cout<<"\nEl registro no existe "<<endl;
           }
           leer.close();
           temp.close();
           guardar.close();
           remove("fichero.txt");
           rename("temp.txt","fichero.txt");
           guardar.open("fichero.txt",ios::app);
           break;

       }
       case 5:
       {
           leer.open("fichero.txt");
           temp.open("temp.txt");//creacion de un nuevo archivo
           leer>>nombre;
           bool encontrado=false;
           cout<<"Ingrese clave a modificar:";
           cin>>comparadorclave;
           while(!leer.eof())
           {
             leer>>clave;//
             if(clave==comparadorclave)
             {
                 cout<<"Nombre: " <<nombre<<endl;
                 cout<<"Clave: " <<clave<<endl;
                 encontrado=true;

                 cout<<"Ingrese nueva Clave"<<endl;
                 cin>>Nclave;
                 temp<<nombre<<" "<<Nclave<<endl;
             }
             else
             {
                 temp<<nombre<<clave<<endl;
             }
             leer>>nombre;
           }
           if(!encontrado)
           {
               cout<<"\nEl registro no existe "<<endl;
           }
           leer.close();
           temp.close();
           guardar.close();
           remove("fichero.txt");
           rename("temp.txt","fichero.txt");
           guardar.open("fichero.txt",ios::app);
           break;

       }
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
