#include <iostream>
#include "Home.h"
#include<stdlib.h>
#include <cstdlib>
#include<conio.h>
#include <ctime>
#include <windows.h>

using namespace std;




int main()
{
    system("Color B");


    Home h;

  int option;
  do {
    cout<<"\n\n\n\t\t*******************************************************************\n";
    cout<<"\t\t\t\t\tPATRON INFORMATION";
    cout<<"\n\t\t*******************************************************************\n";
    cout << "\t\t1. Register patron \t";
    cout << "\t2. DisplayAllPatrons Personal Information"<< endl;
    cout << "\t\t3. Search Patrons\t\t";
    cout << "4. Update Patron personal details"<< endl;
    cout << "\t\t5. Borrow Books \t";
    cout << "\t6. Delete Patron" << endl;
    cout << "\t\t7. PatronWithActiveBooks";
    cout << "\t8. Last 10 Books borrowes by Patron"<<endl;
    cout << "\t\t9. Return Books\t";
    cout << "\t\t10. Request Extension"<< endl;
    cout << "\t\t11. Search Personal Information\t";
    cout<<"\n\t\t*******************************************************************\n";
    //cout<<"\n\t\t*******************************************************************\n";

    cout<<"\t\t\t\t\tBOOKS INFORMATION";
    cout<<"\n\t\t*******************************************************************\n";
    cout << "\t\t12. Add Books \t\t";
    cout << "\t13. Display All Books "<< endl;
    cout << "\t\t14. Search Books\t\t";
    cout << "15. Update Books information"<< endl;
    cout << "\t\t16.Display Available Books title"<< endl;

    cout<<"\n\t\t*******************************************************************\n";
    cout << "\n\t\tEnter option: " ;
    cin >> option;
    system ("cls");
    switch (option) {
    case 0:
      break;
      case 1:
      h.RegisterPatron();
      //h.searchbookcategory();
      cout<<"\n\t\tRegistration has been done\n";
      cout<<"\t\tPress any key to return";
      getche();
      system ("cls");

      break;

      case 2:

          h.DisplayPatron();
          cout<<"\t\tPress any key to return";
          getche();
          system ("cls");
          break;

     case 3:
        {
          cout<<"\n\t\tSEARCH BY"<<endl;
          cout<<"\t\t1. ID/password\n";
          cout<<"\t\t2. Name";

          int ch;
          cout<<"\n\t\tEnter your option: ";
          cin>>ch;
          if(ch == 1){
            string pass;
            cout<<"\n\n\n\t\tEnter ID/password:  ";
            cin>>pass;


            if(h.searchById(pass)){

                cout<<"\t\tPress any key to return";
                getche();
                system ("cls");
                break;
            }
            else{
                cout<<"\t\tGiven "<<pass<<"  does not Match\n";
                cout<<"\t\tPress any key to return";
                getche();
                system ("cls");
                break;
            }


          }
          else if(ch == 2){

              string name;
              cout<<"\n\n\n\t\tEnter name  ";
              cin>>name;

              if(h.searchDetails(name)){

                cout<<"\t\tPress any key to return";
                getche();
                system ("cls");

              }
          }
          else{
            cout<<"\n\n\t\tWrong Input !!\n";
            cout<<"\t\tPress any key to return";
                getche();
                system ("cls");
          }
       }
      break;
      case 4:
          h.updatePatron();
          cout<<"\t\tPress any key to return";
          getche();
          system ("cls");
          break;
      case 5:
          {

             int choice;
             cout<<"\n\t\t1.Fiction"<<endl;
             cout<<"\t\t2.Non-Fiction"<<endl;
             cout<<"\t\tEnter you option:  ";
             cin>>choice;

             if(choice ==1){
                h.borrowBooks();

             }
             else if(choice ==2){
                h.borrowNonFictionBooks();
             }
             else{
                cout<<"\n\t\tWrong Input";
             }
             cout<<"\n\t\tPress any key to return";
             getche();
             system ("cls");

          }

          break;
      case 6:
          h.deletePatron();
          cout<<"\t\tPress any key to return";
          getche();
          system ("cls");
          break;

      case 7:
         h.PatronWithActiveBook();
         cout<<"\t\tPress any key to return";
         getche();
         system ("cls");
         break;
      case 8:

          h.Lat10BorrowedBook();
          cout<<"\t\tPress any key to return";
          getche();
          system ("cls");
          break;

      case 9:
          h.ReturnPatron();
          cout<<"\t\tPress any key to return";
          getche();
          system ("cls");

          break;
    case 11:
        {
          cout<<"\n\t\tSEARCH BY"<<endl;
          cout<<"\t\t1. ID/password\n";
          cout<<"\t\t2. Name";

          int ch;
          cout<<"\n\t\tEnter your option: ";
          cin>>ch;
          if(ch == 1){
            string pass;
            cout<<"\n\n\n\t\tEnter ID/password:  ";
            cin>>pass;


            if(h.searchByPatronId(pass)){

                cout<<"\t\tPress any key to return";
                getche();
                system ("cls");
                break;
            }
            else{
                cout<<"\t\tGiven "<<pass<<"  does not Match\n";
                cout<<"\t\tPress any key to return";
                getche();
                system ("cls");
                break;
            }


          }
          else if(ch == 2){

              string name;
              cout<<"\n\n\n\t\tEnter name  ";
              cin>>name;

              if(h.searchByPatronName(name)){

                cout<<"\t\tPress any key to return";
                getche();
                system ("cls");

              }
          }
          else{
            cout<<"\n\n\t\tWrong Input !!\n";
            cout<<"\t\tPress any key to return";
                getche();
                system ("cls");
          }
       }
      break;

     case 10:
          h.RequestExtension();
          cout<<"\t\tPress any key to return";
          getche();
          system ("cls");
          break;

     case 12:
           h.AddBook();
          cout<<"\t\tPress any key to return";
          getche();
          system ("cls");
          break;
     case 13:

          h.DisplayBook();
          cout<<"\t\tPress any key to return";
          getche();
          system ("cls");
          break;
    case 14:

        {
             int choice;
             cout<<"\n\t\t1.Category"<<endl;
             cout<<"\t\t2.Genre"<<endl;
             cout<<"\t\t3.title"<<endl;
             cout<<"\t\t4.Availability"<<endl;
             cout<<"\t\tEnter you option:  ";
             cin>>choice;

             if(choice ==1){
                h.searchbookcategory();

             }
             else if(choice ==2){

                 h.searchbookGenry();
             }
             else if(choice == 3){
                h.searchbooktitle();
             }
             else if(choice == 4){
                h.searchbookAvail();
             }
             else{
                cout<<"\n\t\tWrong Input";
             }
             cout<<"\n\t\tPress any key to return";
             getche();
             system ("cls");

          }
          break;
      case 15:

          h.updateBook();
          cout<<"\t\tPress any key to return";
          getche();
          system ("cls");
          break;

     case 16:

          h.DisplayBookAvailable();
          cout<<"\t\tPress any key to return";
          getche();
          system ("cls");
          break;
      default:
      cout << "\n\t\tEnter Proper Option number " << endl;
      getche();
      system ("cls");
    }

  } while (option != 0);






    return 0;
}
