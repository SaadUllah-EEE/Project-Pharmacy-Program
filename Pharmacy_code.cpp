#include<iostream>
#include<fstream>
using namespace std;
class customer
{
private:
string name;
int age;
string add;
int p_no;
public:
void account_reg(string n, int a, string ad,int p )
{
    name="n";
    age=a;
    add="ad";
    p_no=p;
}
friend void account_registration();
};
class seller
{
private:
int id_no;
string name;
public:
void set()
{
    id_no=1430;
    name="miran";
}
friend void seller_authentication();
};

class medicine
{
int serial_no;
string name;
int stock;
};
void medicine_data()
{  
    ifstream in;
    in.open("medicine_record.txt");
    for(int i=0;i<100;i++)
    {

    }
}
void seller_authentication()
{
string s_n;
int s_id;
  cout<<endl<<"Please enter your credentials:";
  cout<<endl<<"Enter your name:";
  cin>>s_n;
  cout<<endl<<"Enter your ID no:";
  cin>>s_id;
  seller sd;
  if((s_n == sd.name) && (s_id == sd.id_no))
  {
    cout<<endl<<"Login Successful!";

  }
  else
  {
    cout<<"Incorrect Credentials!"<<endl<<" Program Terminated!";
  }

}


void account_registration()
{
    customer c;
    string na;
    int ag;
    int pn;
    string address;
    cout<<"Please register your account and you may proceed"<<endl;
    cout<<" Please enter your Name: "<<endl;
    cin>>na;
    cout<<endl<<"Enter Age: ";
    cin>>ag;
    cout<<"\nEnter Address: ";
    cin>>address;
    cout<<"\nEnter your Phone no:";
    cin>>pn;
    c.account_reg(na,ag,address,pn);
}
void buy_medicine()
{
  
}

int main()
{
    
    bool opt=true;
    while(opt==true)
    {
    int status;
    cout<<"\nWelcome!!\n";
    cout<<"PLease enter your status: \n1) Customer\n2) Pharmacist\n3) Exit Program"<<endl;
    cin>>status;
    if(status==1)
    {
         cout<<"\nWelcome to  Online Pharmacy\n";
         account_registration();
        cout<<"\nAccount successfully registered!\n";
    }    
    else if(status==2)
    {
       seller_authentication();
    }
    else
    {
      opt=false;
    }
    }
return 0;

}
