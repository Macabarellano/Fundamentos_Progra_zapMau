// P001_Hola_Mundo.cpp : 
// Mauricio Cabrera
// 
// Hablaremos con el usuario mediante
// STD::COUT << " ";
// Declaración de variables y operaciones aritmeticas

#include <iostream>
#include <math.h>
#include <time.h>
#include <locale>//Libreria para cambiar idiomas
#include <codecvt>//Librerias para cambiar codigos de UTF
#include <locale.h>//head file que solo funciona en windows
int main()
{
    //Maneras de configurar para que soporte ñ y acentos
    setlocale(LC_ALL, "en-US");
    std::locale::global(std::locale("en_US.UTF-8"));
    setlocale(LC_ALL, "es_MX.UTF-8");
    //\n es un salto de linea
    //std::endl;
    std::cout << "Hello Stranger\n";
    //Inicializaremos las variables de diferentes tipos
    //Tipo Nombre = Valor asignado de declaración o inicialización
    //Para guardar numeros enteros Reales
    int Edad = 0;
    //Para guardar numeros decimales
    float Altura = 0;
    float Cali = 0;
    //Para guardar VERDADES o FALSEDADES
    bool d1 = false;
    //Para guardar numeros REALMENTE EXTENSOS
    double Exponencial = 0;
    //Para guardar letras!!
    char sexo = ' ';
    //Para guardar cadenas de caracteres osea muchas letras
    char nombre[15] = "Mau Cabrera";//Valor L No modificable
    std::string name = " ";
    //1.-Hablemos con el usuario y solicitemos la información.
    std::cout << "Cuentame!! Cuántos años tienes? ";
    //2.-Para recibir datos del usuario necesitamos utilizar el protocolo de entrada de datos
    //STD::CIN >> Variable donde se guardarán los datos.
    std::cin >> Edad;
    //3.- Mostrar la información recolectada
    std::cout << "Entonces tienes: " << Edad << " años, Super! bienvenido" << std::endl;
    //No se puede cambiar el valor de asignación nombre[15] = "Juan perez";
    std::cout << "Tu nombre es: " << nombre << std::endl;
    std::cin >> nombre;
    std::cout << "Tu nuevo nombre es: " << nombre << std::endl;

    //Hacer una suma de 2 datos que ingrese el usuario.
    //primero DECLARAMOS
    int numero1, numero2;
    //Segundo SOLICITAMOS
    std::cout << "Ingresa el primer numero a sumar: " << std::endl;
    //Tercero RECIBIMOS
    std::cin >> numero1;

    std::cout << "Ingresa el segundo numero a sumar: " << std::endl;
    std::cin >> numero2;
    //Cuarto OPERAMOS o UTILIZAMOS
    std::cout << "El resultado de la suma es: "<< numero1 + numero2 << std::endl;
}