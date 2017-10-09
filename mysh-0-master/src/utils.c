#include "utils.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int allocMemory(char ***ptr, int size)    // 반환값 없음, void 이중 포인터 매개변수 지정
{
    *ptr = malloc(size);    // void **ptr을 역참조하여 void *ptr에 메모리 할당
    return 1;
}

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
    //argv = malloc(1024); // allocate space
    allocMemory(argv, 1024);
  
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
  
}
