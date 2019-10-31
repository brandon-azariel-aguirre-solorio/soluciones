#include <iostream>
#include <string> 
using namespace std;
//Declaramos prototipos de funciones
void menu();
int suma();
int resta();
int multiplicacion();
int divicion();
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
		cout << "calculadora de funciones \n";
		cout << "--------------------------\n";
		cout << "\t1.-Sumar\n";
		cout << "\t2.-Resta\n";
		cout << "\t3.-Multiplicacion\n";
		cout << "\t4.-Divicion\n";
		cout << "\t5.-Salir\n";
		cout << "Elige una opcion: \n";
		cin >> tecla;
		switch (tecla)
		{
		case'1':
			system("cls");
			suma();
			pausa();
			break;
		case'2':
			system("cls");
			resta();
			pausa();
			break;
		case'3':
			system("cls");
			multiplicacion();
			pausa();
			break;
		case'4':
			system("cls");
			divicion();
			pausa();
			break;
		case'5':
			system("cls");
			bandera = true;
			break;
		default:
			system("cls");
			cout << "opcion no valida  \n";
			pausa();
			break;
		}
	} while (bandera != true);
}
int suma()
{

}
int resta()
{

}
int multiplicacion()
{

}
int divicion()
{


}
void pausa()
{
	cout << "Pulsa una tecla para continuar................";
	getwchar();
	getwchar();
}