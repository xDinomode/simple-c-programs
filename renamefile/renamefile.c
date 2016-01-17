//renames a file

#include <stdio.h>

int main(){
  //rename(oldname, newname)
  if(rename("renameme.txt", "newfilename.txt") == 0)
    printf("File renamed!");
  else
    printf("error");

  return 0;
}
