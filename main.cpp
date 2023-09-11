/*
Ejercicio 1: Escriba un programa que lea 2 numeros de entrada y me muestre el residuo
Ejemplo: 8/3: el residuo es 2
*/

/*
#include<iostream>
using namespace std;
int main(){

    int n1, n2, residuo;

    cout<<"Ingrese un numero: "; cin>>n1;
    do{
        cout<<"Ingrese un numero menor al anteriormente ingresado: "; cin>>n2;
    }while(n2>n1);

    residuo= n1%n2;

    cout<<"\nEl residuo que da de dividir "<<n1<<" entre "<<n2<<" es: "<<residuo<<endl<<endl;

    return 0;
}
*/

/*
Ejercicio 3: Escriba un programa que pida 2 numeros A y B, y muestre en la salida cual es el mayor
*/

/*
#include<iostream>
using namespace std;
int main(){

    int n1,n2;

    cout<<"Ingrese un numero: "; cin>>n1;
    cout<<"Ingrese otro numero: "; cin>>n2;

    if(n1>n2){
        cout<<"\n"<<n1<<" es mayor que "<<n2<<endl<<endl;
    }
    else if(n1==n2){
        cout<<"\n"<<n1<<" es igual que "<<n2<<endl<<endl;
    }
    else{
        cout<<"\n"<<n2<<" es mayor que "<<n1<<endl<<endl;
    }

    return 0;
}
*/

/*
Ejercicio 5: Escriba un programa que pida 2 numeros A y B e imprima en pantalla la division A/B con redondeo
*/

/*
#include<iostream>
using namespace std;
int main(){

    double n1, n2, division, decimal;

    cout<<"Ingrese un numero: "; cin>>n1;
    do{
        cout<<"Ingrese otro numero menor al primero: "; cin>>n2;
    }while(n2>=n1);

    division= n1/n2;

    decimal= division-int(division);

    if(decimal>0.5){
        division+=1;
    }
    else
        division=division;

    cout<<"\n"<<n1<<" / "<<n2<<" = "<<int(division)<<endl<<endl;

    return 0;
}
*/

/*
Ejercicio 7: Escriba un programa que pida un numero N e imprima en pantalla la suma de todos los numeros desde el 1 hasta N
(incluyendose a el mismo)
*/

/*
#include<iostream>
using namespace std;
int main(){

    int n, suma;
    cout<<"Ingrese un numero: "; cin>>n;

    //usamos la ley de gauss que nos resuelve este problema con la siguiente ecuacion:
    //(n(n+1))/2


    suma=(n*(n+1))/2;

    cout<<"\nLa sumatoria desde 0 hasta "<<n<<" es: "<<suma<<endl<<endl;

    return 0;
}
*/

/*
Ejercicio 9: Escriba un programa que pida un numero N e imprima el perimetro y area de un circulo con radio N
*/

/*
#include<iostream>
using namespace std;
int main(){

    float radio, area, perimetro, pi=3.1416;
    cout<<"Ingrese la magnitud del radio del circulo: "; cin>>radio;

    //area: pi*(radio)^2
    //perimetro 2*pi*radio

    area= pi*(radio*radio);
    perimetro= 2*pi*radio;

    cout<<"\nPerimetro: "<<perimetro<<endl;
    cout<<"Area: "<<area<<endl;



    return 0;
}
*/

/*
Ejercicio 11: Escriba un programa que pida un numero N y muestre en su salida la tabla de multiplicar hasta 10xN
*/

/*
#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Ingrese un numero: "; cin>>n;
    cout<<endl;

    for(int i=1;i<=10;i++){
        cout<<i<<"x"<<n<<": "<<i*n<<endl;
    }

    cout<<endl;

    return 0;
}

*/

/*
Ejercicio 13: Escriba un programa que pida un numero N e imprima todos los divisores de N
si se ingresa 4 debe imprimir
1
2
4
*/

