#pragma once
#include <string>
#include "IFuelConsumer.h"

using namespace std;

class Car :public IFuelConsumer
{
private:
	string firm, model;
	int number, year, mileage;
	double price;
	int distance;

	static Car* Sort(Car*);

public:
	static int count;
	Car();
	Car(string, string, int, int, int, int);
	
	double consume(double distance_passed);

	void setFirm(const string);
	void setModel(const string);
	void setNumber(const int);
	void setPrice(const double);
	void setYear(const int);
	void setMileage(const int);

	string getFirm();
	string getModel();
	int getNumber();
	double getPrice();
	int getYear();
	int getMileage();

	virtual void Imitation();

	static void printSortInfo(Car*);

	void serialize(const string& filename) const;
	void serialize() const;

	void deserialize(const string& filename);
	void deserialize();

	virtual void printInfo();
	

};



