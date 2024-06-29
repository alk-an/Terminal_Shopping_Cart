#include "Customer.h"
#include <cstring>
#include <iostream>
#include <cmath>
using namespace std;

Customer::Customer()
{
	custNo=0;	
	strcpy(custName, " ");
	strcpy(custEmail, " ");
}

Customer::Customer(int custNo1, char custName1[], char custEmail1[])
{
	custNo=custNo1;
	strcpy(custName,custName1);
	strcpy(custEmail,custEmail1);
}

void Customer::readData()
{
	cout<<"Dose Customer No    : ";
	cin>> custNo;
	cout<<"Dose Customer Name  : ";
	cin>> custName;
	cout<<"Dose Customer Email : ";
	cin>> custEmail;
}

void Customer::setData(int custNo1, char custName1[], char custEmail1[])
{
	custNo=custNo1;
	strcpy(custName,custName1);
	strcpy(custEmail,custEmail1);
}

void Customer::printData()
{
	cout<<"Customer No : "<< custNo<< endl;
	cout<<"Customer Name : "<< custName<< endl;
	cout<<"Customer Email : "<< custEmail<< endl;
}

int Customer::getCustNo()
{
	return custNo;
}

char* Customer::getCustName()
{
	return custName;
}

char* Customer::getCustEmail()
{
	return custEmail;
}
