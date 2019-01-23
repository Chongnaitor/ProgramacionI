#include "iostream"
#include "vector"
#include "algorithm"
#include "Includes.h"

using namespace std;


int Drill()
{
	int iterador;
	

	char TerminarPrograma;
	iterador = 1;



	while (iterador == 1)
	{

		cout << "Introduce un  numero entero, cuando quieras parar presiona la tecla | \n";




		vector<double>Comparador{0};
		double Acceso = Comparador.size();
		double num1;
		cin >> num1;
		double num2;
		num2 = num1;
 			Comparador.push_back(num2);
	
		if (num2>=Comparador[Acceso-1])
		{
			cout << num1 << " Es el mas largo hasta ahora \n";
		}
		else if (num2<=Comparador[Acceso-1])
			cout << num1 << " Es el mas pequeno hasta ahora\n";
		else
		{
			cout << "Quieres terminar el progama?\n";
		
		}
		cout << "Quieres terminar el progama?\n";
		cin >> TerminarPrograma;
		if (TerminarPrograma == '|')
		{
			break;
		}
		else
		{
			iterador = 1;
		}
		
	}
	return 1;
}

int TemperaturaMedia()
{
	vector<double>temperaturas;
	for (double temperatura; cin >> temperatura;)
		temperaturas.push_back(temperatura);
		double suma = 0;
		for (double x : temperaturas)suma += x;
		cout << "Average temperature: " << suma / temperaturas.size() << '\n';
		cin.ignore();
		cin.get();
		size_t size = temperaturas.size();
		if (size == 0)
		{
			return 0;
		}
		else
		{
			sort(temperaturas);
		}
		if (size % 2==0)
			cout<<"La media de la temperatura es " <<(temperaturas[size / 2 - 1]) + temperaturas[size / 2]/2<<"\n";
		else
		{
			cout<<"La media de la temperatura es"<<temperaturas[size / 2]<<"\n";
		}
		return 23;
		cin.ignore();
		cin.get();


}


int main()
{
	vector<double>Distancias;
	for (double Distancia; cin >> Distancia;)
		Distancias.push_back(Distancia);
	double suma=0;
	for (double x : Distancias)suma += x;
	cout << "La suma total de las distancias es " << suma;
	cin.ignore();
	cin.get();

}
                                               







