#include <string.h>

#include "commands.h"

int do_cd(int argc, char** argv) {
  if (!validate_cd_argv(argc, argv))
    return -1;
  // TODO: Fill it!
  return 0;
}

int do_pwd(int argc, char** argv) {
  if (!validate_pwd_argv(argc, argv))
    return -1;

  char buff[1024] = {0};
  
  getcwd(buff, 1024) //save to buff
  printf( "작업 디렉토리: %s\n", buff);
  
  return 0;
}

int validate_cd_argv(int argc, char** argv) {
  // TODO: Fill it!
  return 1;
}

int validate_pwd_argv(int argc, char** argv) {
 //argc(1) != error
  if(argc != 1){
    printf("pwd must need argc=1");
    return 0;
  }
  return 1;
}
