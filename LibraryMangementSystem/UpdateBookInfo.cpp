#include "Home.h"
#include <iostream>
using namespace std;

void Home::updateBook(){
    string name;
    string BName;
    cout<<"\n\t\tEnter Author name:  ";
    cin>>name;
    cout<<"\n\t\tEnter BookName: ";
    cin>>BName;

    Books * current = BookDetailsExists(BName,name);
    //checking before updating Books information.
    if(BookDetailsExists(BName,name)){
        int option;
        Home ho;

        cout<<"\n\t\tWhat you want to change: \n";
        cout<<"\t\t1. Book Name"<<endl;
        cout<<"\t\t2. Author Name"<<endl;
        cout<<"\t\t3. Copy Number/Availability"<<endl;
        cout<<"\t\t4. Category"<<endl;
        cout<<"\t\t5. Genre"<<endl;

        cout<<"\t\tEnter your Option  ";
        cin>>option;
        if(current != NULL){

          if(option == 1){
            string i;
            cout << "\n\t\tEnter new Book Name: ";
            cin >> i;
            current ->BookName = i;

          }
          else if(option ==2){
             string A;
             cout << "\n\t\tEnter new Author Name:  ";
             cin >> A;
             current ->Author = A;

          }
          else if(option ==3){
             int c;
             cout << "\n\t\tEnter Number of copy : ";
             cin >> c;
             current ->Availability  = c;


            }

            else if(option ==4){
             string c;
             cout << "\n\t\tEnter Category Name : ";
             cin >> c;
             current ->category = c;


            }
            else if(option ==5){
             string g;
             cout << "\n\t\tEnter Genre : ";
             cin >> g;
             current ->Genre = g;


            }
          }

          cout << "\n\t\tData Updated Successfully" << endl;
        }

    else {
      cout << "\n\t\tNo Book  match with Book name: " << BName << "  with having Author:   "<<name <<endl;
    }
  }

