#include <unistd.h>
#include <stdio.h>
#include <errno.h>

//size of buffer in bytes
#define BUFFSIZE 4096

/*
-The STDIN_FILENO is the file descriptor 0 for STDIN.
-The STDIN_FILENO is the file descriptor 1 for STOUT.
   */
int main(void) {
  int n;
  char buff[BUFFSIZE];

  //Repeatedly reads 4096 bytes from STDIN until it is no longer and bytes left 0 or an error -1
  while ((n = read(STDIN_FILENO,buff,BUFFSIZE)) > 0) {
    //Writes buffer to STDOUT
    if (write(STDOUT_FILENO,buff,n) != n) {
      fprintf(stderr, "Write Error\n");
    }
  }

  //Tests for read error condition of -1
  if (n < 0) {
    fprintf(stderr,"Read Error\n");
  }
      
  return 0;
}
