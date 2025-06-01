
// import libraries 
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(int argc, char** argv) {

    // it is setting up window of cmd 

    system("title cmd scripts ");
    system("cls ");
    system("color 03");

    system("python -m pyfiglet cmd scripts ");

    /* declaration section about variables of this program by to automate cmd commands about
    networks in c +
    */
    int vm, i, choice, c;

    string options[12] = {
        "option 1 : wipe out temp files",
        "option 2 : network interface card parameters",
        "option 3 : command ping",
        "option 4 : statistics active connections",
        "option 5 : systeminfo",
        "option 6 : open support page",
        "option 7 : speedtest",
        "option 8 : clear dns",
        "option 9 : integrity of system",
        "option 10 : check disk",
        "option 11  : exit by script"
    };

    printf("Should you insert what you want to do? \n\n");

    for (c = 0; c < 12; c++) {
        cout << "\n" << options[c] << "\n";
    }

    do {
        printf("Should you insert what you want to do? \n\n");

        cin >> choice;

        switch (choice) {

        case 1:
            printf("Wiping out temp files \n\n");
            system("cleanmgr");
            break;

        case 2:
            printf("Running network interface card parameters \n\n");
            system("ipconfig /all");
            break;

        case 3:
            printf("You should insert number of ping attempts \n\n");
            cin >> vm;

            for (i = 1; i <= vm; i++) {
                system("ping www.google.com");
            }
            break;

        case 4:
            printf("Statistics of active connections\n\n");
            system("netstat -n");
            break;

        case 5:
            printf("Running system information\n\n");
            system("systeminfo");
            break;

        case 6:
            printf("Opening support page\n\n");
            system("start https://support.microsoft.com");
            break;

        case 7:
            printf("Running speedtest\n\n");
            system("speedtest");
            break;

        case 8:
            printf("Cleaning DNS cache\n\n");
            system("ipconfig /flushdns");
            break;

        case 9:
            system("sfc /scannow");
            break;

        case 10:
            system("chkdsk");
            break;

        case 11:
            printf("exit by program \n\n");
            system("exit");
            break;

        default:
            printf("Error: choice is not valid.\n");
            break;
        }

    } while (choice >= 1 && choice <= 10);

    system("pause>nul");
    return 0;
}


