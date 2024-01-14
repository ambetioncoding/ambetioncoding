#include<iostream>
using namespace std;
class A
{
  public:
    void display()
  {
     cout<<"base class";

  }  
};
class B
{

    public:
    void display()
    {
        cout<<"drive class";

    }
};
 
 int  main()
{
  /* A *bptr; A aa;   //jab hamra pointer  or object dono base class ka h 
                     //tab  base class ka he function  call hoga 
    aa.display();
    */
 
 
  /* A *bptr;  B aa; // jab hamra pointer base class ka hoga or object hamra derive class ka hoga tab 
//tab derive class ka fuinction call hoga   ..... jab  virtual keyword ka use nhi hoga 
 aa.display();
   */
   


   /* A *bptr;  B aa; // jab hamra pointer base class ka hoga or object hamra derive class ka hoga tab 

   //tab BASE  class ka fuinction call hoga   ..... JAB VIRTUAL KEYWORD KA  USE HOGA //RUN TIME POLYMORPHIM
 aa.display();
   */

   A *bptr;  B aa;  
aa.display();
   
    return 0;
} 