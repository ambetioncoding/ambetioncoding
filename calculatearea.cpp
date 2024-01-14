#include<iostream>
#include<conio.h>
using namespace std;

class area
{
int l,b;
float side;
public:
 void rectangle()
 {
    cout<<"enter the length ";
    cin>>l;
    cout<<"enter the breath  ";
    cin>>b;
   float area=l*b;
    cout<<"\t Area of rectangle"<<area;
}
void squre()
{
    cout<<"enter the side  ";
    cin>>side;
    int area=side*side;
    cout<<"\t Area of squre    "<<side;
}
 void trangle()
 {
    int height ,breath ;
    float area;
    cout<<"enter thangle height  ";
    cin>>height;
    cout<<"enter the breath  ";
    cin>>breath;
    area=height*breath/2;
    cout<<"/t Area of trangle     "<<area;

 }
 void circle()
 {
    int r;
   float pie=3.14;
    float area;
    cout<<"enter the circle radious   ";
    cin>>r;
    area=pie*r*r;
    cout<<"\t the erea of circle   "<<area;
 }


};
int main()
{

    area a;
    int x;
    cout<<"1 is area of rectangle\n 2 area of squre\n area\n 3 area of taingle\n area of circle  \n";
    cout<<"enter the choice   ";
    cin>>x;

    switch (x)
    {
    case 1:
    a.rectangle();
        break;
        case 2:
        a.squre();
        break;
         case 3:
         a.trangle();
         break;
         case 4:
         a.circle();
         break;
    
    default:
    cout<<"invailed choice";
        break;
    }
    return 0;

}