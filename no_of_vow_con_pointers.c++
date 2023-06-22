//A C++ program to count the number of vowels and consonants
#include <iostream>
using namespace std;

void strupr(char *word) //A function to convert a lowercase string into an uppercase one
{
  while(*word!='\0')
  {
    if(*word>=97 && *word<=122)
      *word-=32;
    word++;
  }
}

void count_v_c(char *word,int *c,int *v) //A function to count the number of vowels and consonants
{
  strupr(word);
  while(*word!='\0')
  {
    if(*word=='A' || *word=='E' || *word=='I' || *word=='O' || *word=='U')
      *v=*v+1;
    else if(*word>='A' && *word<='Z')
      *c=*c+1;

    word++;
  }
}

int main()
{
  cout<<"Enter a word: ";
  char word[20];
  cin>>word;
  int con=0;
  int vow=0;
  count_v_c(word,&con,&vow);
  cout<<endl;
  cout<<"Number of vowels: "<<vow<<endl;
  cout<<"Number of consonants: "<<con<<endl;
  return 0;
}
