#include<iostream>
using namespace std;
int main()
{
    float p,n,r,si;
    cout<<"\n enter the principle amount " ;
    cin>>p;
    cout<<"\n enter the no of year :";
    cin>>n;
    cout<<"\nenter the  number of rate :";
    cin>>r;

    si = (p*n*r)/100;

    cout<<"\n simple interest is : "<<si;
}