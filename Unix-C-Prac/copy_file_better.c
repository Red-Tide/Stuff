#include <stdio.h>

int main(void) {
  int c;

  //getc gets individual char and puts it in the individual byte buffer c
  while ((c = getc(stdin)) != EOF) {
    if (putc(c,stdout) == EOF) {
      fprintf(stderr,"Error Cannot Write\n");
    }
  }
  
  //ferror determines if an error has been set for the stream
  if (ferror(stdin)) {
      fprintf(stderr,"Input Error");
  } 

  return 0;
}
