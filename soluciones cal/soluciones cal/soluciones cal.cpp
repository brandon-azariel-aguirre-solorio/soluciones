#include <iostream>
#include <string> 
using namespace std;
//Declaramos prototipos de funciones
void menu();
long int suma();
long int resta();
long int multiplicacion();
long float divicion();
void pausa();

int main()
{

	menu();
	return 0;

}
//Creamos funciones
void menu()
{
	bool bandera = false;
	char tecla;
	do
	{
		system("cls");
		cin.clear();
		cout << "---------------------------------------------------------------------------------------------------------------------\n";
		cout << "                                          calculadora de funciones \n";
		cout << "---------------------------------------------------------------------------------------------------------------------\n";
		cout << "\t1.-Sumar\n";
		cout << "\t2.-Restar\n";
		cout << "\t3.-Multiplicar\n";
		cout << "\t4.-Dividir\n";
		cout << "\t5.-Salir\n\n";
		cout << "Elige una opcion: \n";
		cin >> tecla;
		switch (tecla)
		{
		case'1':
			system("cls");
			suma();
			break;
		case'2':
			system("cls");
			resta();
			break;
		case'3':
			system("cls");
			multiplicacion();
			break;
		case'4':
			system("cls");
			divicion();
			break;
		case'5':
			system("cls");
			bandera = true;
			break;
		default:
			system("cls");
			cout << "Opcion no valida ingresa una de las 5 opciones disponibles\n";
			pausa();
			break;
		}
	} while (bandera != true);
}
long int suma()
{
	long int a, b, suma;
	cout << "Dame el primer valor: \n";
	cin >> a;
	cout << "Dame el segundo valor: \n";
	cin >> b;
	suma = a + b;
	cout << "El resultado de la suma es: " << suma << endl;
	pausa();
	return 0;
}
long int resta()
{
	long int a, b, resta;
	cout << "Dame el primer valor: \n";
	cin >> a;
	cout << "Dame el segundo valor: \n";
	cin >> b;
	resta = a - b;
	cout << "El resultado de la resta es: " << resta << endl;
	pausa();
	return 0;
}
long int multiplicacion()
{
	long int a, b, multiplicacion;
	cout << "Dame el primer valor: \n";
	cin >> a;
	cout << "Dame el segundo valor: \n";
	cin >> b;
	multiplicacion = a * b;
	cout << "El resultado de la multiplicacion es: " << multiplicacion << endl;
	pausa();
	return 0;
}
long float divicion()
{
	long float a, b, divicion;
	cout << "Dame el primer valor: \n";
	cin >> a;
	cout << "Dame el segundo valor: \n";
	cin >> b;
	divicion = a/ b;
	cout << "El resultado de la divicion es: " << divicion << endl;
	pausa();
	return 0;

}
void pausa()
{
	cout << endl << "Pulsa una tecla para continuar................";
	getwchar();
	getwchar();
}