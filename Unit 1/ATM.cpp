#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
char option;

int main(){
	
	float money = 1000;
	printf ("Hi! Welcome to your ATM. How can we help you? ");
	
	do{
	char choice;
	cout << "\nSelect an option: " << "\n" << "\t" << "*Deposit (D)" << "\n\t" << "*Withdraw (W)" << "\n\t" <<"*Check Balance (C)" << "\n";
	cin >> choice;
	
	//Operación de deposito
	if(choice == 'D'){
		printf("\nYou have selected: Deposit");
		float deposit;
		cout << "\n" << "Enter the amount to deposit: ";
		cin >> deposit;
		float balance = money + deposit;
		money = balance;
		printf("\nIts current balance is: $%.2f", balance);
		}
		
	//Operación de retiro	
		if(choice == 'W'){
		printf("\nYou have selected: Withdraw");
		float retreat;
		cout << "\n" << "Enter the amount to withdraw: ";
		cin >> retreat;
		float balance = (money - retreat);
		money = balance;
		printf("\nYou have withdrawn: $%.2f \nIts current balance is: $%.2f", retreat, balance);
				if(balance <= 50.00 & balance > 00.00){
			printf("\tWarning: Your balance is low");
			}
			if(balance == 0.00){
				printf("\t|Insufficient balance|");
			}
			if(balance < 0.00){
				printf("\t|Negative balance|");
			}
		}
		

	//Consultar saldo
		if(choice == 'C'){
		printf("\n\nYou have selected: Consult balance");
		printf("\nIts current balance is: $%.2f", money);
		if(money < 50.00 & money > 00.00){
		printf("\tWarning: Your balance is low");
		if(money == 0.00){
		printf("\t|Insufficient balance|");
		}
		if(money < 0.00){
		printf("\t|Negative balance|");
		}
		}
	}
	
	do{
	printf("\nYou wish to perform another operation? (Y/N): ");
	scanf("%s",& option);
	}while(option != 'Y' && option != 'N');
	}while(option == 'Y'); 
		if(option == 'N'){
			printf("\n\tThank you for your preference. Come back soon!");	
		}

	return 0;
}
