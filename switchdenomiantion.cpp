#include<iostream>
using namespace std;
int main()
{
    int money;
    cout<<"Enter the total amount"<<endl;
    cin>>money;
    int Rs100, Rs50, Rs20, Rs10;
    switch (1)
    {
    case 1:
    
        Rs100=money/100;
        money=money%100;
        break;

        
        Rs100=money/50;
        money=money%50;

        break;

        
        Rs100=money/20;
        money=money%20;
        break;

        
        Rs100=money/10;
        money=money%10;
        break;
    
    default: cout<<"Default Case"<<endl;
        break;
    }

    cout<<"Number of Rs. 100 Notes = "<<Rs100<<endl;
    cout<<"Number of Rs. 100 Notes = "<<Rs100<<endl;
    cout<<"Number of Rs. 100 Notes = "<<Rs100<<endl;
    cout<<"Number of Rs. 100 Notes = "<<Rs100<<endl;
}