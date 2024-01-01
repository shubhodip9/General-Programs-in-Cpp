#include<iostream>
using namespace std;
int main()
{
    int a, b;
    char ch;

    cout<<"Enter value of A:"<<endl;
    cin>>a;
    
    cout<<"Enter value of B:"<<endl;
    cin>>b;

    cout<<"Enter the Character Symbol  of the Mathematical Operation"<<endl;
    cin>>ch;

    switch (ch)
    {
        case '+': cout<<(a+b)<<endl;
            break;

        case '-': cout<<(a-b)<<endl;
            break;

        case '*': cout<<(a*b)<<endl;
            break;

        case '/': cout<<(a/b)<<endl;
            break;        

        case '%': cout<<(a%b)<<endl;
            break;

        default: cout<<"Default Case"<<endl;
            break;
    }
}