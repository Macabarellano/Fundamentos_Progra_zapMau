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
    char nombre[15] = " ";
    std::string name = " ";
    //1.-Hablemos con el usuario y solicitemos la información.
    std::cout << "Cuentame!! Cuántos años tienes? ";
    //2.-Para recibir datos del usuario necesitamos utilizar el protocolo de entrada de datos
    //STD::CIN >> Variable donde se guardarán los datos.
    std::cin >> Edad;
    //3.- Mostrar la información recolectada
    std::cout << "Entonces tienes: " << Edad << " años, Super! bienvenido" << std::endl;
}