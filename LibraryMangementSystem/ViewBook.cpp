#include "Home.h"
#include <iostream>

using namespace std;
//function to display all books
void Home::DisplayBook() {
    if(head1 == NULL){
        cout << "\n\t\tNo Books in the List\n";
        return;
    }

   else {
      cout << endl << "\n\t\tBooks information: \n";
      Books * temp = head1;
        //here time complexity is log(n)
      while (temp != NULL) {
        cout << "  Book Name :  " << temp ->BookName <<"  " << "Author: " << temp ->Author <<"  "<< "  Category :   " <<temp->category
        <<"  "<<" Genre " <<temp->Genre <<"  " <<"   Available Copy: " <<temp->Availability<<"  \n"<<endl;
        temp = temp -> nextb;
      }
      cout<<"\n";
    }

  }


  void Home::DisplayBookAvailable() {
    Home h;
    Books * temp = head1;
    for(int i=0;i<h.getCount(head1);i++){

        if(temp->Availability >=1){
             cout << "\n\t\tBookName :  \t" << temp ->BookName <<"      "<<"YES"<<endl;


        }
        else{
            cout << "\n\t\tBookName :  \t" << temp ->BookName <<"        "<<"NO"<<endl;
        }
        temp = temp->nextb;
    }

  }

