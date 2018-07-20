// Name   : Muhammad Ibrahim
//Roll No : 13i-1821

#ifndef Empl
#define Empl
#include <iostream>
#include <string>
using namespace std;

class Emp
{

  private:
	string name;

	int idNumber;

	string department;

	string position;

  public:
	Emp(string n, int id, string d, string p) : name(n), idNumber(id), department(d), position(p){};

	Emp(string n, int id) : name(n), idNumber(id), department(""), position(""){};

	Emp() : name(""), idNumber(0), department(""), position(""){};

	void setName(string n);

	void setIdNumber(int id);

	void setDepartment(string d);

	void setPosition(string p);

	string getName();

	int getIdNumber();

	string getDepartment();

	string getPosition();

	void Display();

	~Emp(){};
};
#endif
