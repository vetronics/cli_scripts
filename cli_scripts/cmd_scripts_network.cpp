// import libraries 
#include <iostream>
#include <cstdlib>
#include<string>

using namespace std;

int main(int argc, char** argv) {
	
	
 //  it is setting  up window of cmd 
 
    system("title cmd scripts ");
   system("cls ");
   system("color 03");
   
   
   	system(" python -m  pyfiglet cmd scipts ");
   	
   
      /* declaration section about variables of this program by to automate cmd commands about 
	  networks in c + 
    */
    int vm, i,choice,c;
    
    string options[5]={"option 0 : wipe out temp file "," option 1 : network interface card parameters   ","option 2 command ping  "," option  3 : statistics active connetions "," option : 4 systeminfo"};
    
    
printf(" shoud you insert what do you wanna do  ?  \n\n");
    
    for(c=0;c<5;c=c+1){
    	
    	cout<<"\n";
    	
    	cout<< options[c];
    	cout<<"\n";
	}
	
    while(choice<0){
    	
    	cin>> choice;
	}
	
  
  cin>> choice ;

switch(choice){
	case 0 :

printf("i wipe out temp file \n\n");
 system("DEL /S /Q \"%TMP%\\*.*\"");
    system("DEL /S /Q \"%TEMP%\\*.*\"");
    system("DEL /S /Q \"%WINDIR%\\Temp\\*.*\"");
    system("DEL /S /Q \"%USERPROFILE%\\Local Settings\\Temp\\*.*\"");
    system("DEL /S /Q \"%LOCALAPPDATA%\\Temp\\*.*\"");

break;

 
 case 1:
 	
 printf("i am running network interface card parameters  \n\n");
 system("ipconfig /all");
 break ;
 
 case 2 :
 	printf("you  should  insert number of range command ping \n\n");
 	
 	
 	
 	cin>> vm;
 	
       	// set up the for loop until max range value 
       	
        for (i = 1; i <= vm; i++) {
        	
        	system("ping www.google.com");
            
		}
			     
        break;
        
        case 3 :
        	
        printf("statistics active connetions\n\n");
		
		system("netstat -n");
		
		break;
		
		case 4 :
		
		printf("running info on system");
		
		system("systeminfo");
		
		break;
		
		default:
			
			printf("error choice does not valid \n");
        	
 
}

    system("pause>nul");
    return 0;
}

