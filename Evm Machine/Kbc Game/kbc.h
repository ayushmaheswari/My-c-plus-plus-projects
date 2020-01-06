#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

string name,fname,mname;

void detail()
{
cout<<" Enter your name :-> ";
cin>>name;
cout<<" Enter your father name :-> ";
cin>>fname;
cout<<" Enter your mother name :-> ";
cin>>mname;
system("pause");
system("cls");
}

void instruction()
{
cout<<endl<<endl<<endl<<endl;
cout<<"                             RULE AND INSTRUCTION FOR KBC"<<endl<<endl;

cout<<"            **********************************************************"<<endl;
cout<<"            * 1 >->     This game is totally based on computer       *"<<endl;
cout<<"            * 2 >-> prize money is virtual not be give you in rality *"<<endl;
cout<<"            * 3 >-> If you give wrong answer you will be terminated  *"<<endl;
cout<<"            * 4 >->      You can't take any lifeline                 *"<<endl;
cout<<"            **********************************************************"<<endl;
}

void prize()
{
cout<<endl<<endl;
cout<<"                  PRIZE MONEY FOR QUESTION"<<endl<<endl;
cout<<"            ********************************"<<endl;
cout<<"            *    13 >->  50,000,000 Rs     *"<<endl;
cout<<"            *    12 >->  10,000,000 Rs     *"<<endl;
cout<<"            *    11 >->   5,000,000 Rs     *"<<endl;
cout<<"            *    10 >->   2,500,000 Rs     *"<<endl;
cout<<"            *    09 >->   1,250,000 Rs     *"<<endl;
cout<<"            *    08 >->     640,000 Rs     *"<<endl;
cout<<"            *    07 >->     320,000 Rs     *"<<endl;
cout<<"            *    06 >->     160,000 Rs     *"<<endl;
cout<<"            *    05 >->      80,000 Rs     *"<<endl;
cout<<"            *    04 >->      40,000 Rs     *"<<endl;
cout<<"            *    03 >->      20,000 Rs     *"<<endl;
cout<<"            *    02 >->      10,000 Rs     *"<<endl;
cout<<"            *    01 >->       5,000 Rs     *"<<endl;
cout<<"            ********************************"<<endl;
}

void que13()
{
    int ans;
    cout<<"             QUESTION FOR RS 50000000"<<endl<<endl;
  cout<<"  13 >->  The muslim league as a pplitical party was formed in ?"<<endl<<endl;
  cout<<"      1. 1906                      2. 1909 "<<endl;
  cout<<"      3. 1915                      4. 1919"<<endl;

  cin>>ans;
  if(ans==1)
  {
      system("cls");
     cout<<endl<<"       Rs 50000000 is given to Mr "<<name<< "  son of shri "<<fname <<" & "<<mname<<endl;
      system("pause");
     system("cls");
  }
  else
    {
     cout<<"     sorry wrong answer "<<endl;
     cout<<"     correct answer is 1 "<<endl;
     system("pause");
     system("cls");
     cout<<endl<<"       Rs 10000000 is given to Mr "<<name<< "  son of shri "<<fname <<" & "<<mname<<endl;
     system("pause");
     system("cls");
    }
}



void que12()

{
    int ans;
    cout<<"             QUESTION FOR RS 10000000"<<endl<<endl;
  cout<<"  12 >->  The present lok sabha is the ?"<<endl<<endl;
  cout<<"      1. 13 lok sabha           2. 14 lok sabha  "<<endl;
  cout<<"      3. 15 lok sabha           4. 16 lok sabha"<<endl;

  cin>>ans;
  if(ans==4)
  {
      system("cls");
      que13();
  }
  else
    {
     cout<<"     sorry wrong answer "<<endl;
     cout<<"     correct answer is 4 "<<endl;
     system("pause");
     system("cls");
     cout<<endl<<"       Rs 5000000 is given to Mr "<<name<< "  son of shri "<<fname <<" & "<<mname<<endl;
     system("pause");
     system("cls");
    }
}




void que11()

{
    int ans;
    cout<<"             QUESTION FOR RS 5000000"<<endl<<endl;
  cout<<"  11 >->  Where is the railway staff collage located ?"<<endl<<endl;
  cout<<"       1. puna                 2. ahamdabad  "<<endl;
  cout<<"       3. vadodara             4. dehli "<<endl;

  cin>>ans;
  if(ans==3)
  {
      system("cls");
      que12();
  }
  else
    {
     cout<<"     sorry wrong answer "<<endl;
     cout<<"     correct answer is 3 "<<endl;
     system("pause");
     system("cls");
     cout<<endl<<"       Rs 2500000 is given to Mr "<<name<< "  son of shri "<<fname <<" & "<<mname<<endl;
     system("pause");
     system("cls");
    }
}


