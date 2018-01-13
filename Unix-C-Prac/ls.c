#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <dirent.h>

int main(int argc, char** argv) {
  
  DIR *directory;
  struct dirent *dirp;
  
  //Check for Incorrect Number of Arguments
  if (argc != 2) {
    fprintf(stderr,"Incorrect number of arguments: takes exactly 1 argument.\n");
    return 1;
  }
  /////////////////////////////////////////

  //Use argument supplied to open directory
  directory = opendir(argv[1]);

  //Check that it is a valid directory print an error if it is not...
  if (directory == NULL) {
    fprintf(stderr,"%s is not a valid directory\n",argv[1]);
  }

  while ((dirp = readdir(directory)) != NULL) {
    printf("%s\n",dirp->d_name);
  }

  closedir(directory);

  return 0;
}