/*
#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Ingrese un numero: "; cin>>n;

    for(int i=1; i<=n; i++){
        if((n%i)==0){
            cout<<i<<endl;
        }
    }


    return 0;
}
*/

/*
Ejercicio 15: Escriba un programa que pida constantemente numeros hasta que se ingrese el 0 e imprima en pantalla la suma de los
numeros ingresados anteriormente
*/

/*
#include<iostream>
using namespace std;
int main(){

    //suma= suma + n;
    int n, suma=0;
    cout<<"Ingrese un numero: "; cin>>n;
    while(n!=0){
        suma+=n;
        cout<<"Ingrese un numero: "; cin>>n;
    }

    cout<<"\nEl resultado de la sumatoria es: "<<suma<<endl<<endl;


    return 0;
}
*/

/*
Ejercicio 17: Escriba un programa que pida constantemente numeros hasta que se ingrese el 0 e imprima en pantalla el mayor de
todos los numeros ingresados
*/

/*
#include<iostream>
using namespace std;
int main(){

    int n, anterior, actual=0;
    cout<<"Ingrese un numero: "; cin>>n;

    while(n!=0){
        anterior=actual;
        actual=n;
        if(actual>anterior){
            actual= actual;
        }
        else if(actual<anterior){
            actual= anterior;
        }
        cout<<"Ingrese un numero: "; cin>>n;
    }

    cout<<"\nEl mayor fue: "<<actual<<endl<<endl;

    return 0;
}


//anterior= actual
//actual=n;

//if(actual>anterior){
//    actual= actual
//}
//else if(actual<anterior){
//    anterior=actual;
//}
*/

/*
Ejercicio 19: Escriba un programa que pida un numero N y muestre en pantalla si es o no un numero primo
*/

/*
#include<iostream>
using namespace std;
int main(){

    int n;
    bool primo= true;
    cout<<"Ingrese un numero: "; cin>>n;

    for(int i=2; i<n; i++){
        if((n%i)==0){
            primo= false;
        }
    }

    if(primo==false){
        cout<<"\n"<<n<<" no es primo"<<endl<<endl;
    }
    if(primo==true){
        cout<<"\n"<<n<<" es primo"<<endl<<endl;

    }

    return 0;
}
*/

/*
Ejercicio 21: Escriba un programa que pida un caracter C, si es una letra, la debe convertir de minuscula a mayuscula y viceversa e imprimirla
*/

/*
#include<iostream>
#include<ctype.h>
using namespace std;
int main(){

    char c;
    cout<<"Ingrese una letra: "; cin>>c;

    //primero, debemos determinar si el caracter ingresado es una letra minuscula o mayuscula

    if((c>='A')&&(c<='Z')){
        c+=32;
        cout<<char(c)<<endl;
    }
    else if((c>='a')&&(c<='z')){
        c-=32;
        cout<<char(c)<<endl;
    }

    return 0;
}
*/

/*
Ejercicio 23: Escriba un programa que pida 2 numeros A y B, y muestre en pantalla el minimo comun multiplo entre los 2
Ejemplo: si se ingresa 4 y 6, debe imprimir:
El MCM de 4 y 6 es: 12.
*/

/*
#include<iostream>
using namespace std;
int main(){

    int a, b, A, B, aux, mcd, mcm;
    cout<<"Ingrese un numero: "; cin>>a;
    cout<<"Ingrese otro numero: "; cin>>b;

    //para resolver este problema, utilizamos la siguiente formula
    // (a*b)/mcd(a,b)

    //calculamos el mcd de a y b
    //para ello, calculamos cual es el numero mas grande

    A=a;
    B=b;

    if(a>b){
        a=a;
    }
    else if(b>a){
        aux=a;
        a=b;
        b=aux;
    }

    aux=0;
    //ahora, el mayor siempre es el a y el menor el b

    while(a%b!=0){
        aux=a;
        a=b;
        b=aux%a;
    }

    mcd=b; //maximo comun divisor

    mcm= (A*B)/mcd;

    cout<<"\nEl MCM de "<<A<<" y "<<B<<" es: "<<mcm<<endl;


    return 0;
}

*/

