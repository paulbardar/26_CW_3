#include "Adapter.h"

Adapter::Adapter(string interfaceInfo, float price, double speed)
{
	this->interfaceInfo = interfaceInfo;
	this->price = price;
	this->speed = speed;

	ID = "WFID" + to_string(count / 100) + to_string(count / 10 % 10) + to_string(count % 10);
	count++;
}

void Adapter::showInfo() const
{
	cout << "ID: " << ID << endl;
	cout << "Interface: " << interfaceInfo << endl;
	cout << "Speed: " << speed << endl;
	cout << "Price: " << price << endl;

}
