// Importing libraries
#include <iostream>
#include <cstdlib>
#include <direct.h>

using namespace std;

int main(int argc, char** argv) {
    
    // Variable declarations
    int limit, count;
    char folder_name[1001];
    
    system("color 02");
    
    system("python -m pyfiglet folder creation ");
    
    cout << "\033[1;32m";  // ANSI escape sequence to set text color to bright green
    cout << "Enter the limit value for the folders to be created:\n";
    cout << "\033[0m";  // Reset the color to default
    
    cin >> limit;
    
    while (limit < 0) {
        cout << "\033[1;31m";  // ANSI escape sequence to set text color to bright red
        cout << "Please re-enter the limit with a valid value:\n";
      
        cin >> limit;
    }

    for (count = 0; count < limit; count++) {
        sprintf(folder_name, "Folder_%d", count + 1);

        int result = _mkdir(folder_name);

        cout << "\n \n \n";

        if (result == 0) {
            cout << "\033[1;32m";  // Green color for success
            cout << "Folder successfully created: " << folder_name << "\n\n";
        } else {
            cout << "\033[1;31m";  // Red color for error
            cout << "Error during the creation of folder " << folder_name << ".\n\n";
        }

        cout << "\033[0m";  // Reset the color to default
    }

    cout << "\n \n \n";

    system("pause>nul");

    return 0;
}
