#include "Person.h"
#include "Car.h"
#include <iostream>

using namespace std;

Person::Person(){
	mFirstName = "...";
	mLastName = "...";
	mBirthday = "../../....";
	mMoney = 1000;
	mGender = "...";
	mCar = Car();
}

Person::Person(string firstName, string lastName, string birthdayDate, string gender, int money, Car car) {
	mFirstName = firstName;
	mLastName = lastName;
	mBirthday = birthdayDate;
	mMoney = money;
	mGender = gender;
	mCar = car;
}

Person::~Person() {
	
}

string Person::GetFullName()
{
	string mFullname;
	mFullname = mFirstName + " " + mLastName;
	return mFullname;
}

string Person::GetBirth()
{
	return mBirthday;
}

string Person::GetGender()
{
	return mGender;
}

int Person::GetMoney()
{
	return mMoney;
}

void Person::DisplaySumUp()
{
	cout << "the person " << mFirstName << " was created" << endl;
	string mName = GetFullName();
	cout << mName << " was born the " << mBirthday << + " and is a " << mGender << endl;
	
	if (mCar.GetBrand() != "...")
	{
		string model = mCar.GetModel();
		string brand = mCar.GetBrand();
		cout << mFirstName << " has " << mMoney << "$ and a " << brand << " " << model << "\n" << endl;
	}
	else {
		cout << mFirstName << " has " << mMoney << "$ and no car\n" << endl;
	}
}

void Person::BuyCar(Car car, int cost)
{
	mCar = car;
	mMoney -= cost;
}

void Person::SellCar(Car car, int price)
{
	mMoney += price;
	//mCar empty
}

