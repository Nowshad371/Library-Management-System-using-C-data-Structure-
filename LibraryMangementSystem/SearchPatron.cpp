#include "Home.h"
#include <iostream>
using namespace std;

//getting size of the active books borrowed patron size
int Home::getCountp(PatronsB* headb)
{
    // Base Case
    if (headb == NULL) {
        return 0;
    }
    // Count this node plus the rest of the list
    else {
        return 1 + getCountp(headb->nextp);
    }
}

//function to search patron with active book by id
bool Home::searchById(string n){
    Home h;
    PatronsB * temp = headb;

    for(int i=0;i<h.getCountp(headb);i++){

        if(temp->id ==n){
             cout << "\t\tName :  " << temp ->name <<"  " << "\tID:  " << temp ->id <<"  "
             << "\tEmail :   " <<temp->email
            <<"  "<<" \tphone no :  " <<temp->phoneNo <<"  " <<"Bookname  "
            <<temp->BookName<<" "<<"dateOFreturn:  "<<temp->day1<<"/"<<temp->month1<<"/"<<temp->Year<< endl;

        }
        else{

            temp = temp->nextp;

        }

    }

}


//function to search patron personal information
bool Home::searchByPatronId(string n){
    Home h;
    Patrons * temp = head;

    while(temp !=NULL){

        if(temp->id ==n){
             cout << "\t\tName :  " << temp ->name <<"  " << "\tID:  " << temp ->id <<"  "<< "\tEmail :   " <<temp->email
            <<"  "<<" \tphone no :  "<<temp->phoneNo<<"\tDateOfBirth:  "<<temp->dob<< endl;
            return true;

        }
        else{

            temp = temp->next;

        }

    }

}

//function to search personal information of patron by name
bool Home::searchByPatronName(string name){
    Home h;
    Patrons * temp = head;

    while(temp !=NULL){

        if(temp->name ==name){
             cout << "\t\tName :  " << temp ->name <<"  " << "\tID:  " << temp ->id <<"  "<< "\tEmail :   " <<temp->email
            <<"  "<<" \tphone no :  "<<temp->phoneNo <<"\tDateOfBirth:  "<<temp->dob<< endl;
            return true;

        }
        else{

            temp = temp->next;

        }

    }

}


