
#include <iostream>
using namespace std;

int main()
{
  int amount;
  cout<<"Enter the amount"<<endl;
  cin>>amount;
  int Rs500, Rs200, Rs100 , Rs50 , Rs20 , Rs10, Rs5, Rs2, Rs1;

  switch(1)
  {
      case 1: Rs500=amount/500;
              amount=amount%500;
              cout<<"No of 500 Rupee notes required are="<<Rs500<<endl;

      case 2: Rs200=amount/200;
              amount=amount%200;
              cout<<"No of 200 Rupee notes required are="<<Rs200<<endl;

      case 3: Rs100=amount/100;
              amount=amount%100;
              cout<<"No of 100 Rupee notes required are="<<Rs100<<endl;

      case 4: Rs50=amount/50;
              amount=amount%50;
              cout<<"No of 50 Rupee notes required are="<<Rs50<<endl;

      case 5: Rs20=amount/20;
              amount=amount%20;
              cout<<"No of 20 Rupee notes required are="<<Rs20<<endl;
              
         
      case 6: Rs10=amount/10;
              amount=amount%10;
              cout<<"No of 10 Rupee notes required are="<<Rs10<<endl;
              

      case 7: Rs5=amount/5;
              amount=amount%5;
              cout<<"No of 5 Rupee notes required are="<<Rs5<<endl;
               

      case 8: Rs2=amount/2;
              amount=amount%2;
              cout<<"No of 2 Rupee notes required are="<<Rs2<<endl; 

      case 9: Rs1=amount/1;
              amount=amount%1;
              cout<<"No of 1 Rupee notes required are="<<Rs1<<endl;                  
           }
}