#include "Home.h"
#include <iostream>
#include <ctime>
#include <sstream>
using namespace std;

void Home::borrowBooks(){
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
                           // cout << "\n\t\tNo Fantasy Book in the List\n";
                            //return;
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
                            //cout << "\n\t\tNo Science Book in the List\n";
                            //return;
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
                            //cout << "\n\t\tNo Historical Book in the List\n";
                           // return;
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
                            //cout << "\n\t\tNo Realistic Book in the List\n";
                            //return;
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
                            //cout << "\n\t\tNo Fan in the List\n";
                            //return;
                        }
                        temp = temp -> nextb;
                    }
                    cout<<"\n";

                }
            }
            else
                cout << "\n\t\tWrong Input: " << endl;

            string authorName;
            cout<<"\n\t\tEnter the name of the book you want: ";
            cin >> Nb;
            cout<<"\n\t\tEnter the name of Author: ";
            cin>>authorName;
            Books * current = BookDetailsExists(Nb,authorName);
            time_t now = time(0);


            tm *ltm = localtime(&now);


            if(BookDetailsExists(Nb,authorName)){
                cout<<"\n\t\tEnter Number of copy: ";
                cin >> copyn;
                if(copyn >= 4){

                        cout<<"\n\t\tSorry you cannot take more than 3 books at a time"<<endl;
                }
                else if(copyn <= 0){
                    cout<<"\n\t\tYou must take at list one book at a time"<<endl;
                }
                else{
                if(current->Availability >0 && current->Availability>=copyn){


                Patrons * p = PnameExists(pName);

                if(PnameExists(pName)){

                        PatronsB * n1 = new PatronsB();
                        n1->name = p->name;
                        n1->id = p->id;
                        n1->email = p->email;
                        n1->phoneNo = p->phoneNo;
                        n1->BookName = Nb;
                        n1->noCopy = copyn;
                        n1->Year = 1900 + ltm->tm_year;
                        n1->Month = 1 + ltm->tm_mon;
                        n1->day = ltm->tm_mday;
                        if(ltm->tm_mday + 15 > 30){
                            n1->day1 = (ltm->tm_mday + 15)-30;
                        }
                        else{
                            n1->day1 = (ltm->tm_mday + 15);
                        }
                        if(n1->day1 <=15){
                            n1->month1 = n1->Month + 1;
                        }
                        else{
                            n1->month1 = n1->Month;
                        }

                        //adding book in the end to make time complexity log(1)
                        if(headb == NULL){
                            headb = n1;
                        }

                        else{

                            tailb->nextp = n1;

                        }


                        current->Availability = current->Availability - copyn;
                        n1->previousp = tailb;
                        tailb = n1;


                        //Adding borrow book name for in last 10 borrowed book
                        //Adding at the begining following FIFO to make time complexity log(1)
                        last10active*in = new last10active();
                        in->name = p->name;
                        in->BookName =Nb;

                        if(first == NULL){
                            last = in;
                        }
                        else{

                            first->previousl = in;
                        }
                        in->nextl = first;
                        first = in;


                        Home g;

                        //deleting last element if last borrowed book array is geater than 10
                        if(g.getCountl(first) >10){
                             last10active* todelete = last;
                             last =  last->previousl;
                             last->nextl = NULL;
                             todelete->previousl = NULL;
                             delete todelete;
                            }

                        }

                        size++;

                }
                else{
                    cout << "\n\t\tNumber of copy is not Available" << endl;
                }
                }
            }
            else{
                cout << "\n\t\tBooks is not in the list : " << Nb << endl;
            }
        }
    }
        else {
         cout << "\n\t\tname doesn't match : " << pName << endl;
        }

}



