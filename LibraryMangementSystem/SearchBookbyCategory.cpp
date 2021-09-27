#include "Home.h"
#include <iostream>

using namespace std;

//getting the size of the book list
int Home::getCount(Books* head1)
{
    // Base Case
    if (head1 == NULL) {
        return 0;
    }
    // Count this node plus the rest of the list
    else {
        return 1 + getCount(head1->nextb);
    }
}
//searching books by category
void Home::searchbookcategory(){
    int cat;
    cout<<"\n\t\t1.Friction: "<<endl;
    cout<<"\t\t2.Non-Friction"<<endl;
    cout<<"\t\tSelect your option: ";
    cin>>cat;
    Home h;
    Books * temp = head1;
    if(cat ==1){
    for(int i=0;i<h.getCount(head1);i++){

        if(temp->category =="Friction"){
             cout << "\n\t\tBookName :  \t" << temp ->BookName <<"  " << "\n\t\tAuthor:    \t\t" << temp ->Author <<"  "<< "  \n\t\tcategory :   \t" <<temp->category
            <<"  "<<" \n\t\tGenre :  \t" <<temp->Genre <<"  " <<"   \n\t\tcopy number:  " << temp->Availability<<endl;


        }
        temp = temp->nextb;
    }
    }
    else{

        for(int i=0;i<h.getCount(head1);i++){

        if(temp->category =="non-Friction"){
             cout << "\n\t\tBookName :  \t" << temp ->BookName <<"  " << "\n\t\tAuthor:    \t\t" << temp ->Author <<"  "<< "  \n\t\tcategory :   " <<temp->category
            <<"  "<<" \n\t\tGenre :  \t" <<temp->Genre <<"  " <<"   \n\t\tcopy number:  " << temp->Availability<<endl;


        }
        temp = temp->nextb;
    }


    }
}
//searching books by genre
void Home::searchbookGenry(){

    string gen;
    cout<<"\n\t\tSelect genre type: ";
    cin>>gen;
    Home h;
    Books * temp = head1;
    for(int i=0;i<h.getCount(head1);i++){

        if(temp->Genre ==gen){
             cout << "\n\t\tBookName :  \t" << temp ->BookName <<"  " << "\n\t\tAuthor:    \t\t" <<
              temp ->Author <<"  "<< "  \n\t\tcategory :   " <<temp->category
            <<"  "<<" \n\t\tGenre :  \t" <<temp->Genre <<"  " <<"   \n\t\tcopy number:  " << temp->Availability<<endl;


        }
        temp = temp->nextb;
    }



}
//searching books by title
void Home::searchbooktitle(){

    string ti;
    cout<<"\n\t\tSelect genre type: ";
    cin>>ti;
    Home h;
    Books * temp = head1;
    for(int i=0;i<h.getCount(head1);i++){

        if(temp->BookName ==ti){
             cout << "\n\t\tBookName :  \t" << temp ->BookName <<"  " << "\n\t\tAuthor:    \t\t" << temp ->Author <<"  "<< "  \n\t\tcategory :   " <<temp->category
            <<"  "<<" \n\t\tGenre :  \t" <<temp->Genre <<"  " <<"   \n\t\tcopy number:  " << temp->Availability<<endl;


        }
        temp = temp->nextb;
    }



}

//searching books by it avilability
void Home::searchbookAvail(){

    Home h;
    Books * temp = head1;
    for(int i=0;i<h.getCount(head1);i++){

        if(temp->Availability >=1){
             cout << "\n\t\tBookName :  \t" << temp ->BookName <<"  " << "\n\t\tAuthor:    \t\t" << temp ->Author <<"  "<< "  \n\t\tcategory :   " <<temp->category
            <<"  "<<" \n\t\tGenre :  \t" <<temp->Genre <<"  " <<"   \n\t\tcopy number:  " << temp->Availability<<endl;


        }
        temp = temp->nextb;
    }


}

