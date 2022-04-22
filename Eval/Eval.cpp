#include <iostream>
#include <vector>
#include "Color.h"
#include "Car.h"
#include "Person.h"

using namespace std;

int main() 
{
	Car lilypad = Car("LilyPad", "5", CarColor::Green, "KJ-GD5H-85", 2018, 5420, 5000);
	Person john = Person("John", "Doe", "03/11/1998", "Man", 100000, lilypad);
	john.DisplaySumUp();
	lilypad.DisplaySumUp();
}