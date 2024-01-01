#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin.get(ch);
    int ascii=(int)ch;

    if(ascii>=65 && ascii<=97)
    {
        cout<<"UPPERCASE"<<endl;
    }
    else if(ascii>=97 && ascii<=122)
    {
        cout<<"lowercase"<<endl;
    }
    else if(ascii>=48 && ascii<=57)
    {
        cout<<"Numeric"<<endl;
    }
}