#include <iostream>
#include <vector>
using namespace std;
int Drill() 
{
	try 
	{
		cout << "Succes!\n";
		cin.get();
		return 0;
	}
	catch (exception&e) 
	{
		cerr << "error:" << e.what() << '\n';
		cin.get();
		return 1;

	}
	catch (...)
	{
		cerr << "Oops: unknown exception!\n";
		cin.get();
		return 2;
	}
	//????????????????????????????????????????????
	
}

int Drill2()
{
	try
	{
		cout << "Succes!\n";
		cin.get();
		return 0;
	}
	catch (exception&e)
	{
		cerr << "error:" << e.what() << '\n';
		cin.get();
		return 1;

	}
	catch (...)
	{
		cerr << "Oops: unknown exception!\n";
		cin.get();
		return 2;
	}


}
int Drill3()
{
	try
	{
		cout << "Succes!\n";
		cin.get();
		return 0;
	}
	catch (exception&e)
	{
		cerr << "error:" << e.what() << '\n';
		cin.get();
		return 1;

	}
	catch (...)
	{
		cerr << "Oops: unknown exception!\n";
		cin.get();
		return 2;
	}

}
int Drill4 ()
{
	try
	{
		cout << "Succes!\n";
		cin.get();
		return 0;
	}
	catch (exception&e)
	{
		cerr << "error:" << e.what() << '\n';
		cin.get();
		return 1;

	}
	catch (...)
	{
		cerr << "Oops: unknown exception!\n";
		cin.get();
		return 2;
	}

}

