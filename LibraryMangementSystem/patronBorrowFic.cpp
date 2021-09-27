#include "Home.h"
#include <iostream>
#include <ctime>
#include <sstream>
using namespace std;

void Home::pborrowBooks(){
    string Nb;
    int copyn;
    string pName;

    cout<<"\n\t\t**************  ";
    cout<<"\n\t\tEnter name  ";
    cin>>pName;
    Patrons * current = PnameExists(pName);
    if(PnameExists(pName)){
        Home h;
        if(current != NULL){
            cout<<"\n\t\t**********************\n";
            cout << "\n\t\t\tFriction: " << endl;
            cout<<"\n\t\t**********************\n";
            cout << "\t\t1.Fantasy: " << endl;
            cout << "\t\t2.Science: " << endl;
            cout << "\t\t3.Historical: " << endl;
            cout << "\t\t4.Realistic : " << endl;
            cout << "\t\t5.Fan: " << endl;
            cout<<"\n\t\t**********************\n";
            int option;

            cout << "\n\t\tChoose your Option: ";
            cin>>option;
            if(option == 1){
              if(head1 == NULL){
                    cout << "\n\t\tNo Books in the List\n";
                    return;
                 }

                else {
                    cout << endl << "\n\t\tAvailable Books in Fantasy Section: \n";
                    Books * temp = head1;

                    while (temp != NULL) {

                        if(temp->Genre == "Fantasy"){
                        cout <<"\t\t"<<"  Book Name :  " << temp ->BookName <<"  " << "Author: " << temp ->Author <<"  "<< "  Category :   " <<temp->category
                        <<"  "<<" Genre " <<temp->Genre <<"  " <<"   Available Copy: " <<temp->Availability<<"  "<<endl;

                        }
                        else{
                            cout << "\n\t\tNo Fantasy Book in the List\n";
                            return;
                        }
                        temp = temp -> nextb;
                    }
                    cout<<"\n";

                }
            }

            else if(option == 2){
              if(head1 == NULL){
                    cout << "\n\t\tNo Book in the List\n";
                    return;
                 }

                else {
                    cout << endl << "\n\t\tAvailable Books in Science Section: \n";
                    Books * temp = head1;

                    while (temp != NULL) {

                        if(temp->Genre == "Science"){
                        cout << "\t\t"<<"  Book Name :  " << temp ->BookName <<"  " << "Author: " << temp ->Author <<"  "<< "  Category :   " <<temp->category
                        <<"  "<<" Genre " <<temp->Genre <<"  " <<"   Available Copy: " <<temp->Availability<<"  "<<endl;

                        }
                        else{
                            cout << "\n\t\tNo Science Book in the List\n";
                            return;
                        }
                        temp = temp -> nextb;
                    }
                    cout<<"\n";

                }
            }
            else if(option == 3){
              if(head1 == NULL){
                    cout << "\n\t\tNo Book in the List\n";
                    return;
                 }

                else {
                    cout << endl << "\n\t\tAvailable Books in Historical Section: \n";
                    Books * temp = head1;

                    while (temp != NULL) {

                        if(temp->Genre == "Historical"){
                        cout << "\t\t"<<"  Book Name :  " << temp ->BookName <<"  " << "Author: " << temp ->Author <<"  "<< "  Category :   " <<temp->category
                        <<"  "<<" Genre " <<temp->Genre <<"  " <<"   Available Copy: " <<temp->Availability<<"  "<<endl;

                        }
                        else{
                            cout << "\n\t\tNo Historical Book in the List\n";
                            return;
                        }
                        temp = temp -> nextb;
                    }
                    cout<<"\n";

                }
            }
            else if(option == 4){
                    if(head1 == NULL){
                    cout << "\n\t\tNo Books in the List\n";
                    return;
                 }

                else {
                    cout << endl << "\n\t\tAvailable Books in Realistic Section: \n";
                    Books * temp = head1;

                    while (temp != NULL) {

                        if(temp->Genre == "Realistic"){
                        cout <<"\t\t"<< "  Book Name :  " << temp ->BookName <<"  " << "Author: " << temp ->Author <<"  "<< "  Category :   " <<temp->category
                        <<"  "<<" Genre " <<temp->Genre <<"  " <<"   Available Copy: " <<temp->Availability<<"  "<<endl;

                        }
                        else{
                            cout << "\n\t\tNo Realistic Book in the List\n";
                            return;
                        }
                        temp = temp -> nextb;
                    }
                    cout<<"\n";

                }
            }

            else if(option == 5)
               {
                    if(head1 == NULL){
                    cout << "\n\t\tNo Books in the List\n";
                    return;
                 }

                else {
                    cout << endl << "\n\t\tAvailable Books in Fan Section: \n";
                    Books * temp = head1;

                    while (temp != NULL) {

                        if(temp->Genre == "Fan"){
                        cout <<"\t\t"<<"  Book Name :  " << temp ->BookName <<"  " << "Author: " << temp ->Author <<"  "<< "  Category :   " <<temp->category
                        <<"  "<<" Genre " <<temp->Genre <<"  " <<"   Available Copy: " <<temp->Availability<<"  "<<endl;

                        }
                        else{
                            cout << "\n\t\tNo Fan in the List\n";
                            return;
                        }
                        temp = temp -> nextb;
                    }
                    cout<<"\n";

                }
            }
            else
                cout << "\n\t\tWrong Input: " << endl;


            cout<<"\n\t\tEnter the name of the book you want: ";
            cin >> Nb;
            Books * current = head1;
            time_t now = time(0);


            tm *ltm = localtime(&now);


            if(BookExists(Nb)){
                cout<<"\n\t\tEnter Number of copy: ";
                cin >> copyn;
                if(current->Availability >0 && current->Availability>=copyn){

                    PatronBorrowed* pat = new PatronBorrowed;
                    pat->BookName = Nb;
                    pat->noCopy = copyn;
                    pat->Year = 1900 + ltm->tm_year;
                    pat->Month = 1 + ltm->tm_mon;
                    pat->day = ltm->tm_mday;
                    if(ltm->tm_mday + 15 > 30){
                    pat->day1 = (ltm->tm_mday + 15)-30;
                    }
                    else{
                        pat->day1 = (ltm->tm_mday + 15);
                    }
                    if(pat->day1 <=15){
                        pat->month1 = pat->Month + 1;
                    }
                    else{
                        pat->month1 = pat->Month;
                    }

                    current->Availability = current->Availability - copyn;
                    //pat->after = headnode;
                    //headnode = pat;
                    size++;
                    }

                }


                else{
                    cout << "\n\t\tNumber of copy is not Available" << endl;
                }

            }
            else{
                cout << "\n\t\tBooks is not in the list : " << Nb << endl;
            }
        }

        else {
         cout << "\n\t\tname doesn't match : " << pName << endl;
        }

}



