#include<iostream>
using namespace std;
int main()
{
    int sv, ev, step;
    double cel;
    cout<<"Enter the Start Value, End Value and Step Limit"<<endl;
    cin>>sv;
    cin>>ev;
    cin>>step;
    cout<<"FAHRENHEIT"<<"\t"<<"CELSIUS"<<endl;
    while(sv<=ev)
    {
        
        cel=((5*(sv-32))/9);
        cout<<sv<<"\t"<<cel<<endl;
        sv+=step;
    }
}