/* A C program to form a line using scanf() */

#include <stdio.h>

#include <string.h>

void form_line(char *last_line_address, char *text)
{

  while(*text!='\0')
  {
    *last_line_address=*text;

    last_line_address=last_line_address+1;
    text=text+1;

  }
  *last_line_address=' ';
  last_line_address=last_line_address+1;
  *last_line_address='\0';
}

int main()
{
  puts("Enter the length of your line");
  int line_length;
  scanf("%i", &line_length);
  
  char line[line_length+2];
  puts("Make sure the length of each of your words does not exceed 30 characters");
  char word[31];
  
  int index;
  *line='\0';
  
  while(strlen(line)<line_length)
  {
    scanf("%30s",word);
    index=strlen(line);
    form_line(line+index, word);
  }
  
  line[strlen(line)-1]='\0';
  
  printf("Length of the line formed : %lu\n", strlen(line));
  printf("%s\n",line);
  
  return 0;
}
