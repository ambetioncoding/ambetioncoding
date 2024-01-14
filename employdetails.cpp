#include<iostream>
using namespace std;
class employ
{
string name ;
string address;
int id;
double phno;

public:
void  getdeta ()
{    
    cout<<"\nenter the empoy name=";
    cin>>name;

    cout<<"\nenter the empoy address=";
    cin>>address;
    cout<<"\nenter the empoy phno=";
    cin>>phno;
    cout<<"\nenter the empoy id=";
    cin>>id;
    
    }
    void putdeta()
    {
        cout<<"\n The empoy name = "<<name;
        cout<<"\n The empoy address = "<<address;
        cout<<"\n The empoy phno = "<<phno;
        cout<<"\n The empoy id = "<<id;
        
    
    }
    

};

int main()
    {

int i;
employ s[10];
for ( i = 0; i<=6; i++)
s[i].getdeta();   
for ( i = 0; i<=6; i++)
{
    s[i].putdeta();
}


        return 0;
    }
