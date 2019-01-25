#include "Includes.h"
using namespace std;
int drill()
{

	
	
	
	
	
	
		


		vector<double>Comparador;	
		string unidades;
		cout << "Ahora elige unidades en que unidades lo quieres: \n";
		cin >> unidades;
		cout << " Ahora lista los numeros que quieras y despues pon | para continuar: \n ";
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
		
	
		double iterador;
		cin.ignore();
		cin.get();
		
		
		
		if (unidades == "m")
		{
			for (int  i=0; i < Comparador.size(); i++)
			{
				cout << Comparador[i] << " m ";
			}
		}
		else if (unidades == "ft")
		{
			for (int i = 0; i < Comparador.size(); i++)
			{
				cout << Comparador[i] << " ft ";
			}
		}
		else if (unidades == "in")
		{
			for (int i = 0; i < Comparador.size(); i++)
			{
				cout << Comparador[i] << " in ";
			}
		}
		else if (unidades == "cm")
		{
			for (int i = 0; i < Comparador.size(); i++)
			{
				cout << Comparador[i] << " cm ";
			}
		}
		cin.ignore();
		cin.get();
		return 2;
}
int ejercicio2()
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
int main()
{
	double suma=0;
	vector<double>Ciudades{150,89,70,53,98};
	for (double i : Ciudades) suma += i;
	{
		cout << suma;
	}
	
	cin.ignore();
		cin.get();
}