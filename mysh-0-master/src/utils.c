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

    for(i=0;i<strlen(command);i++)
    {
          ch = command[i];
          if(ch == ' ');
          num++;
     }
    
    num1 = num + 1;
  
    *argc = num1;  

    printf ("argc == %d \n", *argc);
  
    char ***command != strtok(command, " ");
  
    while(command != NULL)
    {
       for(j=0; j<*argc ; j++)
       {
         printf("&s\n",command);
         strncpy(argv[j],command,strlen(command));
         argv[j][strlen(command)] = '\0';
         command = strtok(NULL," ");
  
        }
  
    }
  
}
