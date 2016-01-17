#include <fstream>
#include <string>
#include <iostream>
#include <sstream>
#include "GPIOClass.h"
#include <string>
#include <unistd.h>

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

for (Q; Q<11; Q++)
{

    
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
	
	case 3:
	
	cout << "Christian Huygens proposed the _____ theory of light, where light travels out from light sources." <<"\n";
	cout << "A. wave." << "\n";
	cout << "B. particle." << "\n";
	cout << "C. photoelectric." << "\n";
	correctchoice="A";
	break;
	
	case 4:
	
	cout << "The following are electromagnetic waves except." <<"\n";
	cout << "A. infrared waves." << "\n";
	cout << "B. sound waves." << "\n";
	cout << "C. radio waves." << "\n";
	correctchoice="C";
	break;
	
	case 5:	
	cout << "The study of the measurement of light is called?" <<"\n";
	cout << "A. illumetry ." << "\n";
	cout << "B. photometry." << "\n";
	cout << "C. photography." << "\n";
	correctchoice="B";
	break;
	
	
	case 6:
	cout << "Which electromagnetic waves have the shortest wavelengths and highest frequencies?" << "\n";
	cout << "A. X rays" << "\n";
	cout << "B. Gamma rays." << "\n";
	cout << "C. Ultraviolet rays." << "\n";
	correctchoice="B";
	break;
	
<<<<<<< HEAD
	case 7:
	cout << " Electromagnetic spectrum comprises of?" << "\n";
	cout << "A. Sound waves" << \n";
=======
	
	case 7:
	cout << " Electromagnetic spectrum comprises of?" << "\n";
	cout << "A. Sound waves" << "/n";
>>>>>>> origin/master
	cout << "B. Longitudinal waves." << "\n";
	cout << "C. Transverse waves." << "\n";
	correctchoice="C";
	break;
	
	
	case 8:
	cout << " Which of the following statements is true?" << "\n";
<<<<<<< HEAD
	cout << "A.Gamma rays have shorter wavelengths than microwaves." << "\n";
=======
	cout << "A.Gamma rays have shorter wavelengths than microwaves." << "/n";
>>>>>>> origin/master
	cout << "B.Radio waves have shorter wavelengths than X-rays." << "\n";
	cout << "C. Gamma rays have longer wavelengths than UV rays." << "\n";
	correctchoice="A";
	break;
	
	
	case 9:
	cout << " Which of the following is NOT in the visible light spectrum?" << "\n";
<<<<<<< HEAD
	cout << "A.Red light" << "\n";
=======
	cout << "A.Red light" << "/n";
>>>>>>> origin/master
	cout << "B. Ultraviolet light" << "\n";
	cout << "C.Violet light" << "\n";
	correctchoice="B";
	break;
	
	
	case 10:
	cout << " Which of the following best defines the science of separating color wavelengths?" << "\n";
<<<<<<< HEAD
	cout << "A.Spectroscopy" << "\n";
=======
	cout << "A.Spectroscopy" << "/n";
>>>>>>> origin/master
	cout << "B. photo-chemistry" << "\n";
	cout << "C.spectrophotometry" << "\n";
	correctchoice="A";
	break;
<<<<<<< HEAD
=======
	
	
	
	
>>>>>>> origin/master
}
	gpio4->getval_gpio(A);
    gpio17->getval_gpio(B);
    gpio27->getval_gpio(C);
    string choice= "0";
sleep(10);
    
    if (A == "1") 
	{
	sleep(1);
	gpio4->getval_gpio(A);
	if (A == "1") {
		choice="A" ;
		}
	}
    if (B == "1") 
	{
    sleep(1);
	gpio17->getval_gpio(B);
	if (B == "1") {
		choice="B" ;
		}
	}
    if (C == "1") 
	{
    usleep(1);
	gpio27->getval_gpio(C);
	if (C == "1") {
		choice="C" ;
		}
	}
	
    if (correctchoice == choice) {
	cout << "Correct Answer" <<"\n";
	}
	else cout << "Wrong answer," << correctchoice << "\n"; 
}

}	





