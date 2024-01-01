#include<iostream>
using namespace std;
int main()
{
    int n, m, x=0;
    cout<<"Enter a number to check if it is a power of 2"<<endl;
    cin>>n;
    m=n;

    while(m!=1)
    {
        if(m%2!=0)
        {   
            cout<<"False"<<endl;
            return(0);
        }
        cout<<"Remainder = "<<(m%2)<<endl;
        m/=2;
        x+=1;
    }
    cout<<"True: 2^"<<x<<" = "<<n<<endl;
}