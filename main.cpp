#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
using namespace std;
/*Realice un programa que solicite a usuario que piense un numero entero entre el 1 al 100.
El programa debe generar un numero aleatorio en ese mismo rango [1-100], e indicarle al usuario
si el numero que digito es menor o mayor al numero aletorio, asi hasta que lo adivine, y por ultimo
mostrarle el numero de intentos que le llevo.
variable=limite_inferior + rand()%(limite_superior+1-limite_inferior);
Funcion a utilizar para el numero aleatorio es:
srand(time(NULL));

int main()
{
    int numero, dato, contador=0;
    srand(time(NULL));
    dato=1+rand()%(10);
    do{
        cout<<endl<<"Adivina el numero: ";
        cin>>numero;
        if(numero>dato){
            cout<<endl<<"Ingrese un numero mas bajo.."<<endl;
        }
        if(numero<dato){
            cout<<endl<<"Ingrese un numero mas alto.."<<endl;
        }
        contador++;
    }while(numero!=dato);
    cout<<endl<<".............FELICIDADES ADIVINASTE............."<<endl;
    cout<<endl<<"Intento: "<<contador<<endl;
    system("pause");
    return 0;
}*/
/*1.-Realice un programa q calcule la descomposicion en factores primos de un numero entero.
por ej: 20=2*2*5.
 //Factorizar un numero
#include<stdio.h>
int main()
{
    int n,i,j;
    int a[50];
      //pedimos un numero positivo
    cout<<"ingrese el numero:\n";
    cin>>n;
    while(n<=0)
    {
       cout<<"El numero debe ser positivo:\n";
       cin>>n;
    }
      //obtenemos los factores
    i=2;
    j=0;
    while(n>1)
    {
       if(n%i==0)
       {
          n=n/i;
          a[j]=i;
          j++;
          i=2;
       }
       else
          i++;
    }
      //imprimir los factores
    for(i=0;i<j;i++)
       printf("\nfactor %d = %d",i+1,a[i]);

    getch();
    return 0;
}*/
