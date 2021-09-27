#include "Home.h"
#include <iostream>

using namespace std;
//function to add book
void Home::AddBook(){
      Books * n1 = new Books();
      string na,au;int av;
      int choice;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\tCategory of Books you want to Add: \n";
        cout<<"\t\t************************************\n";
        cout<<"\t\t1. Friction"<<endl;
        cout<<"\t\t2. non-Friction"<<endl;
        cout<<"\t\t************************************\n";

        cout<<"\t\tEnter your Option: ";
        cin>>choice;
        if(choice == 1){

            cout << "\n\t\tFriction: " << endl;
            cout << "\t\t1.Fantasy: " << endl;
            cout << "\t\t2.Science: " << endl;
            cout << "\t\t3.Historical: " << endl;
            cout << "\t\t4.Realistic : " << endl;
            cout << "\t\t5.Fan: " << endl;
            int option;
            cout << "\t\tChoose genre Type: ";
            cin>>option;
            if(option == 1){
               cout << "\t\tenter Book Name: ";
               cin >> na;
               cout << "\t\tEnter author Name: ";
               cin >> au;
               cout<<"\t\tNumber of copies: ";
               cin>>av;
                n1 ->BookName = na;
                n1 ->Author= au;
                n1 ->category  = "Friction";
                n1 ->Genre = "Fantasy";
                n1 ->Availability = av;

            }
            else if(option == 2){
               cout << "\t\tenter Book Name: ";
               cin >> na;
               cout << "\t\tEnter author Name: ";
               cin >> au;
               cout<<"\t\tNumber of copies: ";
               cin>>av;
                n1 ->BookName = na;
                n1 ->Author= au;
                n1 ->category  = "Friction";
                n1 ->Genre = "Science";
                n1 ->Availability = av;
              }

            else if(option == 3)
            {
               cout << "\t\tenter Book Name: ";
               cin >> na;
               cout << "\t\tEnter author Name: ";
               cin >> au;
               cout<<"\t\tNumber of copies: ";
               cin>>av;
                n1 ->BookName = na;
                n1 ->Author= au;
                n1 ->category  = "Friction";
                n1 ->Genre = "Historical";
                n1 ->Availability = av;
            }
            else if(option == 4)
            {
               cout << "\t\tenter Book Name: ";
               cin >> na;
               cout << "\t\tEnter author Name: ";
               cin >> au;
               cout<<"\t\tNumber of copies: ";
               cin>>av;
                n1 ->BookName = na;
                n1 ->Author= au;
                n1 ->category  = "Friction";
                n1 ->Genre = "Realistic";
                n1 ->Availability = av;
            }
            else if(option == 5)
             {
                cout << "\t\tenter Book Name: ";
               cin >> na;
               cout << "\t\tEnter author Name: ";
               cin >> au;
               cout<<"\t\tNumber of copies: ";
               cin>>av;
                n1 ->BookName = na;
                n1 ->Author= au;
                n1 ->category  = "Friction";
                n1 ->Genre = "Fan";
                n1 ->Availability = av;
            }
            else
                cout << "Wrong Input: " << endl;

      }
      else if(choice == 2){
            cout << "\n\t\tnon-Friction: " << endl;
            cout << "\t\t1.Narrative: " << endl;
            cout << "\t\t2.Biography: " << endl;
            cout << "\t\t3.Periodicals: " << endl;
            cout << "\t\t4.Self-help : " << endl;
            cout << "\t\t5.Reference: " << endl;
            int option;
            cout << "\t\tChoose genre Type: ";
            cin>>option;
            if(option == 1){
               cout << "\t\tenter Book Name: ";
               cin >> na;
               cout << "\t\tEnter author Name: ";
               cin >> au;
               cout<<"\t\tNumber of copies: ";
               cin>>av;
                n1 ->BookName = na;
                n1 ->Author= au;
                n1 ->category  = "non-Friction";
                n1 ->Genre = "Narrative";
                n1 ->Availability = av;

            }
            else if(option == 2){
               cout << "\t\tenter Book Name: ";
               cin >> na;
               cout << "\t\tEnter author Name: ";
               cin >> au;
               cout<<"\t\tNumber of copies: ";
               cin>>av;
                n1 ->BookName = na;
                n1 ->Author= au;
                n1 ->category  = "non-Friction";
                n1 ->Genre = "Biography";
                n1 ->Availability = av;
              }

            else if(option == 3)
            {
               cout << "\t\tenter Book Name: ";
               cin >> na;
               cout << "\t\tEnter author Name: ";
               cin >> au;
               cout<<"\t\tNumber of copies: ";
               cin>>av;
                n1 ->BookName = na;
                n1 ->Author= au;
                n1 ->category  = "non-Friction";
                n1 ->Genre = "Periodicals";
                n1 ->Availability = av;
            }
            else if(option == 4)
            {
               cout << "\t\tenter Book Name: ";
               cin >> na;
               cout << "\t\tEnter author Name: ";
               cin >> au;
               cout<<"\t\tNumber of copies: ";
               cin>>av;
                n1 ->BookName = na;
                n1 ->Author= au;
                n1 ->category  = "non-Friction";
                n1 ->Genre = "Self-help";
                n1 ->Availability = av;
            }
            else if(option == 5)
             {
               cout << "\t\tenter Book Name: ";
               cin >> na;
               cout << "\t\tEnter author Name: ";
               cin >> au;
               cout<<"\t\tNumber of copies: ";
               cin>>av;
                n1 ->BookName = na;
                n1 ->Author= au;
                n1 ->category  = "non-Friction";
                n1 ->Genre = "Reference";
                n1 ->Availability = av;
            }
            else
                cout << "Wrong Input: " << endl;

      }
      else
         cout<<"\n\t\tWrong Input";
                //checking if the name of the books and author already exit
                if(BookExists(n1->BookName) != NULL && AuthorExists(n1->Author) != NULL){
                    cout << "\n\t\tGiven Book Name: " << n1 ->BookName << "  already exit" << endl;
                    cout << "\t\tIf you want to update book copies go to update option" << endl;

                    }
                //condition for not writing unconditional value
                else if(n1->BookName ==""){
                    cout<<"\n\n\t No Book name has been added\n";
                }
                //adding new book in the front to make time complexity log(1)
                else{
                      n1 -> nextb = head1;
                      head1 = n1;
                      cout << "\n\t\tBook added added" << endl;
                    }


}
