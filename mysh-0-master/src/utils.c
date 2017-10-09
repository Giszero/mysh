#include "utils.h"
#include <stdio.h>
#include <string.h>

void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{
  
    int num = 0;
    int num1 = 0;
    int i,j = 0;
    char* temp_command;
    strncpy(temp_command, command, strlen(command));
    temp_command[strlen(command)] = '\0';

    char ch;

    for(i=0;i<strlen(command);i++)
    {
          ch = command[i];
          if(ch == ' ');
          num++;
     }
    
    num1 = num + 1;
  
    *argc = num1;  

    printf ("argc == %d \n", *argc);
  
    char *ptr = strtok(command, " ");
  
    while(ptr != NULL)
    {
       for(j=0; j<*argc ; j++)
       {
         printf("%s\n",ptr);
         strncpy(argv[j],ptr,strlen(ptr));
         argv[j][strlen(ptr)] = '\0';
         ptr = strtok(NULL," ");
  
        }
  
    }
  
}
