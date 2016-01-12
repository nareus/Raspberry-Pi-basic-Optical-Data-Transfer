#include <fstream>
#include <string>
#include <iostream>
#include <sstream>
#include "GPIOClass.h"
#include <string>

using namespace::std;

string Choice() {
	gpio4->getval_gpio(A);
    gpio17->getval_gpio(B);
    gpio27->getval_gpio(C);
    string choice= "0";
    
    if (A == "1") 
	{
	usleep(50);
	gpio4->getval_gpio(A);
	if (A == "1") {
		choice="A" ;
		}
	}
    if (B == "1") 
	{
    usleep(50);
	gpio17->getval_gpio(B);
	if (B == "1") {
		choice="B" ;
		}
	}
    if (C == "1") 
	{
    usleep(50);
	gpio27->getval_gpio(C);
	if (C == "1") {
		choice="C" ;
		}
	}
	return choice
}
void export() {
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

}
void unexport() {
	gpio4->unexport_gpio();
	gpio17->unexport_gpio();
	gpio27->unexport_gpio();
	gpio14->unexport_gpio();
	gpio15->unexport_gpio();
	gpio18->unexport_gpio();

	cout << "deallocating GPIO Objects" << endl;

	delete gpio4;
	gpio4 = 0;
	delete gpio17;
	gpio17 =0;
	delete gpio27;
	gpio27 =0;
	delete gpio14;
	gpio14 =0;
	delete gpio15;
	gpio15 =0;
	delete gpio18;
	gpio18 =0;
}

int main() {

string A="0";
string B="0";
string C="0";
int x=0;
int y=0;
int c=1;
string abc = "0";
int D=1
export();

while(D)
{
	cout << Choice();
	cin << abc;
	if (abc == end) {
			int D = 0; 
}
unexport();
}
