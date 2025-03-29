/*Asignación 6: Figuras en 3D
Nombre: Ariana Paola Rivera Alejandro
Núm de est: 801-24-4953
Colaboraciones:
-
-
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double volumen(float, float, float);
double volumen (float, float);
double volumen (float);
double area (float, float, float);
double area (float, float);
double area (float);

int main(){
    char figura, calculo;

    cout<<"Este programa calcula el volumen y el área de la superficie de tres figuras.\n";
    cout<<endl;

    cout<<"Escoga una figura:\n";
    cout<<" a. Cilindro\n";
    cout<<" b. Esfera\n";
    cout<<" c. Prisma rectangular\n";
    cout<<"Selección: ";
    
    cin>>figura;

    if(figura != 'a' && figura != 'b' && figura != 'c')
        cout<<"Error, intentelo de nuevo.";

    switch(figura){
        case 'a':cout<<endl<<"Escoge entre los siguientes opciones: \n";
                cout<<" a. Volumen\n";
                cout<<" b. Área de la superficie\n";
                cout<<"Selección: ";
                cin>>calculo;
                cout<<endl;
                if(calculo == 'a'){
                    cout<<"Entre el radio del cilindro: ";
                    float r, h;
                    cin >> r;
                    cout<<"Entre la altura del cilindro: ";
                    cin >> h;
                    cout<<"El volumen de su cilindro es: "<<setprecision(2)<<fixed<< volumen(r,h)<<endl;
                }
                else if (calculo == 'b'){
                    cout<<"Entre el radio del cilindro: ";
                    float r1, h1;
                    cin >> r1;
                    cout<<"Entre la altura del cilindro: ";
                    cin >> h1;
                    cout<<"El area de su cilindro es: "<<setprecision(2)<<fixed<< area(r1,h1)<<endl;
                }
                else 
                    cout<<"Entro un dato incorrecto, intente de nuevo.";
                break;

        case 'b':cout<<endl<<"Escoge entre los siguientes opciones: \n";
                cout<<" a. Volumen\n";
                cout<<" b. Área de la superficie\n";
                cout<<"Selección: ";
                cin>>calculo;
                cout<<endl;
                if(calculo == 'a'){
                    cout<<"Entre el radio de la esfera: ";
                    float r2;
                    cin >> r2;
                    cout<<"El volumen de su esfera es: "<<setprecision(2)<<fixed<< volumen(r2)<<endl;
                }
                else if (calculo == 'b'){
                    cout<<"Entre el radio de la esfera: ";
                    float r3;
                    cin >> r3;
                    cout<<"El area de su esfera es: "<<setprecision(2)<<fixed<< area(r3)<<endl;
                }
                else 
                    cout<<"Entro un dato incorrecto, intente de nuevo.";
                break;

        case 'c':cout<<endl<<"Escoge entre los siguientes opciones: \n";
                cout<<" a. Volumen\n";
                cout<<" b. Área de la superficie\n";
                cout<<"Selección: ";
                cin>>calculo;
                cout<<endl;
                if(calculo == 'a'){
                    float w3, h3, l3;
                    cout<<"Entre el largo del prisma rectangular: ";
                    cin >> l3;
                    cout<<"Entre el ancho del prisma rectangular: ";
                    cin >> w3;
                    cout<<"Entre la altura del prisma rectangular: ";
                    cin >> h3;
                    cout<<"El volumen de su prisma rectangular es: "<<setprecision(2)<<fixed<<volumen(l3, w3, h3)<<endl;
                }

                else if (calculo == 'b'){
                    float l4, w4, h4;
                    cout<<"Entre el largo del prisma rectangular: ";
                    cin >> l4;
                    cout<<"Entre el ancho del prisma rectangular: ";
                    cin >> w4;
                    cout<<"Entre la altura del prisma rectangular: ";
                    cin >> h4;
                    cout<<"El area de su prisma rectangular es: "<<setprecision(2)<<fixed<<volumen(l4, w4, h4)<<endl;
                }
                else 
                    cout<<"Entro un dato incorrecto, intente de nuevo.";
                break;
    }
    cout<<endl;
    cout<<"¡Gracias por utilizar el programa!\n";

    return 0;
}

double volumen(float radio, float altura){
    //volumen del cilindro
    //formula: pi * r^2 * h
    return M_PI * (pow(radio, 2)) * altura;
}
double volumen(float radio){
    //volumen de esfera
    //formula: 4/3 * pi * r^3
    //M_PI
    return (4.0/3.0)* M_PI * (pow(radio, 3));
}
double volumen(float largo, float ancho, float altura){
    //volumen de prisma rectangular
    //formula: largo * ancho * altura
    return largo * ancho * altura;
}
double area(float radio, float altura){
    //area de un cilindro
    //formula: 2 * pi * r (h + r)
    return 2.0 * M_PI * (radio * (altura + radio));
}
double area(float radio){
    //area de una esfera
    //formula: 4 * pi * r^2
    return 4.0 * M_PI * (pow(radio, 2));
}
double area(float largo, float ancho, float altura){
    //area de un prisma rectangular
    //formula: 2(lw + lh + wh)
    // l-largo, w-ancho y h-altura
    return 2.0 * (largo * ancho + largo * altura + ancho * altura);
}