/*
Ejercicio 25: Escriba un programa que pida un numero N e imprima en pantalla la cantidad de digitos de N
Ejemplo: Si se ingresa 1234 debe imprimir:
1234 tiene 4 digitos
*/

/*
#include<iostream>
using namespace std;
int main(){

    int N, n, cont=0, digitos;
    cout<<"Ingrese un numero: "; cin>>N;

    n=N;
    while(N!=0){
        N/=10;
        cont++;
    }

    cout<<"\n"<<n<<" tiene "<<cont<<" digitos "<<endl<<endl;


    return 0;
}

*/

/*
Ejercicio 27: Escriba un programa que actue como calculadora con operaciones de suma, resta, multiplicacion y division, el usuario
debe ingresar los operandos y la operacion a realizar
Ejemplo: si se ingresan 3, + y 5, debe imprimir
3+5=8
*/

/*
#include<iostream>
using namespace std;
int main(){

    int a, b;
    char operador;
    cout<<"Ingrese un numero, luego su operador y por ultimo, otro numero: "<<endl; cin>>a>>operador>>b;

    if(operador=='+'){
        cout<<"\n"<<a<<"+"<<b<<"= "<<a+b<<endl<<endl;
    }
    else if(operador=='-'){
        cout<<"\n"<<a<<"-"<<b<<"= "<<a-b<<endl<<endl;
    }
    else if(operador=='*'){
        cout<<"\n"<<a<<"*"<<b<<"= "<<a*b<<endl<<endl;
    }
    else if(operador=='/'){
        cout<<"\n"<<a<<"/"<<b<<"= "<<a/b<<endl<<endl;
    }

    return 0;
}
*/

/*
Ejercicio 29: Escriba un programa que adivine un numero A (0-100) seleccionado por el usuario
(el numero NO se ingresa al programa), el programa imprimira en pantalla un numero B y el usuario usara simbolos
">","<","=" para indicarle al programa si B es mayor, menor o igual que A.
El programa imprimira un nuevo numero B, con base en simbolo ingresado por el usuario, y repetira el proceso hasta acertar con el numero
escogido por el usuario
*/

/*
#include<iostream>
using namespace std;
int main(){

    int a=0, b=100, mitad, contador=0;
    char caracter;
    do{
        mitad= a+((b-a)/2);
        cout<<mitad<<endl;
        cout<<"Ingrese si el numero que esta pensando es mayor(>), menor(<) o igual(=): "; cin>>caracter;
        if(caracter=='>'){
            a=mitad;
        }
        else if(caracter=='<'){
            b=mitad;
        }
        contador++;
    }while(caracter!='=');

    cout<<"\nHe adivinado tu numero en "<<contador<<" intentos."<<endl<<endl;
    return 0;
}
*/

/*
Problema 1: Escriba un programa que identifique si un caracter ingresado es una vocal, una consonante o ninguna de las 2 e imprima
un mensaje segun el caso
Nota: El formato de salida debe ser:
no es una letra
a es una vocal
C es una consonante
*/

/*
#include<iostream>
using namespace std;
int main(){

    char caracter, aux;
    cout<<"Ingrese un caracter: "; cin>>caracter;

    //vocales
    if(caracter=='A'||caracter=='a'||caracter=='E'||caracter=='e'||caracter=='I'||caracter=='i'||caracter=='O'||caracter=='o'||caracter=='U'||caracter=='u'){
        cout<<"\n"<<caracter<<" es una vocal"<<endl<<endl;
    }
    else{
        //consonantes mayusculas
        if(caracter>=65&&caracter<=90){
            for(char i=65; i<=90; i++){
                if(i==caracter){
                    cout<<"\n"<<caracter<<" es una consonante;"<<endl<<endl;
                    break;
                }
            }
        }
        //consonantes minusculas
        else if(caracter>=97&&caracter<=122){
            for(char i=97; i<=122; i++){
                if(i==caracter){
                    cout<<"\n"<<caracter<<" es una consonante;"<<endl<<endl;
                    break;
                }
            }
        }
        //no es una letra
        else{
            cout<<"\nNo es una letra"<<endl<<endl;
        }

    }

    return 0;
}
*/

