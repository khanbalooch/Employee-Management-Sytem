// Name   : Muhammad Ibrahim
//Roll No : 13i-1821

#include "Employee.h"

void Emp::setName(string n)
{

	name = n;
}
/****************************************************************/
void Emp::setIdNumber(int id)
{

	idNumber = id;
}
/*******************************************************************/
void Emp::setDepartment(string d)
{

	department = d;
}
/***********************************************************************/
void Emp::setPosition(string p)
{

	position = p;
}
/*********************************************************************/
string Emp::getName()
{

	return name;
}
/***********************************************************************/
int Emp::getIdNumber()
{

	return idNumber;
}
/****************************************************************************/
string Emp::getDepartment()
{

	return department;
}
/******************************************************************************/
string Emp::getPosition()
{

	return position;
}
/******************************************************************************/
void Emp::Display()
{

	cout << "Name : " << name << endl;

	cout << "ID Number : " << idNumber << endl;

	cout << "Department : " << department << endl;

	cout << "Position : " << position << endl;

	cout << "****************************" << endl;
}
