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
int c=1;
string abc = "0";
int D=1
GPIOClass* gpio4 = new GPIOClass("4");
GPIOClass* gpio17 = new GPIOClass("17");
GPIOClass* gpio27 = new GPIOClass("27");
GPIOClass* gpio14 = new GPIOClass("14");
GPIOClass* gpio15 = new GPIOClass("15");
GPIOClass* gpio18 = new GPIOClass("18");

gpio4->export_gpio();
gpio17->export_gpio();
gpio27->export_gpio();
gpio14->export_gpio();
gpio15->export_gpio();
gpio18->export_gpio();

cout << " GPIO pins exported" << endl;


gpio4->setdir_gpio("in");
gpio17->setdir_gpio("in");
gpio27->setdir_gpio("in");
gpio14->setdir_gpio("out");
gpio15->setdir_gpio("out");
gpio18->setdir_gpio("out");

cout << " Set GPIO pin directions" << endl;

gpio14->setval_gpio("1");
gpio15->setval_gpio("1");
gpio18->setval_gpio("1");

while(D)
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
	cout << choice;
	cin << abc;
	if (abc == end) {
			int D = 0; 
}
gpio4->export_gpio();
gpio17->export_gpio();
gpio27->export_gpio();
gpio14->export_gpio();
gpio15->export_gpio();
gpio18->export_gpio();
}
