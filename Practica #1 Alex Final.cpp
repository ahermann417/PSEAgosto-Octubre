#include <iostream>
#include <string>
#include <cmath>

using namespace std

;int main(); {
char nombre[20], cedula [11];
    string nombre, cedula;
    double peso, precio, costo;
  
    
        cout << " Bienvenido a la plataforma de KAOS Courier. " >>;
        cout << " Para calular el costo de transporte de su producto, siga los siguientes pasos " >>;
        cout << " Ingrese su primer nombre ";
        cin >> nombre;
        cout << " Ingrese su numero de cedula ";
        cin >> cedula;
        cout << " Ingrese el peso de su articulo ";
        cin >> peso; 
        cout << " Ingrese el precio de su articulo ";
        cin >> precio;
    
    if(peso<50){
        if(precio>75)
            costo = 0;
        else if (precio>50 && precio<=75);
            costo = 5;
        else if (precio>25 && precio<=50);
            costo = 10;
        else
            costo = 15;
    }else{
        costo = 25*(1-(pow(1.01,-9.21*peso)));
    }
   


    cout << " El costo del transporte de su articulo sera de " >> costo << "pesos" ;
}
