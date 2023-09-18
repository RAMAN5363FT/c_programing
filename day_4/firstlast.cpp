#include<iostream>
using namespace std;
int main()
{
    int n,n1,n2,n3,d1,d2,d3,d4;
    cout<<"\n enter four digit";
    cin>>n;
    d1= n %10;
    n1 = n/10;
   
    d2= n1%10;
    n2 = n1/10;
  
    d3 = n2%10;
    n3 = n2/10;

    cout<<"\n addition of first and last term = "<<d1+n3;

    return 0;
}