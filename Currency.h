#ifndef _CURRENCY_
#define _CURRENCY_
#include<string>
#include<iostream>
using namespace std;



class Currency
{
private:

	const string Wname = "Dollar";
	int Wnum;
	int Fnum;
	const string Fname = "Cents";

public:


	//Constructors

	Currency(int, int);
	Currency() { Wnum = 0; Fnum = 0; }


	//Mutators

	void setWnum(int w) { Wnum = w; };
	void setFnum(int fr) { Fnum = fr; };


	//Accesors

	string getWname() const
	{
		return Wname;
	}
	int getWnum() const
	{
		return Wnum;
	}
	int getFnum() const
	{
		return Fnum;
	}
	string getFname() const
	{
		return Fname;
	}

	//Overloaded Operator Funcs

	bool operator<(const Currency& other);
	bool operator>(const Currency& other);
	bool operator==(const Currency& other);
	Currency& operator=(const Currency &);

	//Friends

	friend ostream &operator << (ostream &, const Currency &);
};
#endif//#pragma once
