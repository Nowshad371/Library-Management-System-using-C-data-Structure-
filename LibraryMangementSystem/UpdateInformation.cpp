#include "Home.h"
#include <iostream>
using namespace std;

void Home::updatePatron(){
    string name;
    string pName;
    cout<<"\n\t\tEnter name:  ";
    cin>>name;
    cout<<"\n\t\tEnter password /Id: ";
    cin>>pName;
    //Patrons * current = nodeExists(pName);
    Patrons * current = nameExists(pName,name);

    //checking name and id before updating information about patron
    if(nameExists(pName,name)){
        int option;
        Home ho;

        cout<<"\n\t\tWhat you want to change: \n";
        cout<<"\t\t1. ID/Password"<<endl;
        cout<<"\t\t2. phone"<<endl;
        cout<<"\t\t3. email"<<endl;

        cout<<"\t\tEnter your Option  ";
        cin>>option;
        if(current != NULL){

          string i;
          string e,p;
          if(option == 1){
            cout << "\n\t\tEnter new id: ";
            cin >> i;

            //changing id in both active borrowed book patron list
            //and patron list
            current -> id = i;
            PatronsB * temp = patronExists(pName);
           // for(int k = 0;k<ho.getCountp(headb);k++){

                if(patronExists(pName)){
                       temp->id = i;
                }
                   // temp = temp->previousp;

           // }

          }
          else if(option ==2){
             cout << "\n\t\tEnter new phone Number:  ";
             cin >> p;
             //changing phone number in both active borrowed book patron list
            //and patron list
             current ->phoneNo = p;
              PatronsB * temp = patronExists(pName);
             // for(int k = 0;k<ho.getCountp(headb);k++){

                if(patronExists(pName)){
                       temp->phoneNo = p;
                }
                //    temp = temp->previousp;

            //}
          }
          else if(option ==3){
             cout << "\n\t\tEnter new email : ";
             cin >> e;
             //changing email in both active borrowed book patron list
            //and patron list
             current ->email  = e;
             PatronsB * temp = patronExists(pName);
              //for(int k = 0;k<ho.getCountp(headb);k++){

                if(patronExists(pName)){
                       temp->email = e;
               }
                //    temp = temp->previousp;

          //  }
          }

          cout << "\n\t\tData Updated Successfully" << endl;
        }

    } else {
      cout << "\n\t\tID doesn't match : " << pName << endl;
    }
  }
