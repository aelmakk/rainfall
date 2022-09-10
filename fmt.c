#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {
  char buf[1024];

  strncpy(buf, argv[1], sizeof(buf));
  printf(argv[1]);          
  printf("\n");
}
