#include<iostream>
using namespace std;

main(){
    int n1,n2,gcd,lcm,temp;
    cout<<"first:";
    cin>>n1;
    cout<<"second:";
    cin>>n2;
    int a=n1,b=n2;
    while(n2!=0){
        temp =n2;
        n2=n1%n2;
        n1=temp;
    }
    gcd=n1;
    lcm=a*b/n1;
    cout<<gcd<<endl;
    cout<<lcm;
}