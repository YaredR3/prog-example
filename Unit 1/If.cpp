#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	
	//Ingresar la hora y guardarla en la variable
	int time;
	cout << "Ingrese una hora: ";
	cin >> time;
	
	//Definir la hora
	if (time > 00.00 & time < 12.00){
	cout << "Good morning.";
	}
	if (time == 12.00){
	cout << "It's noon";
	}
	if (time >= 13.00 & time <= 18.00){
	cout << "Good evening";
	}
	if (time >= 19.00 & time <= 23.00){
		cout << "Good night";
	}
	if (time == 24.00){
		cout << "It's midnight";
	}
	return 0;
}
