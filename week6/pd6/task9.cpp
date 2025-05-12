#include<iostream>
using namespace std;
main()
{
    int h,x,y;
    cout<<"Enter height:";
    cin>>h;
    cout<<"Enter x coordinates:";
    cin>>x;
    cout<<"Enter y coordinates:";
    cin>>y;
    if (x < 0 || x > 2 * h || y > 4 * h)
    {
        cout<<"outside";
    }
    bool insidelower = (x > 0 && x < 3*h && y > 0 && y < h);
    bool insideupper = (x > h && x < 2*h &&  y > h && y < 4*h);
   
    bool borderlower = ((x >= 0 && x <= 2*h) && (y == 0)) || ((x >= 0 && x <= 2*h) && (y == h)) || ((y >= 0 && y <= h) && (x == 0 || x == 2*h));
    bool borderupper = ((x >= h && x <= 2*h) && (y == h)) || ((x >= h && x <= 2*h) && (y == 4*h)) || ((y >= h && y <= 4*h) && (x == h || x == 2*h));
        if (insidelower || insideupper) 
        {
            cout << "inside" << endl;
        }
        else if (borderlower || borderupper) 
        {
            cout << "border" << endl;
        }
        else 
        {
            cout << "outside" << endl;
        }
    }