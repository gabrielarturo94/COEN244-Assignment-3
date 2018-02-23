/*
Programmer:NGJEAN
Program:
Date:
*/

#ifndef _CAR_H_
#define _CAR_H_

#include<iostream>
#include <string>
using namespace std;

class Car
{
	public:
		Car();
		Car(int,string);
		
		void setStatus(bool);
		void print() const;
		
		bool getStatus();
		
		
		virtual ~Car();
		
	private:
		int num;
		string type;
		bool status; // true = "available" & false = "unavailable"
};
#endif
