#ifndef LIBR_H
#define LIBR_H

#include <iostream>
#include <windows.h>
#include <string>
#include <cstdlib>
#include <conio.h>

using namespace std;

class Car {
private:
	string name, color;
    int number;

public:

    Car(string valname, string valcolor, int valnum);
	Car();
	Car(const Car &rrr3);

	void print ()const;

	void SetName(string valname);
	string GetName()const;

	void SetColor(string valcolor);
	string GetColor()const;

	bool SetNumber(int valnum);
	int GetNumber()const;

                void operator++();
                void operator--();

                bool operator==(const Car &Car)const;
                bool operator!=(const Car &Car)const;

                bool operator>=(const Car &Car)const;
                bool operator<=(const Car &Car)const;

                bool operator>(const Car &Car)const;
                bool operator<(const Car &Car)const;

                friend ostream& operator<< (ostream &out, const Car &Car);
                friend istream& operator>> (istream &in,Car &Car);
};

#endif
