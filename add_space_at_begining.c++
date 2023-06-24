//A C++ program to add a whitespace at the begining of a string
#include <iostream>
using namespace std;

int strlen(char *str) //custom made function for calculating the length of a string
{
  int c=0;
  while(*str!='\0')
  {
    str++;
    c++;
  }
  return c;
}

void add_space(char *str) //accepting the first memory address of the character array
{
    str[strlen(str)+1]=str[strlen(str)]; //adding the null character or the end of the string character '\0'
    int i;
    for(i=strlen(str)-1;i>=0;i--)
    {
      str[i+1]=str[i]; //shifting each character one index to the right
    }
    str[0]=' '; //finally replacing the first character with a space
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
