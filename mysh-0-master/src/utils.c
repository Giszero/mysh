#include "utils.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
          if(ch == ' ')
          {
             num++;
          }
     }
    
    num1 = num + 1;
  
    *argc = num1;  

    printf ("argc == %d \n", *argc);
/*
    char* temp_command;
    strncpy(temp_command, command, strlen(command));
    temp_command[strlen(command)] = '\0';
*/
  
  
    char **arrs; // declare arrs with pointer of char pointer.
	arrs = (char**)calloc(16, sizeof(char*)); // allocate 50*4bytes to arrs. it holds address of each string array.
	for(i=0;i<16;i++) {
		arrs[i] = (char*)calloc(sizeof(char),13); // allocate memory of each string
		strcpy(arrs[i],"TEST PROGRAM");
	}

	i = 0;
	while(i<16) { // print and free.
		printf("%x : %s", (int)arrs[i], arrs[i]);
		free(arrs[i]);
		i++;
	}
  
  /*
    *argv = (char **)calloc(64, sizeof(char*)); // allocate space
    for(i=0;i < 64;i++){
       *argv[i] = (char*)calloc(sizeof(char),16); // allocate memory of each string
    }
   
    char *ptr = strtok(command, " ");
    while(ptr != NULL)
    {
       for(j=0; j<*argc ; j++)
       {
         printf("%s\n",ptr);
         strncpy(*argv[j],ptr,strlen(ptr));
         printf("A");
         argv[j][strlen(ptr)] = '\0';
         printf("B");
         ptr = strtok(NULL," ");
         printf("C");
        }
  
    }
  */
}
