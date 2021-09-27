#include "Home.h"
#include <iostream>
using namespace std;

void Home::Friction(){
            Home h;
            cout << "Friction: " << endl;
            cout << "1.Fantasy: " << endl;
            cout << "2.Science: " << endl;
            cout << "3.Historical: " << endl;
            cout << "4.Realistic : " << endl;
            cout << "5.Fan: " << endl;
            int option;
            cin>>option;
            cout << "Choose your Option: " << endl;

            if(option == 1)
              cout << "2.Friction: " << endl;

            else if(option == 2)
                cout << "2.Science: " << endl;
            else if(option == 3)
                cout << "3.Historical:  " << endl;
            else if(option == 4)
                cout << "4.Realistic : " << endl;
            else if(option == 5)
                cout << "5.Fan: " << endl;
            else
                cout << "Wrong Input: " << endl;

           /* cout << "Enter Book Name from Above: ";
            cin >> Nb;
            cout << "Number of copy you want: " ;
            cin >>copyn;
            current ->BookName = Nb;
            current ->noCopy = copyn;*/

}
