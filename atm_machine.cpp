#include <iostream>
using namespace std;

void showMenu() {
	cout << "*********MENU*********" << endl;
	cout << "1. Check Balance" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdraw" << endl;
	cout << "4. Transfer to other Account" << endl;
	cout << "5. End Program" << endl;
	cout << "**********************" << endl;
}

void balanceMenu() {
	cout << "*********Balance*********" << endl;
	cout << "2. Checking Account" << endl;
	cout << "3. Savings Account" << endl;

}

void depositMenu() {
	cout << "*********Deposit*********" << endl;
	cout << "2. Checking Account" << endl;
	cout << "3. Savings Account" << endl;
}

void withdrawMenu() {
	cout << "*********Withdraw*********" << endl;
	cout << "2. Checking Account" << endl;
	cout << "3. Savings Account" << endl;
}

void transferMenu() {
	cout << "*********Transfer*********" << endl;
	cout << "2. Checking Account" << endl;
	cout << "3. Savings Account" << endl;
}


int main() {
	//check balance, deposit, withdraw, show menu
	int option;
	int balance_option;
	int deposit_option;
	int withdraw_option;
	int transfer_option;
	double checkingBalance = 0;
	double savingsBalance = 0;

	do {

		showMenu();
		cout << "Option: ";
		cin >> option;
		system("cls");

		switch (option) {

		case 1: {

			balanceMenu();
			cout << "Which account balance would you like to check: ";
			cin >> balance_option;

			//switch inside a switch that gives the user the ability to check balance for 2 accounts letting them use cases to pick a certain account
			switch (balance_option) {

			case 2: {
				cout << "Checking Account Balance is: $" << checkingBalance << endl;
				break;
			}

			case 3: {
				cout << "Savings Account Balance is: $" << savingsBalance << endl;
				break;
			}

			}break;
		}

		case 2: {

			depositMenu();
			cout << "Which account would you like to deposit money into: ";
			cin >> deposit_option;

			switch (deposit_option) {

			case 2: {
				cout << "How much would you like to deposit: ";
				double depositChecking;
				cin >> depositChecking;
				checkingBalance += depositChecking;
				break;
			}


			case 3: {
				cout << "How much would you like to deposit: ";
				double depositSavings;
				cin >> depositSavings;
				savingsBalance += depositSavings;
				break;
			}

			}break;

		}

		case 3: {

			withdrawMenu();
			cout << "Which account would you like to withdraw money from: ";
			cin >> withdraw_option;

			switch (withdraw_option) {

			case 2: {
				cout << "How much would you like to withdraw: ";
				double withdrawChecking;
				cin >> withdrawChecking;
				checkingBalance - +withdrawChecking;

				if (withdrawChecking <= checkingBalance) {
					checkingBalance -= withdrawChecking;
				}
				else {
					cout << "Not enough money" << endl;
				}
				break;
			}


			case 3: {
				cout << "How much would you like to withdraw: ";
				double withdrawSavings;
				cin >> withdrawSavings;
				savingsBalance - +withdrawSavings;

				if (withdrawSavings <= savingsBalance) {
					savingsBalance -= withdrawSavings;
				}
				else {
					cout << "Not enough money" << endl;
				}
				break;
			}
			}break;
		}

		case 4: {

			transferMenu();
			cout << "Where would you like to transfer your money: ";
			cin >> transfer_option;

			switch (transfer_option) {

			case 2: {
				cout << "How much would you like to transfer: ";
				double transferChecking;
				cin >> transferChecking;

				if (transferChecking <= checkingBalance) {
					checkingBalance -= transferChecking;
				}
				else {
					cout << "Not enough money to transfer" << endl;
					break;
				}

				savingsBalance += transferChecking;
				break;
			}

			case 3: {
				cout << "How much would you like to transfer: ";
				double transferSavings;
				cin >> transferSavings;

				if (transferSavings <= savingsBalance) {
					savingsBalance -= transferSavings;
				}
				else {
					cout << "Not enough money to transfer" << endl;
					break;
				}

				checkingBalance += transferSavings;
				break;

			}

			}break;
		}

		}

	} while (option != 5);
	cout << "Have a good day!";

	return 0;
}
