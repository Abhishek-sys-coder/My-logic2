//decimal to binary

#include <iostream>
using namespace std;

int main()
{
  cout<<"Enter a number"<<endl;

  int n;

  cin>>n;

  int d=0,bin_temp=0, bin_final=0;

  while(n!=0)
  {
    d=n%2;
    bin_temp=bin_temp*10+d;
    n=n/2;
  }

  while(bin_temp!=0)
  {
    d=bin_temp%10;
    bin_final=bin_final*10+d;
    bin_temp=bin_temp/10;
  }

  cout<<"The Binary Equivalent : "<<bin_final<<endl;
  return 0;
}
