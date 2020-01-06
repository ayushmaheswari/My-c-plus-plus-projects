#include <iostream>
#include <fstream>
#include<cmath>
using namespace std;
// This project is created by Ayush Maheswari
int main()
{
    string line;
    string line4;
    int cash;
    int cash1;
    int line2;
    int cash2;
    int cash3;
    string pin;
    string pass1;
    string pass2;
    int c;
cout<<endl;
cout<<"                           **********************************************"<<endl;
cout<<"                           *   WELCOME TO BANK OF BARODA ATM SERVICES   *"<<endl;
cout<<"                           **********************************************"<<endl<<endl;

    ifstream outf;
    outf.open("file1.txt");
cout<<"    Enter your 4 digit secrate pin no :-> ";
cin>>pin;

    if (outf.is_open())
        {
        while(!outf.eof())
        {
             outf>>line;

             if (pin==line)
             {
                 outf.close();
                 do{
                 cout<<endl;
                 cout<<"     **********************************************"<<endl;
                 cout<<"     *         1 >-> for cash enquiary            *"<<endl;
                 cout<<"     *         2 >-> cash  withdrawal             *"<<endl;
                 cout<<"     *         3 >-> see transition list          *"<<endl;
                 cout<<"     *         4 >-> deposite money               *"<<endl;
                 cout<<"     *         5 >->    change pin                *"<<endl;
                 cout<<"     *         6 >-> see deposition list          *"<<endl;
                 cout<<"     *         7 >->    exit                      *"<<endl;
                 cout<<"     **********************************************"<<endl<<endl;
                 cout<<"     Please enter your choice :-> ";
                 cin>>c;
                 switch(c)
                 {
                 case 1:
                    {
                          ifstream outo;
                          outo.open("file2.txt");
                          if (outo.is_open())
                          {
                           while(!outo.eof())
                          {
                          outo>>line2;
                          cout<<endl<<" your current balance is  "<<line2<<endl;

                          }
                          }
                          outo.close();
                          break;

                    }
                 case 2:
                    {
                    ifstream outa;
                    outa.open("file2.txt");
                    if (outa.is_open())
                    {
                    while(!outa.eof())
                    {
                        outa>>line2;
                      cout<<"enter amount of money you want to withdraw (under 10000) :-> ";
                      cin>>cash;
                      if(cash > line2 )
                      {
                         cout<<" sorry this transition is cancelled ";
                      }
                      else
                      {
                        cash1 = line2-cash ;
                        cout<<endl;
                        cout<<" Your remaining balance is "<<cash1<<endl<<endl;
                        cout<<" Thanks for using our ATM services"<<endl;
                        outa.close();
                        ofstream inb;
                        inb.open("file2.txt");
                        if (inb.is_open())
                       {
                       inb<<cash1;
                       }
                       inb.close();
                        fstream inx;
                        inx.open("file3.txt", ios::app);
                        if (inx.is_open())
                       {
                       inx<<endl<<cash<<" rs"<<endl;
                       }
                       inx.close();
                      }
                    }
                    }
                    break;
                    }
                 case 3:
                    {
                     ifstream f("file3.txt");

                     if (f.is_open())
                     cout <<endl<< f.rdbuf();
                    f.close();
                    break;
                    }

                 case 4:
                    {
                 {
                   ifstream outa;
                    outa.open("file2.txt");
                    if (outa.is_open())
                    {
                    while(!outa.eof())
                    {
                        outa>>line2;
                      cout<<"enter amount of money you want to deposite :-> ";
                      cin>>cash2;

                        cash3 = line2+cash2 ;
                        cout<<endl;
                        cout<<" Your final balance is "<<cash3<<endl<<endl;
                        cout<<" Thanks for using our ATM services"<<endl;
                        outa.close();

                        ofstream q;
                        q.open("file2.txt");
                        if (q.is_open())
                        {
                            q<<cash3;
                        }
                        q.close();

                        fstream inx;
                        inx.open("file4.txt", ios::app);
                        if (inx.is_open())
                       {
                       inx<<endl<<cash2<<" rs"<<endl;
                       }
                       inx.close();

                    }
                    }

                    }

                        break;
                    }
                 case 5:
                    {

                 ofstream outf1;
                outf1.open("file1.txt");
                if (outf1.is_open())
             {
             cout<<"enter your new password :-";
             cin>>pass1;
             cout<<"enter your password again :-";
             cin>>pass2;
             if(pass1==pass2)
             {
                 outf1<<pass1;
                 cout<<"password change succesfully";
             }
             }

             else
            {

              cout<<"please enter valid password";
            }
                 outf1.close();
                break;

                    }

                 case 6:
                    {
                     ifstream f("file4.txt");

                     if (f.is_open())
                     cout <<endl<< f.rdbuf();
                    f.close();
                    break;
                    }

                 case 7:
                    {
                       break;
                    }
                 default:
                    {
                        cout<<endl<<" Please enter a valid choice"<<endl;
                    }
                 }





        }
         while(c  != 7);
        }
        else
             {
                cout<<endl<<"    PLEASE ENTER A VALID PIN ";
             }

        }

}

}
