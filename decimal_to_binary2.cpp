//decimal to binary

#include <iostream>
#include <string>

using namespace std;

int main()
{
  cout<<"Enter a number"<<endl;

  int n;

  cin>>n;

  int d=0,bin_final=0;

  string bin_temp="";

  while(n!=0)
  {
    d=n%2;
    bin_temp=to_string(d)+bin_temp;
    n=n/2;
  }

  bin_final=stoi(bin_temp);

  cout<<"The Binary Equivalent : "<<bin_final<<endl;
  return 0;
}
