#include <iostream>
using namespace std;
class area
{
    public:

 void rectangle()
{
        int l, b, area;
            cout << "you are choice 1";
            cout << "this case perform area of rectangle\n";

            cout << "enter your rectangle length\n";
            cin >> l;
            cout << "enter your rectangle breath\n ";
            cin >> b;
            area = l * b;
            cout << "area of rectangle =" << area;
}
void circle()
{
    
            int radious;
            float area,pie = 3.14;

            cout << "you are choice 2 ";
            cout << "this case find area of circle\n";
            cout << "enter your radious value\n";
            cin >> radious;
            area = pie + radious * radious;
            cout << "area of circle =" << area;
}
void squre()
{
    
            int side,area;
            cout << "you are choice ";
            cout << "this case find area of squre\n";
            cout << "enter your side\n";
            cin >> side;
            area = side * side;
            cout << "area of squre " << area;
}
};

int main()
{
    area obj;
    int choice;
    cout<<"1 is area of rectangle\n 2 area of circle \n 3 area of squre \n";
        cout << "enter your choice   ";
        cin >>choice;
        

        switch (choice)
        {
        case 1:
        obj.rectangle();
        break ;
        case 2:
        obj.circle();
            break;
        case 3:
        obj.squre();
        break;
        default:
      cout << "invalid choice  try  again";
        
        }

    return 0;
}
