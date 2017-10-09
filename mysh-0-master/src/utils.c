#include "utils.h"
#include <stdio.h>
#include <string.h>

void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{

#define MAX 255

int num = 0;
int num1 = 0;
int i = 0;

char str[MAX];
char ch;

printf("input");
gets(str);

for(i=0;i<strlen(str);i++)
{

ch = str[i];
if(ch == ' ')
num++
}
  
num + 1 = num1;

printf (argc == %d \n, num1);
  
}
