#include "file.h"
#include <string>

void Car::SetName(string valname) {
    name = valname;
}
void Car::SetColor(string valcolor) {
    color = valcolor;
}
bool Car::SetNumber(int valnum) {
    if (valnum < 0)
    {
       return false;
    }
    else{number=valnum;}
}

Car::Car(string valname, string valcolor, int valnum) {

    if (!SetNumber(valnum))
    {
        number = 0;

    }
    name = valname;
	color = valcolor;
}

Car::Car() {
	name = "ferari";
	color = "red";
	number = 777;
}

Car::Car(const Car &rrr3) {
	name = rrr3.name;
	color = rrr3.color;
	number = rrr3.number;
}


void Car::print () const{
	cout << name << "/" <<color<< "/" << number << "\n\n";
}

string Car::GetName()const { return name; }
string Car::GetColor() const{ return color; }
int Car::GetNumber() const{ return number; }

                            void Car::operator++(){
                            number ++;}
                            void Car::operator--(){
                            number --;}

                            bool Car::operator==(const Car &Car)const{
                            return number == Car.number && name == Car.name && color == Car.color;}
                            bool Car::operator!=(const Car &Car)const{
                            return !(number == Car.number && name == Car.name && color == Car.color);}

                            bool Car::operator>=(const Car &Car)const{
                            return (number >= Car.number);}
                            bool Car::operator<=(const Car &Car)const{
                            return (number <= Car.number);}

                            bool Car::operator>(const Car &Car)const{
                            return (number > Car.number);}
                            bool Car::operator<(const Car &Car)const{
                            return (number < Car.number);}

                            ostream& operator<< (ostream &out, const Car &Car){
                            out  << Car.name << "/" << Car.color<<"/"<< Car.number;

                            return out;}
                            istream& operator>> (istream &in, Car &Car){
                            in >> Car.name;
                            in >> Car.color;
                            in >> Car.number;
                            return  in;}
