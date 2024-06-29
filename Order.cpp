#include "Order.h"
#include <cstring>
#include <iostream>
#include <cmath>
using namespace std;
Order::Order() :Customer::Customer(),Item::Item()
{
	orderNo=0;
	strcpy(orderDate, " ");
	totalAmount=0;
}

Order::Order(int orderNo1, char orderDate1[], float totalAmount1, int custNo1, char custName1[], char custEmail1[], int itemNo1, char itemDesc1[], float itemPrice1) : Customer::Customer(custNo1,custName1,custEmail1),Item::Item(itemNo1,itemDesc1,itemPrice1)
{
	orderNo=orderNo1;
	strcpy(orderDate1,orderDate);
	totalAmount=totalAmount1;
}

void Order::readData()
{
	Customer::readData();
	cout<<"Dose Order No   : ";
	cin>> orderNo;
	cout<<"Dose Order Date : ";
	cin>> orderDate;
}

void Order::setData(int orderNo1, char orderDate1[], float totalAmount1,	int custNo1, char custName1[], char custEmail1[],	int itemNo1, char itemDesc1[], float itemPrice1)
{
	Customer::setData(custNo1,custName1,custEmail1);
	orderNo=orderNo1;
	strcpy(orderDate1,orderDate);
	totalAmount=totalAmount1;
	Item::setData(itemNo1,itemDesc1,itemPrice1);
}

void Order::printData()
{
	cout<<"Order No : "<< orderNo<< endl;
	cout<<"Order Date : "<< orderDate<< endl;
	cout<<"Total Amount : "<< totalAmount<< endl;
	Customer::printData();
	Item::printData();
}


int Order::getOrderNo()
{
	return orderNo;
}

char* Order::getOrderDate()
{
	return orderDate;
}

float Order::getTotalAmount()
{
	return totalAmount;
}

void Order::buyItem(float price, int qty)
{
	totalAmount=totalAmount+(qty*price);
	
}

int Order::shippingCost()
{
	if (totalAmount>200)
{
	return 0;
}
	else
{
	return 20;
}
	}
