#include "Home.h"
#include <iostream>
using namespace std;
void Home::RequestExtension(){
    int num;
    string pName;
    string bName;
    cout<<"\n\t\tEnter Id  ";
    cin>>pName;
    cout<<"\n\t\tEnter Book name  ";
    cin>>bName;
    Patrons * current = nodeExists(pName);

    //checking patron name exit in the list of borrowing book
    if(nodeExists(pName)){
    PatronsB * temp = headb;

    while(temp !=NULL){

        if(temp->id ==pName && temp->BookName ==bName){
            cout<<"\n\t\tInformation about "<<temp->name<<endl;
             cout << "\n\t\tName :  \t" << temp ->name <<"  " << "\n\t\tID:    \t\t" << temp ->id <<"  "
             << "  \n\t\tEmail :   \t" <<temp->email
            <<"  "<<" \n\t\tphone no :  \t" <<temp->phoneNo <<"  " <<"   \n\t\t" <<
             "\n\t\tBookName: \t" <<temp->BookName <<"\n\t\tNumber of copy: "<<temp->noCopy<<"  "<<endl;

                cout<<"\n\t\tEnter number of days need extension: ";
                cin>>num;

                //date extension
                if(temp->day1 + num <=15){
                        temp->month1 = temp->Month + 1;
                    }
                else{
                        temp->month1 = temp->Month;
                    }
                if(temp->day1 + num > 30){
                     temp->day1 = (temp->day1 + num)-30;
                    }
                else{
                     temp->day1 = (temp->day1 + num);
                    }

                 cout << "\n\t\tDate Updated Successfully" << endl;
                 return;



        }
        else{

            temp = temp->nextp;
        }
    }

    }
    else {
      cout << "\n\t\tID doesn't match : " << pName << endl;
    }
  }
