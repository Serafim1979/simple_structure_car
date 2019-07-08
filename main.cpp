#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
/////////////////////////////////////////
struct car
{
	string name;
	int year_of_manufacture;
};
/////////////////////////////////////////
int main()
{
	char ch;
	
	do {
		int size;
		cout << "How many cars do you want to catalog?" << endl;
		cin >> size;

		car *cars = new car[size];

		for (int i = 0; i < size; i++)
		{
			cout << "Enter model of auto: ";
			cin >> cars->name;
			cout << "Enter year of auto: ";
			cin >> cars->year_of_manufacture;
			cars++;
		}

		cout << endl;

		cout << "This your catalog: " << endl;
		for (int i = 0; i < size; i++)
		{
			cars--;
			cout << "\t" << i + 1 << " auto " << endl;
			cout << "Model of auto: " << cars->name << endl;
			cout << "Years: " << cars->year_of_manufacture << endl;
		}
		cout << "Continue(y/n)?" << endl;
		cin >> ch;
	} while (ch != 'n');

	cout << "Good bye!" << endl;

	system("pause");
	return 0;
}