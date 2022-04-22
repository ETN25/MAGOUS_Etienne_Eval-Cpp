#pragma once
#include <string>
#include <vector>
#include "Car.h"

using namespace std;

class Person 
{
private:
	string mFirstName;
	string mLastName;
	string mBirthday;
	int mMoney;
	Car mCar;
	string mGender;

public:
	Person();
	Person(string firstName, string lastName, string birthdayDate, string gender, int money, Car car);
	~Person();

	string GetFullName();
	string GetBirth();
	string GetGender();
	int GetMoney();
	//Car& getCar();

	void DisplaySumUp();

	void BuyCar(Car car, int cost);
	void SellCar(Car car, int price);
	

};