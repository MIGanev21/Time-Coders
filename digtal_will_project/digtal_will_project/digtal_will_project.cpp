#include <iostream>
#include <iomanip>
using namespace std;

int global_id_num;
int choice;

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
	cin >> choice;
	cout << endl;
	switch (choice)
	{
	case 1:
		cout << "Please write your id number here: ";
		cin >> global_id_num;
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