#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(int argc, char *argv[] ){

  DIR directory;
  if (argc > 1){
    directory = opendir(argv[1]);
  }
  printf("Statistics for directory: \n");
  printf("Total Directory Size:%i Bytes \n", fsize());
  return 0;
}

