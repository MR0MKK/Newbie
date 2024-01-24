#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void win() {
  system("/bin/cat flag.txt");
}

void vuln() {
  char padding[16];
  char buff[32];

  memset(buff, 0, sizeof(buff)); 
  memset(padding, 0xFF, sizeof(padding)); 


  printf("Input some text: ");
  gets(buff); 

}

int main() {
  setbuf(stdout, NULL);
  setbuf(stdin, NULL);
  vuln();
}