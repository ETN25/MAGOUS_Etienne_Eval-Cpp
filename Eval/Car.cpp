#include "Car.h"
#include <iostream>

using namespace std;

string Car::GetBrand()
{
	return mBrand;
}

string Car::GetModel()
{
	return mModel;
}

Car::Car()
{
	mBrand = "...";
	mModel = "...";
	mLicense = "...";
	mYear = 0;
	mMileage = 0;
	mCost = 0;
}

Car::Car(string brand, string model, CarColor color, string license, int year, int mileage, int cost)
{
	mBrand = brand;
	mModel = model;
	mLicense = license;
	mYear = year;
	mMileage = mileage;
	mCost = cost;
	mColor = color;
}

Car::~Car()
{
	
}

void Car::DisplaySumUp()
{
	cout << "the car " << mBrand << " " << mModel << " was created" << endl;
	cout << "it's a " << "[Color]" << " car with the liscence plate " << mLicense << "\n" << endl;

	//char *intStr = itoa(mMileage);
	//string PlaceHolder = string(intStr);
	// //char *intStr = itoa(mCost);
	//string PlaceHolder2 = string(intStr);
	//cout << "wit a mileage of " << PlaceHolder << "km. it has a value of " << PlaceHolder2 << "€" << endl;
}

void Car::PaintCar(CarColor color)
{
	mColor = color;
	cout << "the car have been paint into " << "[Color]";
}