void que10()
{
int ans;
    cout<<"             QUESTION FOR RS 2500000"<<endl<<endl;
  cout<<"  10 >-> ICIC is the name of a ?"<<endl<<endl;
  cout<<"       1. chemical industry "<<endl;
  cout<<"       2. bureau"<<endl;
  cout<<"       3. corporation "<<endl;
  cout<<"       4. financial institution"<<endl;

  cin>>ans;
  if(ans==4)
  {
      system("cls");
      que11();
  }
  else
    {
     cout<<"     sorry wrong answer "<<endl;
     cout<<"     correct answer is 4 "<<endl;
     system("pause");
     system("cls");
     cout<<endl<<"       Rs 1250000 is given to Mr "<<name<< "  son of shri "<<fname <<" & "<<mname<<endl;
     system("pause");
     system("cls");
    }
}



void que9()
{
int ans;
    cout<<"             QUESTION FOR RS 1250000"<<endl<<endl;
  cout<<"  9 >-> Kathak is a classical dance of which place ?"<<endl<<endl;
  cout<<"       1. north india             2. tamilnadu  "<<endl;
  cout<<"       3. manipur                 4. kerala"<<endl;

  cin>>ans;
  if(ans==1)
  {
      system("cls");
      que10();
  }
  else
    {
     cout<<"     sorry wrong answer "<<endl;
     cout<<"     correct answer is 1 "<<endl;
     system("pause");
     system("cls");
     cout<<endl<<"       Rs 640000 is given to Mr "<<name<< "  son of shri "<<fname <<" & "<<mname<<endl;
     system("pause");
     system("cls");
    }
}



void que8()
{
int ans;
    cout<<"             QUESTION FOR RS 640000"<<endl<<endl;
  cout<<"  8 >-> The national anthem was first sung in the year ?"<<endl<<endl;
  cout<<"       1. 1911           2. 1913  "<<endl;
  cout<<"       3. 1936              4. 1935"<<endl;

  cin>>ans;
  if(ans==1)
  {
      system("cls");
      que9();
  }
  else
    {
     cout<<"     sorry wrong answer "<<endl;
     cout<<"     correct answer is 1 "<<endl;
     system("pause");
     system("cls");
     cout<<endl<<"       Rs 320000 is given to Mr "<<name<< "  son of shri "<<fname <<" & "<<mname<<endl;
     system("pause");
     system("cls");
    }
}

void que7()
{
int ans;
    cout<<"             QUESTION FOR RS 320000"<<endl<<endl;
  cout<<"  7 >-> Which of following dance prevalent in which state ?"<<endl<<endl;
  cout<<"       1. karnataka            2. orissa  "<<endl;
  cout<<"       3. karala               4. manipur"<<endl;

  cin>>ans;
  if(ans==3)
  {
      system("cls");
      que8();
  }
  else
    {
     cout<<"     sorry wrong answer "<<endl;
     cout<<"     correct answer is 3"<<endl;
     system("pause");
     system("cls");
     cout<<endl<<"       Rs 160000 is given to Mr "<<name<< "  son of shri "<<fname <<" & "<<mname<<endl;
     system("pause");
     system("cls");
    }
}




void que6()
{
    int ans;
    cout<<"             QUESTION FOR RS 160000"<<endl<<endl;
  cout<<"  6 >-> Dandia is a popular dance of ?"<<endl<<endl;
  cout<<"       1. punjab              2. gujrat "<<endl;
  cout<<"       3. tamil nadu          4. maharashtra"<<endl;

  cin>>ans;
  if(ans==2)
  {
      system("cls");
      que7();
  }
  else
    {
     cout<<"     sorry wrong answer "<<endl;
     cout<<"     correct answer is 2"<<endl;
     system("pause");
     system("cls");
     cout<<endl<<"       Rs 80000 is given to Mr "<<name<< "  son of shri "<<fname <<" & "<<mname<<endl;
     system("pause");
     system("cls");
    }

}

void que5()
{
int ans;
    cout<<"             QUESTION FOR RS 80000"<<endl<<endl;
  cout<<"  5 >-> The great victoria desert is located at ?"<<endl<<endl;
  cout<<"       1. canada              2. west africa "<<endl;
  cout<<"       3. australia           4. north america"<<endl;

  cin>>ans;
  if(ans==3)
  {
      system("cls");
      que6();
  }
  else
    {
     cout<<"     sorry wrong answer "<<endl;
     cout<<"     correct answer is 3"<<endl;
     system("pause");
     system("cls");
     cout<<endl<<"       Rs 40000 is given to Mr "<<name<< "  son of shri "<<fname <<" & "<<mname<<endl;
     system("pause");
     system("cls");
    }
}

