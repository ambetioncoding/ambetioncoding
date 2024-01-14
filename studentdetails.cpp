#include<iostream>
using namespace std;
class student
{
string name ;
int roll,id;
double phno;

public:
void  getdeta ()
{    
    cout<<"\nenter the student name=";
    cin>>name;

    cout<<"\nenter the student roll=";
    cin>>roll;
    cout<<"\nenter the student phno=";
    cin>>phno;
    cout<<"\nenter the student id=";
    cin>>id;
    
    }
    void putdeta()
    {
        cout<<"\n The student name = "<<name;
        cout<<"\n The student roll = "<<roll;
        cout<<"\n The student phno = "<<phno;
        cout<<"\n The student id = "<<id;
        
    
    }
    

};

int main()
    {

int i;
student s[10];
for ( i = 0; i<=6; i++)
{
s[i].getdeta();    /* code */
}
for ( i = 0; i<=6; i++)
{
    s[i].putdeta();
}


        return 0;
    }
