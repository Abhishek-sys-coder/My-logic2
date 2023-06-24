//A C++ program to add a whitespace at the begining of a string
#include <iostream>
using namespace std;

int strlen(char *str)
{
  int c=0;
  while(*str!='\0')
  {
    str++;
    c++;
  }
  return c;
}

void add_space(char *str)
{
    str[strlen(str)+1]=str[strlen(str)];
    int i;
    for(i=strlen(str)-1;i>=0;i--)
    {
      str[i+1]=str[i];
    }
    str[0]=' ';
}

int main()
{
  cout<<"Enter a string:"<<endl;
  char str[20];
  cin.getline(str,20);
  cout<<"Present length:"<<strlen(str)<<endl;
  add_space(str);
  cout<<"New String:"<<str<<endl;
  cout<<"New length:"<<strlen(str)<<endl;

}
