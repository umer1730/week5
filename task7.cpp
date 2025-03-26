#include<iostream>
#include<cmath>
using namespace std;
main()
{
    int distance,angle;
    cout<<"Enter the distance from the base of tree(in feet):";
    cin>>distance;
    cout<<"Enter the angle of elevation(in degrees):";
    cin>>angle;
    double angleradians = angle * (M_PI / 180.0);
    double height = distance * tan(angleradians);
    cout<<"The height of the tree is:"<<height<<"feet"<<endl;

}