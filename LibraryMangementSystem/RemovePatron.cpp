#include "Home.h"
#include <iostream>
using namespace std;
//deleting patron from the list
void Home::deletePatron(){
        string i;
        cout<<"\n\t\tEnter Id: ";
        cin>>i;

        if(nodeExists(i)){

        Patrons* current = tail;
        Patrons* pre = NULL;
        bool found = false;
        if(tail->id == i){
            tail = tail->previous;
            delete current;
            found = true;
        }
        else{
        while(current->id != i && current !=NULL){

            pre = current;
            current = current->previous;

        }
        if(current->id == i){

                pre->previous = current->previous;
                delete current;
                found = true;
            }
        }



        if(found){


            cout<<"\n\t\tDeleted\n";
        }
        else{
            cout<<"\n\t\tNot Found!!\n";
        }


        }
}
