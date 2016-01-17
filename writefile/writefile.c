//Writes to a file

#include <stdio.h>

int main(){

  //creates a new file or overrides file if it already exisits
  FILE *fp = fopen("hi.txt", "w");

  //Writes to the file we opened above
  fprintf(fp, "first line\n");

  //Close file
  fclose(fp);

  return 0;
}
