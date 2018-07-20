// Name   : Muhammad Ibrahim
//Roll No : 13i-1821

#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;
int main()
{

	int x, i, j = 0, c, c1;

	string n, d, po;

	/*********************************************************************************************************/

	cout << "This programme holds data about Employees  \n";

	cout << "Enter the number of Employees : ";

	cin >> x;

	Emp *p = new Emp[x];

	/**********************************************************************************************************/

	do
	{

		cout << "=========  Main Menu  =========\n"

			 << "Enter your Choice\n"

			 << "1.*************Add an Employee\n"

			 << "2.*************Delete an Employee\n"

			 << "3.*************Find an Employee\n"

			 << "4.*************Display all Employee data\n"

			 << "5.*************End Programme\n"

			 << "Enter Here:";

		cin >> c;
		switch (c)
		{

		case 1:

			cout << "Enter the Employee name:";

			cin.ignore();

			getline(cin, n);

			cout << "Enter Id Number:";

			cin >> i;

			cout << "Enter Employee Department:";

			cin.ignore();

			getline(cin, d);

			cout << "Enter the Employee position:";

			getline(cin, po);

			p[j].setName(n);

			p[j].setIdNumber(i);

			p[j].setDepartment(d);

			p[j].setPosition(po);

			j++;

			cout << "** work done **" << endl;

			break;
		case 2:

			cout << "Enter the Employee name you want to delete:";

			cin.ignore();

			getline(cin, n);

			for (int a = 0; a < x; a++)
			{

				if (p[a].getName() == n)
				{

					p[a].setName("");

					p[a].setIdNumber(0);

					p[a].setDepartment("");

					p[a].setPosition("");
				}
			}

			cout << "** work done **" << endl;
			break;

		case 3:

			cout << "Enter Employee id number:";

			cin >> i;

			for (int a = 0; a < x; a++)
			{

				if (p[a].getIdNumber() == i)

					p[a].Display();
			}

			break;

		case 4:

			for (int a = 0; a < x; a++)
			{

				p[a].Display();
			}

			break;

		default:

			if (c != 5)
			{

				cout << "sorry ! Invalid case input\n";
			}

			break;
		};
	} while (c != 5);

	delete[] p;

	return 0;
}
