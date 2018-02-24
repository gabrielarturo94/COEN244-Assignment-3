/*
Programmer:NGJEAN
Program:
Date:
*/

#ifndef _VIP_H_
#define _VIP_H_

#include"customer.h"
// I took out include iostream to put it in the base class. Once the others inherit, they'll be able to use the library

using namespace std;

class VIP : public Customer
{
	public:
		
		VIP();
		VIP(int, string, string, string);
		
		~VIP();
		
		virtual void print()const;
		
	private:
	string type;
	
	
	
};
#endif
