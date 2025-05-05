#include <iostream>
using namespace std;
string calculatePoolState(int V, int P1, int P2, float H) 
{
    float waterFromP1 = P1 * H;
    float waterFromP2 = P2 * H;
    float totalWater = waterFromP1 + waterFromP2;
    if (totalWater <= V) 
    {
        int percentFull = (totalWater / V) * 100;
        int percentP1 = (waterFromP1 / totalWater) * 100;
        int percentP2 = (waterFromP2 / totalWater) * 100;
        cout<<"The pool is"+ to_string(percentFull) + "% full. Pipe 1: " +
               to_string(percentP1) + "%. Pipe 2: " + to_string(percentP2) + "%.";
    } 
    else 
    {
        float overflow = totalWater - V;
        cout<<"For " + to_string(H) + " hours the pool overflows with " +
               to_string(overflow) + " liters.";
    }
}
main() 
{
    int V,P1,P2;
    float H;
    cout<<"Enter pool volume (V):";
    cin>>V;
    cout<<"Enter pipe 1 flow rate (P1):";
    cin>>P1;
    cout<<"Enter pipe 2 flow rate (P2):";
    cin>>P2;
    cout<<"Enter hours the worker is absent (H):";
    cin>>H;
    string result = calculatePoolState(V, P1, P2, H);
    cout<<result<<endl;
    return 0;
}
