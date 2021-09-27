#include "Home.h"
#include <iostream>
using namespace std;
//function to see patron with active books
void Home::PatronWithActiveBook() {
    if(tailb == NULL){
        cout << "\n\t\tNo Patrons in the List\n";
        return;
    }

   else {
      cout << endl << "Patron information: \n";
      PatronsB * temp = tailb;


      while (temp !=NULL) {
        cout  <<"\n\tName: "<<temp ->name <<"  ID:  " << temp ->id <<"  Email:  "<<temp->email
        <<"  Phone No:   "<<temp->phoneNo <<"    BookName: " <<temp->BookName <<"  Copy:  "
        <<temp->noCopy<<"\tDOT:  "<<temp->Month<<"/"<<temp->day<<"/"<<temp->Year<<
        "    RD:"<<temp->month1<<"/"<<temp->day1<<"/"<<temp->Year<<endl;

        temp = temp -> previousp;
      }
      cout<<"\n";
    }

  }

//function to count the size of the patron last 10 book borrowed list
int Home::getCountl(last10active* first)
{
    // Base Case
    if (first == NULL) {
        return 0;
    }
    // Count this node plus the rest of the list
    else {
        return 1 + getCountl(first->nextl);
    }
}

//function to see last 10 books borrowed
  void Home::Lat10BorrowedBook() {
    if(last == NULL){
        cout << "\n\t\tNo Patrons in the List\n";
        return;
    }

   else {
      cout << endl << "Patron information: \n";
      last10active * temp = last;


      while (temp !=NULL) {
        cout  <<"\t\t\t"<<temp ->name <<"\t " <<temp->BookName <<endl;

        temp = temp ->previousl;
      }
      cout<<"\n";
    }


  }

