#include "Item.h"
#include <cstring>
#include <iostream>
#include <cmath>
using namespace std;

Item::Item()
{
	itemNo=0;
	strcpy(itemDesc, " ");
	itemPrice=0;
}

Item::Item(int itemNo1, char itemDesc1[], float itemPrice1)
{
	itemNo=itemNo1;
	strcpy(itemDesc,itemDesc1);
	itemPrice=itemPrice1;
}

void Item::readData()
{
	cout<<"Give Item number : ";
	cin>> itemNo;
	cout<<"Give Item Description : ";
	cin>> itemDesc;
	cout<<"Give Item Price : ";
	cin>> itemPrice;
	cout<<endl;
}

void Item::setData(int itemNo1, char itemDesc1[], float itemPrice1)
{
	itemNo=itemNo1;
	strcpy(itemDesc,itemDesc1);
	itemPrice=itemPrice1;
}

void Item::printData()
{
	cout<<"Item number : "<< itemNo<< endl;
	cout<<"Item Description : "<< itemDesc<< endl;
	cout<<"Item Price : "<< itemPrice<< endl;
}

int Item::getItemNo()
{
	return itemNo;
}

char* Item::getItemDesc()
{
	return itemDesc;
}

float Item::getItemPrice()
{
	return itemPrice;
}
