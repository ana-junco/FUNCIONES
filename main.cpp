#include <iostream>
using namespace std;
//Ejercicios en clase. FUNCIONES

//1) Funcion que calcula la potencia de un numero

double potencia (double base, int exponente)
{
    double resultado = 1;
    for (int i=1; i<=exponente; i++)
    {
        resultado =resultado * base;
    }
    return resultado;
}

//2) Funcion factorial(5) =1x2x3x4x5
double factorial (int num)
{
    double fac=1;
    for(int i=1; i<=num; i++)
        fac=fac*i;

    return fac;
}

//3) Diseñe la función que calcule: x-x^3/3!+x^5/5!-x^7/7!
double sumaserie(double x)
{
    double suma=0;
    suma= x -(potencia(x,3) / factorial(3))
          +(potencia(x,5) / factorial(5))
          -(potencia(x,7) / factorial(7));
    return suma;
}

//4) funcion que recibe como parametro el nombre de una persona y su edad,
// y devuelve un saludo, indicando ademas si es o no mayor de edad.

string saludos (string nombre, int edad)
{
    string mensaje ="Bienvenido" + nombre;
    if(edad>=18)
        mensaje += ", usted es mayor de edad";
    else
        mensaje += ", usted es menor de edad";

    return mensaje;

}

//Una funcion recibe como parametro el nombre de una persona,
//el dia y mes de nacimiento. La funcion debe de volver el nombre de la
//persona indicando el signo del zodiaco el que pertenece.
//ejemplo. hola juan, tu signo del zodiaco es acuario.
//Aries (21 de marzo-20 de abril)
//Tauro (21 de abril- 21 de mayo)
//Géminis (22 de mayo-21 de junio)
//Cáncer (22 de junio-22 de julio)
//Leo (23 de julio-23 de agosto)
//Virgo (24 de agosto-23 de septiembre)
//Libra (24 de septiembre-23 de octubre)
//Escorpión (24 de octubre-22 de noviembre)
//Sagitario (23 de noviembre-21 de diciembre)
//Capricornio (22 de diciembre-20 de enero)
//Acuario (21 de enero-18 de febrero)
//Piscis (19 de febrero-20 de marzo)

string signo_zodiacal (string nombre, int dia_nac, int mes_nac)
{
    string mensaje ="Hola" + nombre + ", ";
    if((mes_nac==3 && dia_nac>=21) || (mes_nac==4 && dia_nac<=20))
        mensaje+=" Tu signo del zodiaco es Aries ";

    else if((mes_nac==4 && dia_nac==21) || (mes_nac==5 && dia_nac<=21))
        mensaje+=" Tu signo del zodiaco es Tauro ";

    else if((mes_nac==5 && dia_nac==22) || (mes_nac==6 && dia_nac<=21))
        mensaje+=" Tu signo del zodiaco es Gemenis ";

    else if((mes_nac==6 && dia_nac==22) || (mes_nac==7 && dia_nac<=22))
        mensaje+=" Tu signo del zodiaco es Cancer ";

    else if((mes_nac==7 && dia_nac==23) || (mes_nac==8 && dia_nac<=23))
        mensaje+=" Tu signo del zodiaco es Leo ";

    else if((mes_nac==8 && dia_nac==24) || (mes_nac==9 && dia_nac<=23))
        mensaje+=" Tu signo del zodiaco es Virgo ";

    else if((mes_nac==9 && dia_nac==24) || (mes_nac==10 && dia_nac<=23))
        mensaje+=" Tu signo del zodiaco es Libra ";

    else if((mes_nac==10 && dia_nac==23) || (mes_nac==11 && dia_nac<=21))
        mensaje+=" Tu signo del zodiaco es Escorpion ";

    else if((mes_nac==11 && dia_nac==22) || (mes_nac==12 && dia_nac<=21))
        mensaje+=" Tu signo del zodiaco es Sagitario ";

    else if((mes_nac==12 && dia_nac==22) || (mes_nac==1 && dia_nac<=19))
        mensaje+=" Tu signo del zodiaco es Capricornio ";

    else if((mes_nac==1 && dia_nac==20) || (mes_nac==2 && dia_nac<=18))
        mensaje+=" Tu signo del zodiaco es Acuario ";

    else if((mes_nac==2 && dia_nac==19) || (mes_nac==3 && dia_nac<=20))
        mensaje+=" Tu signo del zodiaco es Piscis ";


    return mensaje;
}

int main() {
    cout<<endl<<"El factorial de 5 es "<<factorial(5);
    cout<<endl<<"El factorial de 6 es "<<factorial(6);
    cout<<endl<<"El factorial de 10 es "<<factorial(10);
    cout<<endl<<potencia(5,3);
    cout<<endl<<potencia(2,5);
    cout<<endl<<potencia(10,3);

    cout<<endl<<"La sumatoria de la series es "<<sumaserie(5.0);

    cout<<endl<<saludos("Juan Gracia", 20);
    cout<<endl<<saludos("Ana Isabel", 15);


    cout<<endl<<signo_zodiacal("Juan" ,3,6);




    return 0;
}
