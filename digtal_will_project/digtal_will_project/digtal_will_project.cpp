#include <iostream>
#include <iomanip>
using namespace std;

int global_id_num;

int main()
{
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
	cin >> global_id_num;

	switch (global_id_num)
	{
	case 1:
		system("cls");
		cout << "This is the login page for now!";
		break;

	case 2:
		system("cls");
		cout << "This is the expl on how to get own id num for now!";
		break;

	case 3:
		system("cls");
		cout << "Have a nice day! :D";
		break;

	default:
		system("cls");
		cout << "Have a nice day!";
	}