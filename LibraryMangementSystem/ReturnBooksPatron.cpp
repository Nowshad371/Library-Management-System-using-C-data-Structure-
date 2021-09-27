#include "Home.h"
#include <iostream>
using namespace std;


void Home::ReturnPatron(){

        PatronsB* p = headb;

        string i;
        cout<<"\n\t\tEnter Id: ";
        cin>>i;
        //checking name of the partron to return books
        if(nodeExists(i)){
            string nameb;
            cout<<"\n\t\tEnter the Name of the Book: ";
            cin>>nameb;
            Books * current = BookExists(nameb);
            if(BookExists(nameb)){


            int nc;
            cout<<"\n\t\tEnter the number of copy: ";
            cin>>nc;

            while(p != NULL){

                if(p->id == i && p->BookName == nameb){
                    if(p->noCopy < nc){
                        cout<<"\n\t\tyou dont have that much copy";
                    }
                    else if(p->noCopy-nc == 0){
                       PatronsB* c = tailb;
                       PatronsB* pre = NULL;

                       if(tailb->id == i){
                        tailb = tailb->previousp;
                        delete c;
                        current->Availability = current->Availability + nc;

                       }
                       else{
                       while(c->id != i && c !=NULL){

                         pre = c;
                         c = c->previousp;

                       }
                        if(c->id == i){

                            pre->previousp = c->previousp;
                            delete c;

                        }

                    }
                    }
                    else{
                       p->BookName = nameb;
                       p->noCopy = p->noCopy - nc;
                       current->Availability = current->Availability + nc;
                    }



                }
               p = p->nextp;
            }

        }
    }

}
