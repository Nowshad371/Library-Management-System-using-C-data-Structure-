#include "Home.h"
#include <iostream>
#include <ctime>
using namespace std;

void Home::borrowNonFictionBooks(){
    string Nb;
    string authorName;
    int copyn;
    string pName;
    cout<<"\n\t\t**************  ";
    cout<<"\n\t\tEnter name  ";
    cin>>pName;

    Patrons * current = PnameExists(pName);

    //checking if the patron name exit in the list before borrowing book
    if(PnameExists(pName)){
        Home h;
        if(current != NULL){
            cout<<"\n\t\t*********************\n";
            cout << "\t\tNon-Fiction: " << endl;
            cout<<"\n\t\t*********************\n";
            cout << "\t\t1.Narrative: " << endl;
            cout << "\t\t2.Biography: " << endl;
            cout << "\t\t3.Periodicals: " << endl;
            cout << "\t\t4.Self-help: " << endl;
            cout << "\t\t5.Reference: " << endl;
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
                    cout << endl << "\n\t\tAvailable Books in Narrative Section: \n";
                    Books * temp = head1;

                    while (temp != NULL) {

                        if(temp->Genre == "Narrative"){
                        cout <<"\t\t"<<"  Book Name :  " << temp ->BookName <<"  " << "Author: " << temp ->Author <<"  "<< "  Category :   " <<temp->category
                        <<"  "<<" Genre " <<temp->Genre <<"  " <<"   Available Copy: " <<temp->Availability<<"  "<<endl;

                        }
                        else{
                           // cout << "\n\t\tNo Narrative Book in the List\n";

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
                    cout << endl << "\n\t\tAvailable Books in Biography Section: \n";
                    Books * temp = head1;

                    while (temp != NULL) {

                        if(temp->Genre == "Biography"){
                        cout <<"\t\t"<<"  Book Name :  " << temp ->BookName <<"  " << "Author: " << temp ->Author <<"  "<< "  Category :   " <<temp->category
                        <<"  "<<" Genre " <<temp->Genre <<"  " <<"   Available Copy: " <<temp->Availability<<"  "<<endl;

                        }
                        else{
                           // cout << "\n\t\tNo Biography Book in the List\n";

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
                    cout << endl << "\n\t\tAvailable Books in Periodicals Section: \n";
                    Books * temp = head1;

                    while (temp != NULL) {

                        if(temp->Genre == "Periodicals"){
                        cout << "\t\t"<<"  Book Name :  " << temp ->BookName <<"  " << "Author: " << temp ->Author <<"  "<< "  Category :   " <<temp->category
                        <<"  "<<" Genre " <<temp->Genre <<"  " <<"   Available Copy: " <<temp->Availability<<"  "<<endl;

                        }
                        else{
                           // cout << "\n\t\tNo Periodicals Book in the List\n";

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
                    cout << endl << "\n\t\tAvailable Books in Self-help Section: \n";
                    Books * temp = head1;

                    while (temp != NULL) {

                        if(temp->Genre == "Self-help"){
                        cout << "\t\t"<<"  Book Name  : " << temp ->BookName <<"  " << "Author: " << temp ->Author <<"  "<< "  Category :   " <<temp->category
                        <<"  "<<" Genre " <<temp->Genre <<"  " <<"   Available Copy: " <<temp->Availability<<"  "<<endl;

                        }
                        else{
                           // cout << "\n\t\tNo Self-help Book in the List\n";

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
                    cout << endl << "\n\t\tAvailable Books in Reference Section: \n";
                    Books * temp = head1;

                    while (temp != NULL) {

                        if(temp->Genre == "Reference"){
                        cout << "\t\t"<<"  Book Name :  " << temp ->BookName <<"  " << "Author: " << temp ->Author <<"  "<< "  Category :   " <<temp->category
                        <<"  "<<" Genre " <<temp->Genre <<"  " <<"   Available Copy: " <<temp->Availability<<"  "<<endl;

                        }
                        else{
                           // cout << "\n\t\tNo Reference in the List\n";

                        }
                        temp = temp -> nextb;
                    }
                    cout<<"\n";

                }
            }
            else{
              cout << "\n\t\tWrong Input: " << endl;
            }

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

                //condition to see limit of the copy
                if(copyn >= 4){

                        cout<<"\n\t\tSorry you cannot take more than 3 books at a time"<<endl;
                }
                else if(copyn <= 0){
                    cout<<"\n\t\tYou must take at list one book at a time"<<endl;
                }
                else{
                //condition to see number of books available or not
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

                        //adding the date of the book borrow and return
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


                        if(headb == NULL){
                            headb = n1;
                        }

                        else{

                            tailb->nextp = n1;
                        }

                        //subtracting the number of copy from list in the library
                        current->Availability = current->Availability - copyn;
                        n1->previousp = tailb;
                        tailb = n1;
                        //Adding borrow book name for in last 10 borrowed book
                        //Adding at the begining following FIFO
                        last10active*in = new last10active();
                        in->name = p->name;
                        in->BookName = Nb;

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