void que4()
{
int ans;
    cout<<"             QUESTION FOR RS 40000"<<endl<<endl;
  cout<<"  4 >-> The hazards of radiation belt include ?"<<endl<<endl;
  cout<<"        1. deterioration of electronic circuit "<<endl;
  cout<<"        2. damage of solar cell in spacecraft "<<endl;
  cout<<"        3. adverse effect on living being     "<<endl;
   cout<<"       4. all of the above are correct       "<<endl;
  cin>>ans;
  if(ans==4)
  {
      system("cls");
      que5();
  }
  else
    {
     cout<<"     sorry wrong answer "<<endl;
     cout<<"     correct answer is 4"<<endl;
     system("pause");
     system("cls");
     cout<<endl<<"       Rs 20000 is given to Mr "<<name<< "  son of shri "<<fname <<" & "<<mname<<endl;
     system("pause");
     system("cls");
    }
}

void que3()
{
int ans;
    cout<<"             QUESTION FOR RS 20000"<<endl<<endl;
  cout<<"  3 >-> In which decade was the first solid state"<<endl;
  cout<<"   integrated circuit demonstrate"<<endl<<endl;
  cout<<"         1.  1950                2. 1960 "<<endl;
  cout<<"         3.  1970                4. 1980 "<<endl;
  cin>>ans;
  if(ans==1)
  {
      system("cls");
      que4();
  }
  else
    {
     cout<<"     sorry wrong answer "<<endl;
     cout<<"     correct answer is 1"<<endl;
     system("pause");
     system("cls");
     cout<<endl<<"       Rs 10000 is given to Mr "<<name<< "  son of shri "<<fname <<" & "<<mname<<endl;
     system("pause");
     system("cls");
    }
}

void que2()
{
 int ans;
    cout<<"             QUESTION FOR RS 10000"<<endl<<endl;
  cout<<"   2 >->  The word OS is define (in computer world) for ? "<<endl<<endl;
  cout<<"  1. order of significance         2. open system "<<endl;
  cout<<"  3. operating system              4. optical sensor "<<endl;
  cin>>ans;
  if(ans==3)
  {
      system("cls");
      que3();
  }
  else
    {
     cout<<"    sorry wrong answer "<<endl;
     cout<<"    correct answer is 3 "<<endl;
     system("pause");
     system("cls");
     cout<<"     Rs 5000 is given to Mr "<<name<< "  son of shri "<<fname <<" & "<<mname<<endl;
     system("pause");
     system("cls");
    }
}

void que1()
{
    int ans;
    cout<<"             QUESTION FOR RS 5000"<<endl<<endl;
  cout<<"  1 >-> Which part of database that hold only one type"<<endl;
  cout<<"  of information ?"<<endl<<endl;
  cout<<"         1.  Report                2. Field "<<endl;
  cout<<"         3.  Record                4. File "<<endl;
  cin>>ans;
  if(ans==2)
  {
      system("cls");
      que2();
  }
  else
    {
     cout<<"    sorry wrong answer "<<endl;
     cout<<"    correct answer is 2 "<<endl;
     system("pause");
      system("cls");
     cout<<"     Rs 0 is given to Mr "<<name<< "  son of shri "<<fname <<" & "<<mname<<endl;
     system("pause");
     system("cls");
    }
}


void ayush()
{
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;;
    cout<<"                                  WELCOME TO KON BANAGA CARODPATI   "<<endl<<endl;
    cout<<"                                   PRESENTED BY AYUSH MAHESWARI"<<endl<<endl<<endl;
    system("pause");
    system("cls");
}



void interance()
{
    int ch;
    cout<<endl<<endl<<endl;
    cout<<" Enter your choice :->"<<endl<<endl;
    cout<<"       *********************************"<<endl;
    cout<<"       *          1.    New game       *"<<endl;
    cout<<"       *          2.     Rules         *"<<endl;
    cout<<"       *          3.   Prize money     *"<<endl;
    cout<<"       *          4.     Quit      *"<<endl;
    cout<<"       *********************************"<<endl;
    cin>>ch;
    switch(ch)
    {

case 1:
    {
        system("pause");
        system("cls");
        detail();
        que1();
        break;
    }
case 2:
    {
        system("pause");
        system("cls");
        instruction();
        system("pause");
        system("cls");
        prize();
        system("pause");
        system("cls");
        detail();
        que1();
        break;
    }
case 3:
    {
        system("pause");
        system("cls");
        prize();
        system("pause");
        system("cls");
        detail();
        que1();
        break;
    }
case 4:
    {
        break;
    }
default:
    {
        cout<<"enter valid choice";
    }
    }

}
