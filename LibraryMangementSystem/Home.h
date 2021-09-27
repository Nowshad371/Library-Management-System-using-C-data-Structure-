#ifndef HOME_H
#define HOME_H
#include <iostream>
#include<string>
using namespace std;

struct Patrons{

  string name,email,phoneNo,dob,id;
  Patrons * next;
  Patrons * previous;

  Patrons() {
    id = "";
    name = "";
    email = "";
    phoneNo = "";
    dob = "";


    next = NULL;
  }
  Patrons(string i, string na,string e,string ph,string d) {
    id = i;
    name = na;
    email = e;
    phoneNo = ph;
    dob= d;

  }
};


struct Books {

  string BookName,Author,Genre,category;
  int Availability;
  Books * nextb;

  Books() {
    BookName = "";
    Author = "";
    Genre = "";
    category = "";
    Availability = 0;
    nextb = NULL;
  }
  Books(string bn,string a,string g,string c,int avail) {
    BookName = bn;
    Author = a;
    Genre = g;
    category = c;
    Availability = avail;

  }
};
struct PatronsB{

  int noCopy,Year,Month,day,day1,month1;
  string name,email,phoneNo,BookName,id;
  PatronsB * nextp;
  PatronsB * previousp;

  PatronsB() {
    id = "";
    name = "";
    email = "";
    phoneNo = "";
    BookName = "No Book Taken";
    noCopy = 0;
    Year = 0;
    Month = 0;
    day = 0;
    day1 = 0;
    month1 = 0;


    nextp = NULL;
    previousp = NULL;
  }
  PatronsB(string i, string na,string e,string ph,string b,int co,int Y,int M,int da,int da1,int mon) {
    id = i;
    name = na;
    email = e;
    phoneNo = ph;
    BookName = b;
    noCopy = co;
    Year = Y;
    Month = M;
    day = da;
    day1 =da1;
    month1 = mon;

  }
};

struct last10active{


  string name,BookName;
  last10active * nextl;
  last10active * previousl;

  last10active() {
    name = "";
    BookName = "";

    nextl = NULL;
    previousl = NULL;
  }
  last10active(string na,string b) {

    name = na;
    BookName = b;


  }
};

class Home
{
    public:
        Patrons * head;
        Patrons * tail;
        PatronsB *headb;
        PatronsB* tailb;
        last10active*first;
        last10active*last;
        Books * head1;
        int size;

        Home() {
        head = NULL;
        tail = NULL;
        head1 = NULL;
        headb = NULL;
        tailb = NULL;
        first = NULL;
        last = NULL;
        size = 0;
        }
        Home(Patrons * n) {
        head = n;
        }
        Home(Books * n1) {
        head1 = n1;
        }
        Home(PatronsB * nb) {
         headb = nb;
        }
        Home(last10active * f) {
         first = f;
        }



        Patrons * nodeExists(string i);
        void RegisterPatron();
        void DisplayPatron();
        bool isempty();
        int length();
        bool searchDetails(string n);
        void updatePatron();
        void borrowBooks();
        void Friction();
        //void FantasyP();
        Books * BookExists(string i);

        void AddBook();
        void DisplayBook();
        void borrowNonFictionBooks();
        void PatronWithActiveBook();
        void Lat10BorrowedBook();
        void deletePatron();
        void ReturnPatron();
        void RequestExtension();
        Patrons * nameExists(string i,string n);
        bool searchById(string n);
        Patrons * PnameExists(string n);
        Books * AuthorExists(string i);
        void DisplayAllActive();
        int getCount(Books* head1);
        void searchbookcategory();
        int getCountp(PatronsB* headb);
        PatronsB * patronExists(string i);
        int getCountl(last10active* first);
        void searchbookGenry();
        void searchbooktitle();
        void searchbookAvail();
        void updateBook();
        Books * BookDetailsExists(string i,string n);
        bool searchByPatronId(string n);
        bool searchByPatronName(string name);
        void DisplayBookAvailable();
        void BorrowBookspa();




};

#endif // HOME_H
