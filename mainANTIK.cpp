#include "Item.h"
#include "Customer.h"
#include "Order.h"
#include <cstring>
#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>
#define N 100
using namespace std;


//FUNCTIONS//
int fileToArr(ifstream &fin, Item p[]);
int itemMenu(Item p[], int n);
int searchItem(Item p[], int n, int searchCode);
//END OF FUNCTIONS//



//------------------------------MAIN----------------------------//
int main(int argc, char** argv)
{
	Item itemArr[N];
	Order Order1;
	ifstream infile("ITEMS20003.txt");
	ofstream outfile("ORDERS20003.txt");
	if(!infile)
{
	cout << "Den vrethike arxeio eisodou!" << endl;
}
else
{
	int ret1=fileToArr(infile, itemArr);
	int qt;
	Order1.readData();
	outfile<<"Customer No    : "<< Order1.getCustNo()<<endl
	<<"Customer Name  : "<< Order1.getCustName()<<endl
	<<"Customer Email : "<< Order1.getCustEmail()<<endl
	<<"Order No   : "<< Order1.getOrderNo()<<endl
	<<"Order Date : "<< Order1.getOrderDate()<<endl<<endl;
	int ret2=itemMenu(itemArr,ret1);
	int ret3=searchItem(itemArr,ret1,ret2);
	outfile<<"Kwdikos  Perigrafi           Posotita     Timi      Axia"<<endl;
	outfile<<"=======  ===============     ========    ======    ======"<<endl;
	while (ret2!=0)
{
	if(ret3==-1)
{

	cout<<endl<<"...O kodikos den yparxei sti lista!"<<endl;
	ret2=itemMenu(itemArr,ret1);
	ret3=searchItem(itemArr,ret1,ret2);
}
	else
{
	cout<<"Dose posotita : ";
	cin>> qt;
	cout<<endl;
	Order1.buyItem(itemArr[ret3].getItemPrice(),qt);
	outfile<<"  "<<itemArr[ret3].getItemNo()<< "    "<<itemArr[ret3].getItemDesc()<<"               "<<qt<<"         "<<itemArr[ret3].getItemPrice()<<"    "<<itemArr[ret3].getItemPrice()*
	
	qt<<endl;
	cout<< "...H agora egine, synexiste....";
	ret2=itemMenu(itemArr,ret1);
	ret3=searchItem(itemArr,ret1,ret2);
}
}
	cout<<endl<<"...Telos agorwn!";
	outfile<<endl<<"                      Synoliko poso agorwn : "<<Order1.getTotalAmount()<<endl;
}	outfile<<"                                Metaforika : "<<Order1.shippingCost();
	
	
	return 0;
}
//-------------------------ENDOFMAIN----------------------------//




int fileToArr(ifstream &fin, Item p[])
{
	int itemNum, i = 0;
	float itmPrice;
	char itemDes[21];
	while (fin >> itemNum >> itemDes >> itmPrice)
{
	p[i++].setData(itemNum, itemDes, itmPrice);
}
	return i;
}



int itemMenu(Item p[], int n)
{
	int i=0,j=0;
	cout<<endl<<"LISTA DIATHESIMWN PROIONTWN"<< endl;
	cout<< "======================="<< endl;
	while (i<n)
{
	cout <<p[i++].getItemNo()<< ",  "<<p[i].getItemDesc()<<",  "<<p[i].getItemPrice()<<endl;
}
	cout<< endl<<"Dwse kwdiko proiontos gia agora (0 gia telos!):  ";
	cin>> j;
	return j;
}



int searchItem(Item p[], int n, int searchCode)
{
	int i=0;
	int f;
	while(i<n)
{
	if (p[i].getItemNo() == searchCode)
{
	return i;
}
	i++;
}
	return -1;
}
