// P002_Decisiones.cpp : 
// Mauricio Cabrera
// Vamos a hacer toma de decisiones
// Simples y Dobles
//

#include <iostream>
#include <locale>//Libreria para cambiar idiomas
int main()
{
    //Maneras de configurar para que soporte ñ y acentos
    setlocale(LC_ALL, "en-US");
    int Edad = 0;
    //Sintaxys de Decisiones
    //La palabra reservada es IF decisión simple.
    //Lo que este dentro del parentesis si es verdad
    std::cout << "Hola usuario dame tu edad: \n";
    std::cin >> Edad;
    if (Edad>=18)
    {
        //Se ejecuta esto
        std::cout <<"Usted es mayor de edad \n";
    }

    //Decisiones Dobles Sintaxys.
    int Vidas = 0;
    bool continuar = false;
    std::cout << "Continue? \n";
    std::cin >> continuar;
    if (continuar==true)//si esto es verdadero
    {
        //Se ejecuta esto
        std::cout << "Elegiste verdadero osea continuar \n";
        std::cout << "Deposita todo el cambio de las tortillas para tener otra oportunidad \n";
    }
    else
    {
        //Si es falso se ejecuta esto.
        std::cout << "Elegiste Falso osea salir \n";
        std::cout << "Orale llevele a su jefecita las tortillas y la coca\n";
    }

    //Terminando la ejecución se vendra a esta linea
    //Si es falso ejecuta directo a esta linea.
    std::cout << "adios popo.";
}
