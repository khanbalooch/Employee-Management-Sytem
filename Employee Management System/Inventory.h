//Name     : Muhammad Ibrahim
//Roll No  :13i-1821

#ifndef Ibrahim
#define Ibrahim
#include <iostream>
#include <string>
using namespace std;

class Inv
{

  private:
	int itemNo;

	int quantity;

	double cost;

	double totalCost;
	/*************************************************************************************************/
  public:
	Inv() : itemNo(0), quantity(0), cost(0.00), totalCost(0.0){};
	/*************************************************************************************************/
	Inv(int i, int q, double c) : itemNo(i), quantity(q), cost(c), totalCost(0.0){};
	/*************************************************************************************************/
	void setItemNumber(int itmn);
	/*************************************************************************************************/
	void setQuantity(int qnt);
	/**************************************************************************************************/
	void setCost(double c);
	/*************************************************************************************************/
	void setTotalCost();
	/*************************************************************************************************/
	int getItemNumber();
	/*************************************************************************************************/
	int getQuantity();
	/**************************************************************************************************/
	double getCost();
	/**************************************************************************************************/
	double getTotalCost();
	/***************************************************************************************************/
	void Display();
	/***************************************************************************************************/
	~Inv(){};
};
#endif