//Prints command line arguments
//ex: a.exe one two three

#include <stdio.h>

int main(int argc, char *argv[]){
  int i;

  for(i = 0; i < argc; i++){
    printf("%s \n", argv[i]);
  }

  return 0;
}
