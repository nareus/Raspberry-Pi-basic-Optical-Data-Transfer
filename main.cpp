#include <fstream>
#include <string>
#include <iostream>
#include <sstream>
#include "GPIOClass.h"
#include <string>

using namespace::std;

int main() {

string A="0";
string B="0";
string C="0";
int x=0;
int y=0;
string correctchoice="A";
int Q=1;
GPIOClass* gpio4 = new GPIOClass("4");
GPIOClass* gpio17 = new GPIOClass("17");
GPIOClass* gpio27 = new GPIOClass("27");

gpio4->export_gpio();
gpio17->export_gpio();
gpio27->export_gpio();

cout << " GPIO pins exported" << endl;
for (Q; Q<11; Q++)
{
gpio4->setdir_gpio("in");
gpio17->setdir_gpio("in");
gpio27->setdir_gpio("in");
cout << " Set GPIO pin directions" << endl;


    
switch (Q)
{
	case 1:
	
	cout << "A wave that consists of two perpendicular transverse waves with one component of the wave being a vibrating electric field and the other being a corresponding magnetic field is called a?" <<"\n";
	cout << "A. induction wave." << "\n";
	cout << "B. sound wave." << "\n";
	cout << "C. electromagnetic wave." << "\n";
	correctchoice="C";
	break;
	
	case 2:
	
	cout << "What type of waves are used to transmit cellular telephone messages?" <<"\n";
	cout << "A. Gamma Rays." << "\n";
	cout << "B. Microwaves." << "\n";
	cout << "C. Radio waves." << "\n";
	correctchoice="A";
	break;
	
}
gpio4->getval_gpio(A);
    gpio17->getval_gpio(B);
    gpio27->getval_gpio(C);
    string choice= "0";
    if (A == "1") 
	{
    choice="A" ;
	}
    else if (B == "1") 
	{
    choice="B";
	}
    else if (C == "1") 
	{
    choice="C";
	}
    if (choice == correctchoice) {
		cout << "correct choice" <<"\n";
	}
	else cout << "wrong choice" << "\n";

}	
}



