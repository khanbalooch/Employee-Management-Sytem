//Name     : Muhammad Ibrahim
//Roll No  :13i-1821

#include <iostream>
#include <string>
#include "Car.h"
using namespace std;

int main()
{

	int y, s;

	string m;

	cout << "Enter the car Year Model : ";

	cin >> y;

	cout << "Enter make of car : ";

	cin >> m;

	Car car(y, m);

	cout << "press 1 to Drive car otherwise 0" << endl;
	cout << "Enter Here:";
	cin >> s;
	if (s == 1)
	{
		cout << "plz set your seat belt";
		cout << endl

			 << " ________________________________________________  \n"
			 << "|@             ALLAH _ U _ AKBAR               @ | \n"
			 << "|________________________________________________| \n"
			 << "|                _____    *  //                  | \n"
			 << "|               [''''']   * //                   | \n"
			 << "|                ______   *//                    | \n"
			 << "|speed          |";
		car.Display();
		cout << "Km/s |"
			 << "  *                      | \n"
			 << "|                         *                      | \n"
			 << "|Fuel           ||||||Gms ***********************|   ___  \n"
			 << "|                _____    *             ____     |==(___)\n"
			 << "|Accelerate     |__1__|   *            /    T    |      \n"
			 << "|                _____    *            | (0) |   | \n"
			 << "|Break          |__2__|   *            T____/    | \n"
			 << "|                _____    *           //     ))  | \n"
			 << "|stop driving   |__3__|   *           ||     ||  | \n"
			 << "-------------------------------------------------- \n";

		cin >> s;

		do
		{
			switch (s)
			{

			case 1:
				car.Accelerate();

				cout << endl

					 << " ________________________________________________  \n"
					 << "|@             ALLAH _ U _ AKBAR               @ | \n"
					 << "|________________________________________________| \n"
					 << "|                _____    *  //                  | \n"
					 << "|               [''''']   * //                   | \n"
					 << "|                ______   *//                    | \n"
					 << "|speed          |";
				car.Display();
				cout << "Km/s |"
					 << "  *                      | \n"
					 << "|                         *                      | \n"
					 << "|Fuel           ||||||Gms ***********************|   ___  \n"
					 << "|                _____    *             ____     |==(___)\n"
					 << "|Accelerate     |__1__|   *            /    T    |      \n"
					 << "|                _____    *            | (0) |   | \n"
					 << "|Break          |__2__|   *            T____/    | \n"
					 << "|                _____    *           //     ))  | \n"
					 << "|stop driving   |__3__|   *           ||     ||  | \n"
					 << "-------------------------------------------------- \n";

				cin >> s;
				break;
			case 2:
				car.Brake();

				cout << endl

					 << " ________________________________________________  \n"
					 << "|@             ALLAH _ U _ AKBAR               @ | \n"
					 << "|________________________________________________| \n"
					 << "|                _____    *  //                  | \n"
					 << "|               [''''']   * //                   | \n"
					 << "|                ______   *//                    | \n"
					 << "|speed          |";
				car.Display();
				cout << "Km/s |"
					 << "  *                      | \n"
					 << "|                         *                      | \n"
					 << "|Fuel           ||||||Gms ***********************|   ___  \n"
					 << "|                _____    *             ____     |==(___)\n"
					 << "|Accelerate     |__1__|   *            /    T    |      \n"
					 << "|                _____    *            | (0) |   | \n"
					 << "|Break          |__2__|   *            T____/    | \n"
					 << "|                _____    *           //     ))  | \n"
					 << "|stop driving   |__3__|   *           ||     ||  | \n"
					 << "-------------------------------------------------- \n";

				cin >> s;

				break;

			default:
				if (s != 3)
				{
					cout << "sorry !Invalid push \nDrive care fully \n";
					cin >> s;
				}
				break;
			};
		} while (s != 3);
	}

	return 0;
}
