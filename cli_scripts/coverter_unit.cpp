// Importing libraries
#include <iostream>
#include <cstdlib>
#include <math.h>
#include<string.h>
#include <limits> 

using namespace std;

void converter(float &unit){
	
	// declare variables and arrays 
	int i, j ;
	
	long double multiples[27];
	
	long double  submultiples[27];
	
	
	while(unit <= 0 || cin.fail() ){
		
		
		cin.clear(); // reset error 
		  cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clean  buffer
		  
		printf("Insert a valid value for unit \n\n");
		
		cin >> unit;
		
	}
	
	printf("Calculation of multiples \n");
	
	for(i=0;i<=27;i=i+3){
		
		 multiples[i]=(unit*pow(10,i));
		
		cout<<"\n";
		
		cout<< multiples[i];
		
	}
	
	printf("\nCalculation of submultiples \n");
	
	for(j=0;j<=27;j=j+3){
		
		 submultiples[j]= (unit*pow(10,-j));
		
		cout<<"\n";
		
		cout<<submultiples[j];
	}
	
	
}

int main(int argc, char** argv) {
	
	// CLI setup

	system("cls");
	system("title engeerer converter ");
	system("color 06");
	system("python -m pyfiglet engeerig converter ");
	 
	 
	// Declaration section
	 
	int choice, c ;
	float unit ;
	 
	string option[15] = {
		
		"Options: 0) Meter", "1) Kilogram", "2) Second", "3) Ampere", "4) Volt",
		"5) Mole", "6) Candela", "7) Hertz", "8) Ohm", "9) Watt",
		"10) Coulomb", "11) Pascal", "12) Joule", "13) Farad", "14) Henry"
	};
	 
	// Display menu options using a string array 
	for(c = 0; c <= 14; c = c + 1) {
		cout << option[c];
		cout << "\n\n";
	}
	 
	printf("What do you want to convert? \n\n");
	 
	cin >> choice;
	 
	// Validate  input
	
	while(choice < 0 || cin.fail()){
		
		 cin.clear(); // reset error 
		  cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clean  buffer
		  
		printf("Invalid option. Please enter a valid number.\n\n");
		
		cin >> choice;
	}
	 
	switch (choice) {
	case 0:
		printf("You are welcome in meter option \n ");
		printf("insert the unit value \n");
		cin >> unit;
		converter(unit);
		break;
		
	case 1:
		printf("You are welcome in kilogram option \n ");
		printf("insert the unit value \n");
		cin >> unit;
		converter(unit);
		break;

	case 2:
		printf("You are welcome in second option \n ");
		printf("insert the unit value \n");
		cin >> unit;
		converter(unit);
		break;

	case 3:
		printf("You are welcome in ampere option \n ");
		printf("insert the unit value \n");
		cin >> unit;
		converter(unit);
		break;

	case 4:
		printf("You are welcome in volt option \n ");
		printf("insert the unit value \n");
		cin >> unit;
		converter(unit);
		break;

	case 5:
		printf("You are welcome in mole option \n ");
		printf("insert the unit value \n");
		cin >> unit;
		converter(unit);
		break;

	case 6:
		printf("You are welcome in candela option \n ");
		printf("insert the unit value \n");
		cin >> unit;
		converter(unit);
		break;

	case 7:
		printf("You are welcome in hertz option \n ");
		printf("insert the unit value \n");
		cin >> unit;
		converter(unit);
		break;

	case 8:
		printf("You are welcome in ohm option \n ");
		printf("insert the unit value \n");
		cin >> unit;
		converter(unit);
		break;

	case 9:
		printf("You are welcome in watt option \n ");
		printf("insert the unit value \n");
		cin >> unit;
		converter(unit);
		break;

	case 10:
		printf("You are welcome in coulomb option \n ");
		printf("insert the unit value \n");
		cin >> unit;
		converter(unit);
		break;

	case 11:
		printf("You are welcome in pascal option \n ");
		printf("insert the unit value \n");
		cin >> unit;
		converter(unit);
		break;

	case 12:
		printf("You are welcome in joule option \n ");
		printf("insert the unit value \n");
		cin >> unit;
		converter(unit);
		break;

	case 13:
		printf("You are welcome in farad option \n ");
		printf("insert the unit value \n");
		cin >> unit;
		converter(unit);
		break;

	case 14:
		printf("You are welcome in henry option \n ");
		printf("insert the unit value \n");
		cin >> unit;
		converter(unit);
		break;

	default:
		printf("option is not valid \n\n ");
	}
	 
	system("pause >nul"); 
	return 0;
}