/*
Problema 3: Escriba un programa que debe leer un mes y un dia de dicho mes para luego decir si esa combinacion de mes son validos. El caso
mas especial es el 29 de Febrero, en dicho caso, imprimir "posiblemente años bisiesto".
Nota: El formato de salida debe ser:
14 es un mes invalido
31/4 es una fecha invalida
27/4 es una fecha valida
29/2 es un año bisiesto
*/

/*
#include<iostream>
using namespace std;
int main(){

    int mes, dia;
    cout<<"Ingrese un dia y un mes (en numeros): "<<endl; cin>>dia>>mes;

    switch (mes) {
    //enero
    case 1: if(dia<=31){
            cout<<"\n"<<dia<<"/"<<mes<<" es una fecha valida"<<endl<<endl;
        }
        else{
            cout<<"\n"<<dia<<"/"<<mes<<" es una fecha invalida"<<endl<<endl;
        }
        break;
    //febrero
    case 2: if(dia<=29){
            if(dia=29){
                cout<<"\n"<<dia<<"/"<<mes<<" es posible ano bisiesto"<<endl<<endl;
            }
            else{
                cout<<"\n"<<dia<<"/"<<mes<<" es una fecha valida"<<endl<<endl;
            }
        }
        else{
            cout<<"\n"<<dia<<"/"<<mes<<" es una fecha invalida"<<endl<<endl;
        }
        break;
    //marzo
    case 3: if(dia<=31){
            cout<<"\n"<<dia<<"/"<<mes<<" es una fecha valida"<<endl<<endl;
        }
        else{
            cout<<"\n"<<dia<<"/"<<mes<<" es una fecha invalida"<<endl<<endl;
        }
        break;
    //abril
    case 4: if(dia<=30){
            cout<<"\n"<<dia<<"/"<<mes<<" es una fecha valida"<<endl<<endl;
        }
        else{
            cout<<"\n"<<dia<<"/"<<mes<<" es una fecha invalida"<<endl<<endl;
        }
        break;
    //mayo
    case 5: if(dia<=31){
            cout<<"\n"<<dia<<"/"<<mes<<" es una fecha valida"<<endl<<endl;
        }
        else{
            cout<<"\n"<<dia<<"/"<<mes<<" es una fecha invalida"<<endl<<endl;
        }
        break;
    //junio
    case 6: if(dia<=30){
            cout<<"\n"<<dia<<"/"<<mes<<" es una fecha valida"<<endl<<endl;
        }
        else{
            cout<<"\n"<<dia<<"/"<<mes<<" es una fecha invalida"<<endl<<endl;
        }
        break;
    //julio
    case 7: if(dia<=31){
            cout<<"\n"<<dia<<"/"<<mes<<" es una fecha valida"<<endl<<endl;
        }
        else{
            cout<<"\n"<<dia<<"/"<<mes<<" es una fecha invalida"<<endl<<endl;
        }
        break;
    //agosto
    case 8: if(dia<=31){
            cout<<"\n"<<dia<<"/"<<mes<<" es una fecha valida"<<endl<<endl;
        }
        else{
            cout<<"\n"<<dia<<"/"<<mes<<" es una fecha invalida"<<endl<<endl;
        }
        break;
    //septiembre
    case 9: if(dia<=30){
            cout<<"\n"<<dia<<"/"<<mes<<" es una fecha valida"<<endl<<endl;
        }
        else{
            cout<<"\n"<<dia<<"/"<<mes<<" es una fecha invalida"<<endl<<endl;
        }
        break;
    //octubre
    case 10: if(dia<=31){
            cout<<"\n"<<dia<<"/"<<mes<<" es una fecha valida"<<endl<<endl;
        }
        else{
            cout<<"\n"<<dia<<"/"<<mes<<" es una fecha invalida"<<endl<<endl;
        }
        break;
    //noviembre
    case 11: if(dia<=30){
            cout<<"\n"<<dia<<"/"<<mes<<" es una fecha valida"<<endl<<endl;
        }
        else{
            cout<<"\n"<<dia<<"/"<<mes<<" es una fecha invalida"<<endl<<endl;
        }
        break;
    //diciembre
    case 12: if(dia<=31){
            cout<<"\n"<<dia<<"/"<<mes<<" es una fecha valida"<<endl<<endl;
        }
        else{
            cout<<"\n"<<dia<<"/"<<mes<<" es una fecha invalida"<<endl<<endl;
        }
        break;

    default: cout<<"\n"<<mes<<" es un mes invalido"<<endl<<endl;
        break;
    }

    return 0;
}
*/

