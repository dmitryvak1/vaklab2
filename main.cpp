#include "file.h"
#include <string>

using namespace std;

int main() {

    int a;
    int valnum;
    string valname;
    string valcolor;

    Car rrr(valname, valcolor, valnum);
	Car rrr2;
b:
	cout <<"\tNazhmite 1 chtoby vvesti car\n";
	cout <<"\tNazhmite 2 chtoby posmotret' car\n";
	cout <<"\tNAZHMITE 3 CHTOBY ZAPUSTIT' SECOND LABoratornuyu\n";
	cout <<"\tNazhmite 4 chtoby vyjti\n\n";

	cout <<"snachala nuzhno vvesti mashinu.tak kak 1 obyekt vvoditsya s klaviatury\n press *1* and then *3* to run second lab!"<< endl<<endl;

	cin >>a;
	switch (a)
	{
	    case 1://///////////////////////////////
	        {
    cout << "Vnesti imya mashiny: ";
    cin>>valname;
      rrr.SetName(valname);

    cout <<"vvedite cvet mashiny: ";
    cin>>valcolor;
      rrr.SetColor(valcolor);

    cout << "Vnesti nomer mashiny:";
    cin>>valnum;
       rrr.SetNumber(valnum);

    Car rrr3 = rrr;
    goto b;
	        }
        case 2://///////////////////////////////////
            {
    cout << "\n";
    cout << "Imya mashiny: " << rrr.GetName() << endl;
	cout << "cvet mashiny: " << rrr.GetColor() << endl;
	cout << "nomer mashiny: " << rrr.GetNumber() << endl << endl;

            cout<<"rrr"<<endl;
            rrr.print();

            cout<<"rrr2"<<endl;
            rrr2.print();

            Car rrr3 = rrr;
            cout<<"rrr3"<<endl;
            rrr3.print();

	    goto b;
            }

        default://////////////////////////////////////
            {goto b; }

 case 3:
	{
                            rrr.operator--();
                            cout << "--";
                            rrr.print();
                            rrr.operator++();
                            cout << "++";
                            rrr.print();


                            cout << "==";
                            bool t = rrr == rrr2;
                            cout << "bool-" <<t<< endl;
                            cout << "!=";
                            t = rrr != rrr2;
                            cout << "bool-" <<t<< endl;


                            cout << "<=number";
                            t = rrr <= rrr2;
                            cout << "bool-" <<t<< endl;
                            cout << ">=number";
                            t = rrr >= rrr2;
                            cout << "bool-" <<t<< endl;


                            cout << ">number";
                            t = rrr > rrr2;
                            cout << "bool-" <<t<< endl;
                            cout << "<number";
                            t = rrr < rrr2;
                            cout << "bool-" <<t<< endl;


                            cout << ">> vvedite novie dannie\n" << "name,color,number " << endl;
                            cin >> rrr;//peregruzka cin

                            cout << "<< rrr \n";
                            cout << rrr << endl<<endl;//peregruzka cout
                            goto b;
                        }
            case 4:////////////////////////////////////////
            {return 0;}
	}
}
