#include<iostream>
using namespace std;
void find_nCr(int , int);
int fact(int);
int main()
{
    int n , r ;
    cout<<"Enter 'n' & 'r' :"<<endl;
    cin>> n >> r ;
    find_nCr(n , r);
}
void find_nCr(int n, int r)
{
    int ans = fact(n) / ( fact(r) * fact(n-r) );
    cout<<"Ans of "<<n<<"C"<<r<<" = "<<ans<<endl;
}
int fact(int num)
{
    int i, factorial = 1;
    for(i=1;i<=num;i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}