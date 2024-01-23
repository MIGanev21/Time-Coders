#include <iostream>
#include <iomanip>
using namespace std;

int global_id_num;
int choice;
int sec_choice;

int main()
{
	int withdrawM;
	int insertM;
	float balance = 0;
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
	cout << "----------------------------------------------2.How to get our own id number--------------------------------------------" << endl;
	cout << "--------------------------------------------------------3.Quit----------------------------------------------------------" << endl;
	cout << setw(20) << "Please select write you: ";
	cin >> choice;
	cout << endl;

	switch (choice)
	{
	case 1:
		system("cls");
		cout << "Please write your id number here: ";
		cin >> global_id_num;
		if (global_id_num > 999 || global_id_num < 100)
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
		cout << "Please select your choice: ";
		cin >> sec_choice;
		switch (sec_choice)
		{
		case 1:
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
			balance += insertM;
			cout << "Everything is up-to date!";
			cout << endl;
			cout << endl;
			cout << endl;
			break;

		case 2:
			system("cls");
			cout << "How much money would you like to withdraw: ";
			cin >> withdrawM;
			if (withdrawM < 0)
			{
				cout << "Wrong input, deactivation!!!";
				break;
			}
			cout << endl;
			cout << "Please wait...";
			cout << endl;
			balance -= withdrawM;
			cout << "Everything is up-to date!";
			cout << endl;
			cout << endl;
			cout << endl;
			break;
		case 3:

			break;

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