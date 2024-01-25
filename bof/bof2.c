#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void init(){
    setvbuf(stdout,NULL,_IONBF,0);
    setvbuf(stdin ,NULL,_IONBF,0);
    setvbuf(stderr,NULL,_IONBF,0);
}

void win() {
  system("/bin/cat flag.txt");
}

void vuln() {
  init();
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