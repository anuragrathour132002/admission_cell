#include<iostream>
using namespace std;
class admission 
{
    public:
    char student_name[100];
    char mother_name[100];
    char father_name[100];
    long int mob_number;
    int collage_fee;
    int student_year;
    int balance;
    void getinfo();
    void total_fee();
    void deposit();
    void display();
    void exit();
};
 
 void admission::getinfo()
 {
     cout<<"enter the student_name-";
     cin>>student_name;
     cout<<"enter the mother_name-"; 
     cin>>mother_name;
     cout<<"enter the father_name-";
     cin>>father_name;
     cout<<"enter the mob_number";
     cin>>mob_number;
     cout<<"enter your collage_fee";
     cin>>collage_fee;
     cout<<"enter the sudent year";
     cin>>student_year;
     cout<<"student_name"<<student_name<<endl;
     cout<<"mother_name"<<mother_name<<endl;
     cout<<"father_name"<<father_name<<endl;
     cout<<"mob_number"<<mob_number<<endl;
     cout<<"collage_fee"<<collage_fee<<endl;
     cout<<"student_year"<<student_year<<endl;
     }
     void admission::total_fee()
     {
         int total_fee=6000000;
         cout<<"total_fee"<<total_fee<<endl;
     }
     void admission ::deposit()
     {
         int a;
         cout<<"how much money you want"<<endl;
         cin>>a;
         cout<<"your balance is "<<a;
         a=a-balance;
     }
     void admission::display()
     {
         cout<<"\n_ _ _ _ _ _ _ _ _ _";
         cout<<"student_name"<<student_name<<endl;
     cout<<"mother_name"<<mother_name<<endl;
     cout<<"father_name"<<father_name<<endl;
     cout<<"mob_number"<<mob_number<<endl;
     cout<<"collage_fee"<<collage_fee<<endl;
     cout<<"student_year"<<student_year<<endl;
      cout<<"\n_ _ _ _ _ _ _ _ _ _ _ _ ";
     }
     void admission::exit()
     {
         cout<<"thank you welcome to the collage"<<endl;
     }
     int main()
     {
         admission ad;
         int ch;
            cout<<"_ _  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl;
            cout<<" welcome to the collage "<<endl;
            cout<<"_ _  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl;
            cout<<"1: press get info about student"<<endl;
            cout<<"2: press to show the total amount \n of pay student"<<endl;
            cout<<"3: press show the balance"<<endl;
            cout<<"4: press display record"<<endl;
            cout<<"5: press to exit"<<endl;
            ch:
            cout<<"_ _  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl;
            cout<< "     enter your choice      "<<endl;
            cout<<"_ _  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl;
            cin>>ch;
               switch (ch)
               {
                   case 1:
                   cout<<"_ _  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl;
                   cout<< "  get the infotmation about student   "<<endl;
                   cout<<" _ _  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl;
                   ad.getinfo();
                   goto ch;
                   break;

                   case 2:
                   cout<<"_ _  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl;
                   cout<< "  your totle amount of pay  "<<endl;
                   cout<<" _ _  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl;
                   ad.total_fee();
                   goto ch;
                   break;
                    
                   case 3:
                    cout<<"_ _  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl;
                   cout<< "      your balance is      "<<endl;
                   cout<<" _ _  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl;
                   ad.deposit();
                   goto ch;
                   break;

                   case 4:
                    cout<<"_ _  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl;
                   cout<< "       display record       "<<endl;
                   cout<<" _ _  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl;
                   ad.display();
                   goto ch;
                   break;

                   case 5:
                    cout<<"_ _  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl;
                   cout<< "        goto   exit       "<<endl;
                   cout<<" _ _  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl;
                   ad.exit();
                   break;

                   default:
                   cout<<"  wrong choice ";
                   cout<<" ... plz enter the valid choice ..."<<endl;
                   goto ch;
                   break ;
                   
               }
               return 0;
         }
     
















