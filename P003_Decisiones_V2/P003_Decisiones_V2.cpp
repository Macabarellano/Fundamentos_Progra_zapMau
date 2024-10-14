// P003_Decisiones_V2.cpp : 
// Mauricio Cabrera
// Realizaremos decisiones anidadas y multiples
//

#include <iostream>
#include <locale>
#include <string>
int main()
{
	setlocale(LC_ALL, "en-US");

	//Decisiones Anidadas una decisión depende de otra
	std::string apodo = "Mcbr0";
	std::string apodo_usuario;
	std::string contra = "Hola123";
	std::string contra_usuario;
	std::cout << "Hola usuario dame tu nick name: " << std::endl;
	std::getline(std::cin, apodo_usuario);//Con getline podemos ingresar espacios sin problema en variables tipo string
	if (apodo == apodo_usuario)
	{
	    std::cout << "para confirmar tu acceso ingresa tu contraseña: "<<std::endl;
		std::getline(std::cin, contra_usuario);
		if (contra == contra_usuario)
		{
			std::cout << "Bienvenido " << apodo << std::endl;
		}
		else
		{
			std::cout << "Saquese impostor u.u\n";
		}
	}
	else
	{
		std::cout << "No conozco a ese usuario n.n\n";
	}

	//Decisiones Multiples.
	int opcion = 0;
	std::cout << "Que es lo primero que haces al despertar?\n";
	std::cout << "1.- Tomas un baño? 2.- Desayunas? 3.-Corres porque ya se te hizo tarde?\n";
	std::cin >> opcion;
	switch (opcion)//Evaluaremos la opción y dependiendo del caso ejecutaremos
	{
	case 1:
		std::cout << "Disfruta el baño. Se ejecuta la primera opción\n";
		break;
	case 2:
		std::cout << "Echale al desayuno!. Se ejecuta la 2da opción\n";
		break;
	case 3:
		std::cout << "Correle correle!!!!. Se ejecuta la 3ra opción\n";
	default:
		std::cout << "Opción fuera del rango\n";
		break;
	}
}
