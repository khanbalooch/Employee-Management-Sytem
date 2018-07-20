//Name    :  Muhammad Ibrahim
//Roll No :  13i-1821

#include <iostream>
#include <string>
#include "Inventory.h"
using namespace std;

/*===================================================================================================*/

int main()
{

	/*================================     declarations for future purposes    ==========================*/

	int x, c, j = 0, itemno, quantity, cost, m, d;

	cout << "This programme stores data for items in stock\n";

	cout << "\n\nEnter the number of Items:";

	cin >> x;

	Inv *p = new Inv[x];

	/**********************************************************************************************************/ //loop

	do
	{

		cout << "======Main Menu======\n";

		cout << "Enter your choice" << endl;

		cout << "1.*********************Add an Item\n"

			 << "2.*********************Modify an Item\n"

			 << "3.*********************Delete an Item\n"

			 << "4.*********************find an item\n"

			 << "5.*********************Display all items\n\n"

			 << "6.********************* End Programme \n"

			 << "Enter Here : ";

		cin >> c;

		switch (c)
		{

		case 1:

			if (j < x)
			{
				cout << "Enter Item No:";

				cin >> itemno;

				cout << "Enter quantity:";

				cin >> quantity;

				cout << "Enter cost per unit:";

				cin >> cost;

				p[j].setItemNumber(itemno);

				p[j].setQuantity(quantity);

				p[j].setCost(cost);

				p[j].setTotalCost();

				j++;

				cout << "** Work Done **\n\n"
					 << endl;
			}

			else
			{

				cout << "Sorry! The Number of items are completed\n";
			}

			break;

		case 2:

			cout << "Enter the Item number you want to modify:";

			cin >> m;

			cout << "Enter Modified Item No:";

			cin >> itemno;

			cout << "Enter corresponding quantity:";

			cin >> quantity;

			cout << "Enter cost per unit:";

			cin >> cost;

			p[m - 1].setItemNumber(itemno);

			p[m - 1].setQuantity(quantity);

			p[m - 1].setCost(cost);

			p[m - 1].setTotalCost();

			cout << "** Work Done **\n\n"
				 << endl;

			break;

		case 3:

			cout << "Enter Item no You Want to Delete:";

			cin >> d;

			p[d - 1].setItemNumber(0);

			p[d - 1].setQuantity(0);

			p[d - 1].setCost(0.0);

			p[d - 1].setTotalCost();

			cout << "** Work Done **\n\n"
				 << endl;

			break;

		case 4:

			cout << "Enter the Item No you want to find:";

			cin >> d;

			p[d - 1].Display();

			break;

		case 5:

			for (int i = 0; i < x; i++)
			{

				p[i].Display();

				cout << "\n********************\n";
			}

			break;

		default:

			if (c != 6)
			{

				cout << "Enter a valid Number\n";
			}

			break;
		};			  //switch Ended
	} while (c != 6); //while looooooooop ending

	delete[] p;

	return 0;
}
