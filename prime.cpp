#include<iostream>
using namespace std;
int main()
{
    int number, i=2;
    cout<<"Enter a number"<<endl;
    cin>>number;
    while(i<number)
    {
        if(number%i==0)
        {
            cout<<number<<" is not Prime"<<endl;
            return(0);
        }
        i++;
    }
    cout<<number<<" is Prime"<<endl;
}