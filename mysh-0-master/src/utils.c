#include "utils.h"
#include <stdio.h>
#include <string.h>

void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{
  
int num = 0;
int num1 = 0;
int i,j = 0;

char ch;

printf("input");
gets(command);

  /*
for(i=0;i<strlen(command);i++)
{
ch = command[i];
if(ch == ' ')
num++
}
num + 1 = num1;

printf ("argc == %d \n", num1);

*/

 // printf("argc == %d", argc);
  
 
printf("argv == { ");
{
   for (j = 0; j < argc; j++)  
                printf(" "%s" ", i, argv[i]);  
        exit(0);  
}
printf("}")

  
}
