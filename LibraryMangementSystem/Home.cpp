#include "Home.h"
#include <iostream>
#include <sstream>

using namespace std;
//Building function to see if the book name and author
// already exit in the list or not.


Books * Home::BookDetailsExists(string i,string n) {

    Books * temp = NULL;
    Books * ptr = head1;
    while (ptr != NULL) {
      if (ptr ->Author == n && ptr->BookName == i) {
        temp = ptr;
      }
      ptr = ptr ->nextb;

    }
    return temp;

  }


//Building function to see if the book name
// already exit in the list or not.
Books * Home::BookExists(string i) {
    Books * temp = NULL;
    Books * ptr = head1;
    while (ptr != NULL) {
      if (ptr ->BookName == i) {
        temp = ptr;
      }
      ptr = ptr -> nextb;

    }
    return temp;

  }

//Building function to see if the author
// already exit in the list or not.
  Books * Home::AuthorExists(string i) {
    Books * temp = NULL;
    Books * ptr = head1;
    while (ptr != NULL) {
      if (ptr ->Author == i) {
        temp = ptr;
      }
      ptr = ptr -> nextb;

    }
    return temp;

  }

//Building function to see if the patron ID
// already exit in the list or not int the stored book.
PatronsB * Home::patronExists(string i) {
    PatronsB * temp = NULL;
    PatronsB * ptr = headb;
    while (ptr != NULL) {
      if (ptr ->id == i) {
        temp = ptr;
      }
      ptr = ptr -> nextp;

    }
    return temp;

  }
//Building function to see if the patron ID
// already exit in the list or not.

Patrons * Home::nodeExists(string i) {
    Patrons * temp = NULL;

    Patrons * ptr = head;
    while (ptr != NULL) {
      if (ptr -> id == i) {
        temp = ptr;
      }
      ptr = ptr -> next;

    }
    return temp;

  }
//Building function to see if the patron ID and name
// already exit in the list or not.
Patrons * Home::nameExists(string i,string n) {
    Patrons * temp = NULL;

    Patrons * ptr = head;
    while (ptr != NULL) {
      if (ptr ->name == n && ptr->id == i) {
        temp = ptr;
      }
      ptr = ptr -> next;

    }
    return temp;

  }
//Building function to see if the patron name
// already exit in the list or not.
Patrons * Home::PnameExists(string n) {
    Patrons * temp = NULL;

    Patrons * ptr = head;
    while (ptr != NULL) {
      if (ptr ->name == n) {
        temp = ptr;
      }
      ptr = ptr -> next;

    }
    return temp;

  }
//Building function to see for empty value that is head = null

bool Home::isempty(){

    return head == NULL;

}
//Building function to get the size

int Home::length(){

    return size;

}

//Building function for the patron registration
void Home::RegisterPatron(){
      Patrons * n1 = new Patrons();
      //creating automatic tp number that is id
      static int id1 = 1;
      string str;
      stringstream ss;
      str = "tp057";
      ss << id1;
      //ss >> str;
      str += ss.str(); // adding both string and integer number
      string name1,email1,phone1,dob1;
      cout<<"\n\n\t\tEnter you information\n";
      //cout << "\t\tEnter id: " ;
      //cin >> id1;
      cout << "\t\tEnter Name: " ;
      cin >> name1;
      cout << "\t\tEnter Email: " ;
      cin >> email1;

      cout << "\t\tEnter phone Number: " ;
      cin >> phone1;
      cout << "\t\tEnter Date of Birth: " ;
      cin >> dob1;
      n1 -> id = str;
      n1 -> name = name1;
      n1 -> email  = email1;
      n1 -> phoneNo = phone1;
      n1 -> dob = dob1;


     if(PnameExists(n1->name) != NULL){
            cout << "\n\t\tGiven username: " << n1 -> name << "  already exit" << endl;
            cout << "\n\t\tChange User name" << endl;
      }

     else{
        if(isempty()){
        head = n1;
        }

        else{

        tail->next = n1;

        }
        n1->previous = tail;
        tail = n1;
        size++;
        cout<<"\n\t\tYour automatic password is "<<str<<endl;
        cout<<"\n\t\tYou can change it from update your personal information option 4."<<endl;
        cout<<"\n\t\tThanks for registration"<<endl;

  }
  id1++;
}
//fuction to display all patron personal information
void Home::DisplayPatron() {
    if(tail == NULL){
        cout << "\n\t\tNo Patrons in the List\n";
        return;
    }

   else {
      cout << endl << "\n\t\tPatron information: \n";
      Patrons * temp = tail;
      cout<<"\n\n\t\t\tName  "<<"\tID   "<<"\tEmail   \t"<<"\tPhone No  \t"<<"Date of Birth"<<endl;
      while (temp != NULL) {
        cout  <<"\t\t\t"<<temp ->name <<"\t" << temp ->id <<"\t"<<temp->email
        <<"\t"<<temp->phoneNo <<"\t"<<temp->dob<<endl;
        temp = temp -> previous;
      }
      cout<<"\n";
    }

  }

//function to search active  books borrowed by individual by their name

bool Home::searchDetails(string n){

    Home h;
    PatronsB * temp = headb;

    for(int i=0;i<h.getCountp(headb);i++){

        if(temp->name ==n){
             cout << "\t\tName :  " << temp ->name <<"  " << "\tID:  " << temp ->id <<"  "<< "\tEmail :   " <<temp->email
            <<"  "<<" \tphone no :  " <<temp->phoneNo <<"  " <<"Bookname  "<<temp->BookName<<" "<<"dateOFreturn:  "<<temp->day1<<"/"<<temp->month1<<"/"<<temp->Year<< endl;

        }
        else{

            temp = temp->nextp;

        }

    }


}
//fuction to display all patron information who borrowed books
void Home::DisplayAllActive() {
    if(tailb == NULL){
        cout << "\n\t\tNo Patrons in the List\n";
        return;
    }

   else {
      cout << endl << "\n\t\tPatron information: \n";
      PatronsB * temp = tailb;
      cout<<"\n\n\t\t\tName  "<<"\tID   "<<"\tEmail   \t"<<"\tPhone No  \t"<<"BookName  \t"<<"Number Of Copy"<<"\tTakenDate"<<"\tEndDate\t"<<endl;
      while (temp != NULL) {
        cout  <<"\t\t\t"<<temp ->name <<"\t" << temp ->id <<"\t"<<temp->email
        <<"\t"<<temp->phoneNo <<"\t\t" <<temp->BookName <<"\t\t"<<temp->noCopy<<"    "<<temp->Month<<"/"<<temp->day<<"/"<<temp->Year<<
        "\t\t"<<temp->month1<<"/"<<temp->day1<<"/"<<temp->Year<<endl;
        temp = temp -> previousp;
      }
      cout<<"\n";
    }

  }


