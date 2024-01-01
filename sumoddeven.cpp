#include<iostream>
using namespace std;
int main()
{
    int limit, i=1,sum_even=0,sum_odd=0;
    cout<<"Enter the limit"<<endl;
    cin>>limit;

    while(i<=limit)
    {
        if(i%2==0)
        {
            sum_even+=i;
        }
        else{
            sum_odd+=i;
        }
        i++;
    }
    cout<<"Sum of Odd and Even Numbers: "<<sum_odd<<" "<<sum_even<<endl;
}