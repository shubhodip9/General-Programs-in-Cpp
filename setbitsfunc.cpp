#include<iostream>
using namespace std;
int setbits( int );
int main()
{
    int a , b;
    cout << "Enter the values of 'a' and 'b' :"<<endl;
    cin >> a >> b;

    cout<< "Total Number of Set Bits = "<< setbits(a) + setbits(b) <<endl;
}
int setbits (int n)
{
    int count = 0;
    while (n!=0)
    {
        if(n&1)
        count++;

        n = n >> 1;
    }
    return count;
}