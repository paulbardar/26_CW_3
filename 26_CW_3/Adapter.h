#pragma once
#include <string>
#include <iostream>
using namespace std;

class Adapter
{
	string ID;
	string interfaceInfo;
	float price;
	double speed;

	static int count;

public:
	Adapter(string interfaceInfo, float price, double speed);

	void shoInfo()const;
};

