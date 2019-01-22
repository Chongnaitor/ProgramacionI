#include "Includes.h"
using namespace std;
int main()
{
	int iterador;

	
	char TerminarPrograma;
	iterador = 1;
	
	
	
	while (iterador == 1)
	{

		cout << "Introduce un  numero entero, cuando quieras parar presiona la tecla | \n";
	
		


		vector<double>Comparador;
		double num1;
		for (double Elemento; cin >>num1;)
			Comparador.push_back(num1);
		
		if  ( >= Comparador.back())
		{
			cout << num1<<" Es el mas largo hasta ahora \n";
		}
		else if (num1 <=Comparador.back())
			cout << num1<<" Es el mas pequeno hasta ahora\n";
	


		cout << "Quieres terminar el progama?\n";
		cin >> TerminarPrograma;
		if (TerminarPrograma == '|')
		{
			break;
		}
		else
		{
		
		}
	}
}