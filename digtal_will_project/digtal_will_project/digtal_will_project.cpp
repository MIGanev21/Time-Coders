#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

int globalIdNum;
int choice;
int secChoice;
int withdrawM;
int insertM;
float balance = 100;
string arrWill[100];
int SecCheck;

int main()
{
	string Recname;
	string Recwill;
	string Recadress;
	string RecTelNum;
	cout << " _________   ___   ___      ___    _____" << endl;
	cout << "|         | |___| |   \\    /   |  | ____|" << endl;
	cout << "|__     __|  ___  |    \\  /    |  | |___" << endl;
	cout << "   |   |    |   | |   |_\\/_|   |  | ____|-------------------------------------------------------------------------------" << endl;
	cout << "   |___|    |___| |___|    |___|  |_____|" << endl;
	cout << endl;
	cout << endl;
	cout << " ______   _____   ______     _____     __  __   _____" << endl;
	cout << "|      | |     | ||    \\\\   | ____|   |  / __| |  ____|    " << endl;
	cout << "|  ____| |  _  | ||  _  ||  | |___    |   /    |  |___" << endl;
	cout << "| |____  | |_| | || |_| //  | ____|   |  |      _ ____|-----------------------------------------------------------------" << endl;
	cout << "|______| |_____| ||____//   |_____|   |__|     |______|" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "--------------------------------------------------------1.Login---------------------------------------------------------" << endl;
	cout << "----------------------------------------------2.How to get your own id number-------------------------------------------" << endl;
	cout << "--------------------------------------------------------3.Quit----------------------------------------------------------" << endl;
	cout << setw(20) << "Select option: ";
	cin >> choice;
	cout << endl;

	switch (choice) // select menu option
	{
	case 1:
		system("cls");
		cout << "Write your id number here: ";
		cin >> globalIdNum;   // instert id 
		if (globalIdNum > 999 || globalIdNum < 100) // check if id is correct
		{
			cout << "Wrong Input";
			break;
		}
		system("cls");
		cout << "BALANCE: " << balance;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << setw(20) << "1.Insert";
		cout << setw(30) << "2.Withdraw";
		cout << setw(40) << "3.Set your digital will" << endl;
		cout << endl;
		cout << endl;
		cout << "Select your choice: ";
		cin >> secChoice;
		switch (secChoice)		// select from menu options
		{
		case 1:					// select insert menu
			system("cls");
			cout << "How much money would you like to insert: ";
			cin >> insertM;
			if (insertM < 0)
			{
				cout << "Wrong input, deactivation!!!";
				break;
			}
			cout << endl;
			cout << "Please wait...";
			cout << endl;
			cout << endl;
			balance += insertM;
			cout << "Everything is up-to date! If you want to check you balance type you id number: ";
			cin >> SecCheck;
			if (SecCheck == globalIdNum)   // check id 
			{
				cout << "BALANCE" << balance;
			}
			cout << endl;
			cout << endl;
			cout << "Have a nice day!";
			cout << endl;
			cout << endl;
			break;

		case 2:					 // select withdraw menu
			system("cls");
			cout << "How much money would you like to withdraw: ";
			cin >> withdrawM;
			if (withdrawM < 0 || withdrawM > balance)       // check if balance is illegitimate
			{
				cout << "Wrong input, deactivation!";
				break;
			}
			cout << endl;
			cout << "Please wait...";
			cout << endl;
			cout << endl;
			balance -= withdrawM;			// remove withdraw amount from the balance
			cout << "Everything is up-to date! If you want to check you balance type you id number: ";
			cin >> SecCheck;
			if (SecCheck == globalIdNum)
			{
				cout << "BALANCE" << balance;
			}
			cout << endl;
			cout << endl;
			cout << "Have a nice day!";
			cout << endl;
			cout << endl;
			break;

		case 3:                        // select "Set your digital will" menu
			system("cls");
			cout << setw(50) << "Write the info about you digital will";
			cout << endl;
			cout << endl;
			cout << endl;
			cout << "Name: ";
			getline(cin, Recname);
			getline(cin, Recname);
			arrWill[0] = Recname;
			cout << endl;
			cout << "What do you leave for the person above: ";
			getline(cin, Recwill);
			arrWill[1] = Recwill;
			cout << endl;
			cout << "Where does the person above live: ";
			getline(cin, Recadress);
			arrWill[2] = Recadress;
			cout << endl;
			cout << "Telephone number of the receiver: ";
			getline(cin, RecTelNum);
			arrWill[3] = RecTelNum;
			cout << "To check you Will, write your id number: ";
			cin >> SecCheck;
			if (SecCheck == globalIdNum)			
			{
				system("cls");
				cout << arrWill[0] << endl;
				cout << arrWill[1] << endl;
				cout << arrWill[2] << endl;
				cout << arrWill[3] << endl;
			}
		default:
			break;
		}
		break;
	case 2:
		system("cls");
		cout << "To get your own id number please go in the python program fill in the needed information and you will be able to receive one";
		break;

	case 3:
		system("cls");
		cout << "Have a nice day! :D";
		break;

	default:
		system("cls");
		cout << "Have a nice day!";
		break;
	}
}