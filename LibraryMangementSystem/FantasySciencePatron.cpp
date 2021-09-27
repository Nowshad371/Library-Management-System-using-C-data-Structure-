#include "Home.h"
#include <iostream>

using namespace std;

 bool Home::FantasyP(string n){
            /*cout << "Available Books In Fantasy section " << endl;
            if(isempty()){
            cout << "No Patrons in the List\n";
            return;
            }

           else {
              cout << endl << "Patron information: \n";
              Patrons * temp = head;

              while (temp != NULL) {
                cout << "  Name :  " << temp ->name <<"  " << "ID: " << temp ->id <<"  "<< "  Email :   " <<temp->email
                <<"  "<<" phone no " <<temp->phoneNo <<"  " <<"   BookName: " <<temp->BookName <<"  "<<"   Number Of Copy: " <<temp->noCopy<<"  "<<
                "   Date of Birth: " << temp->dob <<endl;
                temp = temp -> next;
              }
              cout<<"\n";
            }*/

        Patrons * temp = head;

        while(temp !=NULL){

        if(temp->name ==n){
             cout << "  Name :  " << temp ->name <<"  " << "ID: " << temp ->id <<"  "<< "  Email :   " <<temp->email
            <<"  "<<" phone no " <<temp->phoneNo <<"  " <<"   Date of Birth: " << temp->dob <<endl;
            return true;
        }
        else{

            temp = temp->next;

        }

    }


}



           /* cout << "Enter Book Name from Above: ";
            cin >> Nb;
            cout << "Number of copy you want: " ;
            cin >>copyn;
            current ->BookName = Nb;
            current ->noCopy = copyn;*/