/*
Problema 5: Escriba un programa que muestre el siguiente patron en pantalla

   *
  ***
 *****
*******
 *****
  ***
   *

El tamaño del patron estara determinado por un numero impar que ingrese el usario. En el ejemplo mostrado, el tamaño es de 7
*/

/*
#include<iostream>
using namespace std;
int main(){

    int n, espacios, asteriscos;
    cout<<"Ingrese un numero impar: "; cin>>n;

    while(n%2==0){
        cout<<"Ingrese un numero impar: "; cin>>n;
    }

    espacios= (n-1)/2;
    asteriscos=1;

    //primera parte
    //   *
    //  ***
    // *****

    for(int i=0; i<((n-1)/2) ; i++){
        for(int j=0; j<espacios; j++){
            cout<<" ";
        }
        for(int j=0; j<asteriscos; j++){
            cout<<"*";
        }
        for(int j=0; j<espacios; j++){
            cout<<" ";
        }
        espacios-=1;
        asteriscos+=2;
        cout<<endl;
    }

    //mitad
    // *******

    for(int i=0; i<n; i++){
        cout<<"*";
    }
    cout<<endl;

    //ultima parte
    // *****
    //  ***
    //   *

    asteriscos=n-2;
    espacios=1;

    for(int i=0; i<((n-1)/2) ; i++){
        for(int j=0; j<espacios; j++){
            cout<<" ";
        }
        for(int j=0; j<asteriscos; j++){
            cout<<"*";
        }
        for(int j=0; j<espacios; j++){
            cout<<" ";
        }
        espacios+=1;
        asteriscos-=2;
        cout<<endl;
    }

    return 0;
}
*/

/*
Problema 7: En la serie de Fibonacci, cada numero es la suma de los 2 anteriores e inicia con 1 y 1
Ejemplo: 1, 1, 2, 3, 5, 8, 13 ....
Escriba un programa que reciba un numero n y halle la suma de todos los numeros pares en la serie de Fibonacci menores a n
Ejemplo: si se ingresa 10, seria la suma de 2+8=10.
Nota: El formato de salida debe ser: El resultado de la suma es 10
*/

/*
#include<iostream>
using namespace std;
int main(){

    int n, a, b, aux, suma=0;
    cout<<"Ingrese un numero: "; cin>>n;

    a=1;
    b=0;
    aux=0;

    //Serie Fibonacci
    for(int i=0; b<=n; i++){
        if(aux%2==0){
            suma+=aux;
        }
        aux=a+b;
        a=b;
        b=aux;
    }

    cout<<"\nEl resultado de la suma de los numeros pares en la serie de fibonacci es: "<<suma<<endl<<endl;

    return 0;
}
*/

