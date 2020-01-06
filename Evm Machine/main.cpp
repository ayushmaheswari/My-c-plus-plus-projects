#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string year;
    int i,n,v,b=0,c=0,a=0,ip=0,no=0;
    cout<<endl;
    cout<<"     ***************************"<<endl;
    cout<<"     ****       E-V-M       ****"<<endl;
    cout<<"     ***************************"<<endl<<endl;
    cout<<"   Enter the year in which election is held :-> ";
    cin>>year;
    cout<<endl;
    cout<<"     ******************************************"<<endl;
    cout<<"     * 1 :->   BHARTIYA JANTA PARTY (B-J-P)   *"<<endl;
    cout<<"     * 2 :-> INDIAN NATIONAL CONGRESS (I-N-S) *"<<endl;
    cout<<"     * 3 :->    AAM ADAMI PARTY (A-A-P)       *"<<endl;
    cout<<"     * 4 :->    INDIPENDENT PARTY (I-P)       *"<<endl;
    cout<<"     ******************************************"<<endl<<endl;
    cout<<"     Enter the number of voter :-> ";
    cin>>n;

    fstream out;
    out.open("file.txt",ios::app);
    out<<"           Election held in year "<<year<<endl<<endl;
    out<<"   Total no of voter is "<<n<<endl;
    cout<<endl<<" Select your vote between 1 to 4"<<endl<<endl;
    for(i=0; i<n; i++)
    {
        cout<<"voter no "<<i+1<<" enter your vote :-> ";
        cin>>v;
        if(v==1)
            b++;
        else if(v==2)
            c++;
        else if(v==3)
            a++;
        else if(v==4)
            ip++;
            else
            no++;
    }
    cout<<endl;
    out<<"   Total no of vote scored by B-J-P is "<<b<<endl;
    out<<"   Total no of vote scored by I-N-S is "<<c<<endl;
    out<<"   Total no of vote scored by A-A-P is "<<a<<endl;
    out<<"   Total no of vote scored by I-P is "<<ip<<endl<<endl;

   if(b>c && b>a && b>ip)
   {
      cout<<" B-J-P win the election by scoring "<<b<<" votes"<<" out of " <<n<<endl;
      out<<" B-J-P win the election by scoring "<<b<<" votes"<<" out of " <<n<<endl;
   }
   else if(c>b && c>a && c>ip)
   {
      cout<<" I-N-C win the election by scoring "<<c<<" votes"<<" out of " <<n<<endl;
      out<<" I-N-C win the election by scoring "<<c<<" votes"<<" out of " <<n<<endl;
   }
   else if(a>b && a>c && a>ip)
   {
      cout<<"  A-A-P win the election by scoring "<<a<<" votes"<<" out of " <<n<<endl;
       out<<"  A-A-P win the election by scoring "<<a<<" votes"<<" out of " <<n<<endl;

   }
   else if(ip>a && ip>c && ip>b)
   {
      cout<<"  I-P win the election by scoring "<<ip<<" votes"<<" out of " <<n<<endl;
      out<<"  I-P win the election by scoring "<<ip<<" votes"<<" out of " <<n<<endl;
   }
   else if (b==c || b==a || b==ip || c==a || c==ip || a==ip)
   {
       cout<<"  The election is draw  "<<endl;
       out<<"  The election is draw  "<<endl;
   }
   else{

   }
   out<<endl<<"**********************************************************"<<endl<<endl;
   out.close();
}
