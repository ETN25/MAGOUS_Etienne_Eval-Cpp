#pragma once
#include <string>
#include <vector>
#include "Color.h"

using namespace std;

class Car 
{
private:
	string mBrand;
	string mModel;
	CarColor mColor;
	string mLicense;
	int mYear;
	int mMileage;
	int mCost;
public:
	string GetBrand();
	string GetModel();
	Car();
	Car(string brand, string model, CarColor color, string license, int year, int mileage, int cost);
	~Car();

	void DisplaySumUp();
	void PaintCar(CarColor color);
	
};