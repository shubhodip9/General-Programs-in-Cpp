#include<iostream>
using namespace std;
bool isPrime( int );
int main()
{   
    int n;
    cout<<"Enter a number to check if it is Prime"<<endl;
    cin>> n ;
    if(isPrime( n ))
    cout<< n << " is a Prime Number" <<endl;
    else
    cout<< n <<" is not a Prime Number"<<endl; 

}
bool isPrime( int number)
{
    for(int i=2; i<number; i++)
    {
        if(number % i == 0)
        return 0;
    }
    return 1;
}