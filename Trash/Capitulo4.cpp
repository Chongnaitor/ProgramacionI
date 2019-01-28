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
int ejercicio3()
{
	double suma=0;
	vector<double>Ciudades{150,89,70,53,98};
	for (double i : Ciudades) suma += i;
	{
		cout << "Esta es la suma total de todas las distancias entre ciudades " << suma<<"km\n";

	}
	sort(Ciudades);
	int elemento = Ciudades[1];
	int elemento2 = Ciudades[3];
	

	if (Ciudades.front() <= elemento);
	{
		cout <<"La distancia mas pequena entre ciudades es :"<< Ciudades.front() + elemento<<"\n";
	}
	if (Ciudades.back() >= elemento2)
	{
		cout << "La distancia mas grande entre ciudades es: " << Ciudades.back() + elemento2 << "\n";
	}
	cin.ignore();
		cin.get();
		return 485;

}
int main()
{
	vector<int>Numeros;
	vector<int>Numeros2;
	vector<int>Numeros3;
	vector<int>Numeros4;
	int b = 101;
	for (int i = 0; i != b;)
	{
		Numeros.push_back(i);
		i++;
	}
	cout << "Bienvenido al juego en el que la maquina te adivinara el numero en el que estas pensando del 1 al cien\n";
	cout << "Tu numero es mayor a 50?:\n";
	string NumeroDeUsuario0;
	cin >> NumeroDeUsuario0;
	if (NumeroDeUsuario0 == "Si" || NumeroDeUsuario0 == "si")
	{
		for (int s = 0; s < Numeros.size(); s++)
		{
			if (Numeros[s] >= 50)
			{
				Numeros2.push_back(s);
			}
		}
	}
	if (NumeroDeUsuario0 == "Si" || NumeroDeUsuario0 == "si")
	{
		string Mayor75;
		cout << "Tu numero es mayor a 75?\n";
		cin >> Mayor75;
		if (Mayor75 == "Si" || Mayor75 == "si")
		{
			for (int y = 0; y < Numeros2.size(); y++)
			{
				if (Numeros2[y] >= 75)
				{
					Numeros3.push_back(y);
				}
			}
		}

		else if (Mayor75 == "No" || Mayor75 == "no")
		{
			for (int i = 0; i < Numeros2.size(); i++)
			{
				if (Numeros2[i] <= 75)
				{
					Numeros3.push_back(i);
				}
			}
		}
	}


	if (NumeroDeUsuario0 == "No" || NumeroDeUsuario0 == "no")
	{
		for (int s = 0; s < Numeros.size(); s++)
		{
			if (Numeros[s] <= 50)
			{
				Numeros2.push_back(s);
			}
		}


	}
	if (NumeroDeUsuario0 == "No" || NumeroDeUsuario0 == "no")
	{
		string Mayor25;
		cout << "Tu numero es mayor a 25?\n";
		cin >> Mayor25;
		if (Mayor25 == "Si" || Mayor25 == "si")
		{
			for (int y = 0; y < Numeros2.size(); y++)
			{
				if (Numeros2[y] >= 25)
				{
					Numeros3.push_back(y);
				}
			}
		}
		else if (Mayor25 == "no" || Mayor25 == "No")
		{
			for (int y = 0; y < Numeros2.size(); y++)
			{
				if (Numeros2[y] <= 25)
				{
					Numeros3.push_back(y);
				}
			}
		}
	}


	string MultiplosLocos;
	if (Numeros3.back() == 25)
	{
		cout << "Tu numero es multiplo de 5?\n";
		cin >> MultiplosLocos;
		if (MultiplosLocos == "Si" || MultiplosLocos == "si")
		{
			cout << "Tu numero es mayor 15?\n";
			cin >> MultiplosLocos;
			if (MultiplosLocos == "Si" || MultiplosLocos == "si")
			{
				cout << "Tu numero es 20?\n";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "Si" || MultiplosLocos == "si")
				{
					cout << "Wiiiiiiiii\n";
				}
				else
				{
					cout << "Tu numero es 25";
				}

			}
			else if (MultiplosLocos == "No" || MultiplosLocos == "no")
			{
				cout << "Tu numero es 15?\n";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "Si" || MultiplosLocos == "si")
				{
					cout << "Wiiii!!\n";
				}
				else if (MultiplosLocos == "No" || MultiplosLocos == "no")
				{
					cout << "Tu numero es 10?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "Si" || MultiplosLocos == "si")
					{
						cout << "Wiiiiiiiii\n";
					}
					else
					{
						cout << "Tu numero es 5";
					}
				}
			}
		}
		else if (MultiplosLocos == "No" || MultiplosLocos == "no")
		{
			cout << "Tu numero esta entre el 1 y el 13\n";
			cin >> MultiplosLocos;
			if (MultiplosLocos == "No" || MultiplosLocos == "no")
			{
				cout << "Tu numero esta entre 14 y 24\n";
				cout << "Tu numero es multiplo de 3?\n";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "Si" || MultiplosLocos == "si")
				{
					cout << "Tu numero es 18?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Yay\n";
					}
					else if ((MultiplosLocos == "no" || MultiplosLocos == "No"))
					{
						cout << "Tu numero es 24?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "no" || MultiplosLocos == "No")
						{
							cout << "Yay\n";
						}
						else if (MultiplosLocos == "Si" || MultiplosLocos == "si")
						{
							cout << "Tu numero es 21\n";
						}
					}
				}

				else if (MultiplosLocos == "No" || MultiplosLocos == "no")
				{
					cout << "Tu numero esta entre el 14 y 24\n";
					cout << "Tu numero es mayor a 17?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "Si" || MultiplosLocos == "si")
					{
						cout << "Tu numero es 19?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "no" || MultiplosLocos == "No")
						{
							cout << "Tu numero es 23?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "no" || MultiplosLocos == "No")
							{
								cout << "Tu numero es 24";
							}
							else if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay";
							}

						}
					}
					else if (MultiplosLocos == "no" || MultiplosLocos == "No")
					{
						cout << "Tu numero es 17?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay\n";
						}
						else if (MultiplosLocos == "no" || MultiplosLocos == "No")
						{
							cout << "Tu numero es 16?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "no" || MultiplosLocos == "No")
							{
								cout << "Tu numero es 14\n";
							}
						}
					}
				}
			}
			if (MultiplosLocos == "Si" || MultiplosLocos == "si")
			{
				cout << "Tu numero es multiplo de 3?\n";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "no" || MultiplosLocos == "No")
				{
					cout << "Tu numero es mayor a 4?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "Si" || MultiplosLocos == "si")
					{
						cout << "Tu numero es 7?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "Si" || MultiplosLocos == "si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "no" || MultiplosLocos == "No")
						{
							cout << "Tu numero es 11?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "Si" || MultiplosLocos == "si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "no" || MultiplosLocos == "No")
							{
								cout << "Tu numero es 13";
							}

						}
					}
					else if (MultiplosLocos == "no" || MultiplosLocos == "No")
					{
						cout << "Tu numero es 4?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "Si" || MultiplosLocos == "si")
						{
							cout << "Yay\n";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 2?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "Si" || MultiplosLocos == "si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "no" || MultiplosLocos == "No")
							{
								cout << "Tu numero es 1";
							}
						}
					}
				}
				else if (MultiplosLocos == "si" || MultiplosLocos == "Si")
				{
					cout << "Tu numero es mayor a 9?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Tu numero es 12\n";

					}
					else if (MultiplosLocos == "no" || MultiplosLocos == "No")
					{
						if (MultiplosLocos == "no" || MultiplosLocos == "No")
						{
							cout << "Tu numero es 9?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "no" || MultiplosLocos == "No")
							{
								cout << "Tu numero es 6?";
								cin >> MultiplosLocos;
								if (MultiplosLocos == "si" || MultiplosLocos == "Si")
								{

									cout << "Yay";
								}
								else if (MultiplosLocos == "no" || MultiplosLocos == "No")
								{
									cout << "Tu numero es 3";
								}
							}
						}
					}


				}

			}

		}
	}
	if (Numeros3.back() == 50)
	{

	}

	

}
		


		

	
