//Reads in a file a prints it to the terminal

#include <stdio.h>

int main(){

  //We'll read in 100 characters at a time
  char buffer[100];

  //Open file for reading
  FILE *fs = fopen("readme.txt", "r");

  //Prints file contents
  while(fgets(buffer, 100, fs) != NULL){
      printf("%s", buffer);
  }

  //Close stream
  fclose(fs);

  return 0;
}
