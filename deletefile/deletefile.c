//Deletes a file

#include <stdio.h>

int main(){
  //function remove(fileName) deletes the file
  if(remove("deleteme.txt") == 0)
    printf("File deleted!");
  else
    printf("error");

  return 0;
}
