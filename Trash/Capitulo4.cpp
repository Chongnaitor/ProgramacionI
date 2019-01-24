#include "Includes.h"
using namespace std;
int Drill()
{

	
	
	
	
	

		cout << "Introduce un  numero entero, cuando quieras parar presiona la tecla | \n";
		
	
		


		vector<double>Comparador;
		double num1;
		for (double Elemento; cin >>num1;)
			Comparador.push_back(num1);
		double num2;
		num2 = Comparador.back();
		sort(Comparador);
		if (Comparador.front() >= num2)
		{
			cout << num2 << " es el menor hasta ahora\n";
			
		}
		else if(Comparador.back() <= num2)
		{
			cout << num2 << " es el mayor hasta ahora\n";
			
		}
		else
		{
			cout << Comparador.front() << " es el mas pequeno y " << Comparador.back() << " es el mas grande\n";
		}
		string unidades;
		double iterador;
		cin.ignore();
		cin.get();
		cout << "Ahora elige en que unidades lo quieres: \n";
		
		cin >> unidades;
		
		if (unidades == "m")
		{
			for (int  i=0; i < Comparador.size(); i++)
			{
				cout << Comparador[i] << "m";
			}
		}
		return 2;
}
int main()
{
	vector<double> temps;             
	for (double temp; cin>>temp; )                      
		temps.push_back(temp);      
		        
	double sum = 0;          
	for (double x : temps) sum += x;         
	cout << "Average temperature: " << sum/temps.size() << '\n';                     
	sort(temps);                 
	size_t size = temps.size();

	if (size == 0)
	{
		return 0;  
	}
	else
	{
		sort(temps.begin(), temps.end());
		if (size % 2 == 0)
		{
			cout<<(temps[size / 2 - 1] + temps[size / 2]) / 2;
		}
		else
		{
			cout << (temps[size / 2]);
		}

	}
}