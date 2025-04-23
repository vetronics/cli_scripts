// Importing libraries
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <limits> 


using namespace std;

int main(int argc, char** argv) {
    
    // CLI setup
    system("cls");
    system("title decibel calculation \n\n");
    system("color 04");
    
    system("python -m pyfiglet calculation db tlc");
    
    // Variable declarations
    
    float vmax_notebook_column[21];
    int i;
    float x;
    double input_voltage ;
    
    // reading input voltage 
    
  printf("insert input voltage value\n\n ");
  
  	 cin >> input_voltage ;
  	 
  	 // to use loop to cheak input voltage value 
  	 
		 while (cin.fail() || input_voltage <= 0) {
    cin.clear(); // reset error 
   cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clean  buffer

    cin >> input_voltage;
    
	}
	
	  printf("Acquiring data from the notebook column \n\n");
	  
    for(i = 0; i <= 20; i = i + 1) {
    	
        cin >> vmax_notebook_column[i];
        cout << "\n";
    }
    
    for(i = 0; i <= 20; i = i + 1) {
    	
        x = 20 * log10(vmax_notebook_column[i] / input_voltage);
        cout << "\n";
        cout << x;
    }

    system("pause>nul");
    return 0;
}
