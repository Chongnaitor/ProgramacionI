#include"pch.h"
#include<iostream>
#include<string>
using namespace std; 
inline void keep_window_open() { char ch; cin>>ch; }

int main() //c++ programs start by executing the function main
{
	cout << "Hello World!\n"; // Da un output al usuario
	keep_window_open(); //espera a un caracter ser ingresado
	return 0;
}