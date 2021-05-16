// Module4_Ch7_Ex21_WarstlerC.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double originalPrice = 0.0;
	double percentDiscount = 0.1;
	double discountPrice = 0.0;
	
	cout << "Please enter the original price: ";
	cin >> originalPrice;

	for (percentDiscount = 0.10; percentDiscount < 0.40; percentDiscount += 0.05)
	{
		discountPrice = originalPrice - (originalPrice * percentDiscount);
		cout << fixed << setprecision(2) << "The discounted amount is: " << percentDiscount << "%" << endl;
		cout << "The discounted price is: $" << discountPrice << endl;
		cout << endl;
	}

}