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


gpio4->setdir_gpio("in");
gpio17->setdir_gpio("in");
gpio27->setdir_gpio("in");
cout << " Set GPIO pin directions" << endl;

while(1)
{
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
switch (Q);
	cout << "A wave that consists of two perpendicular transverse waves with one component of the wave being a vibrating electric field and the other being a corresponding magnetic field is called a?" <<"\n";
	cout << "A. induction wave." << "\n";
	cout << "B. sound wave." << "\n";
	cout << "C. electromagnetic wave." << "\n";
	correctchoice="C";
	if (Q == correctchoice) {
		cout << "correct choice" <<"\n";
	}
	else cout << "wrong choice the answer was C." << "\n";
	Q = Q + 1;
}
}