/*
Problema 9: Escriba un programa que pida un numero entero N e imprima el resultado de la suma de todos sus digitos elevados a si mismos
Ejemplo: si se ingresa 1223 el resultado seria (1^1)+(2^2)+(2^2)+(3^3)= 36
Nota: La salida del programa debe ser: el resultado de la suma es 36
*/

/*
#include<iostream>
using namespace std;
int main(){

    int n, digito, suma, elevacion;
    cout<<"Ingrese un numero: "; cin>>n;

    for(int i=0; n!=0; i++){
        digito=n%10;
        elevacion=1;
        for(int j=0; j<digito; j++){
            elevacion*=digito;
        }
        suma+=elevacion;
        n/=10;
    }

    cout<<"\nEl resultado de la suma es "<<suma<<endl<<endl;

    return 0;
}
*/

/*
Problema 11: Escriba un programa que reciba un numero y calcule el minimo comun multiplo de todos los numeros enteros entre
1 y el numero ingresado N
Ejemplo: si se recibe 4 el programa debe imprimir 12
Nota: la salida del programa debe ser: El minimo comun multiplo es 12
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n, mcm=1;
    cout << "Ingrese un numero: ";
            cin >> n;

    for (int i = 2; i <= n; i++) {
        int a = mcm;
        int b = i;

        //calculamos el mcd con el algortimo de euclides
        while (a % b != 0) {
            int temp = a % b;
            a = b;
            b = temp;
        }

        //calculamos el mcm
        mcm = (mcm * i) / b;
    }

    cout << "\nEl minimo comun multiplo es: " <<mcm<<endl<<endl;

    return 0;
}
*/

/*
Problema 13: Escriba un programa que reciba un numero y calcule la suma de todos los primos menores que el numero ingresado
Ejemplo: Si se recibe 10 el programa debe imprimir 17
Nota: la salida del programa debe ser: El resultado de la suma es: 17
*/

/*
#include<iostream>
using namespace std;
int main(){

    int n, suma=0;
    bool primo= true;
    cout<<"Ingrese un numero: "; cin>>n;
    for(int i=2; i<n; i++){
        for(int j=2; j<i; j++){
            if((i%j)==0){
                primo= false;
                break;
            }
            else{
                primo=true;
            }
        }

        if(primo==true){
            suma+=i;
        }
    }

    cout<<"\nEl resultado de la suma es: "<<suma<<endl<<endl;

}
*/

/*
Problema 15: Empezando con el 1 y moviendose hacia la izquierda y en sentido horario se genera un espiral de numeros como la siguiente:

21 22 23 24 25
20 07 08 09 10
19 06 01 02 11
18 05 04 03 12
17 16 15 14 13

En el caso de una espiral 5x5, la suma de los numeros de la diagonal es 101.
Escriba un programa que reciba un numero impar n y calcule la suma de los numeros en la diagonal de una espiral nxn.
Nota: La salida del programa debe ser:
En una espiral 5x5, la suma es: 101
*/

/*
#include<iostream>
#include<cmath>
using namespace std;
int main(){

    int n;
    do{
        cout<<"Ingrese un numero impar: "; cin>>n;
    }while(n%2==0);

    int suma = 1; // Inicializamos la suma con 1, ya que el centro de la espiral siempre es 1
    int numeroActual = 1;
    int paso = 2; // por cada espiral o giro, se va incrementando de 2 en 2

    for (int i = 0; i < (n - 1) / 2; i++) { // (n-1)/2= numero de espirales o giros que hace sin contar el 1
        for (int j = 0; j < 4; j++) {
            numeroActual += paso;
            suma += numeroActual;
        }
        paso += 2; // Incrementamos el tamaño del paso para el siguiente ciclo
    }

    cout << "En una espiral " << n << "x" << n << ", la suma es: " << suma << endl;

    return 0;
}
*/




















