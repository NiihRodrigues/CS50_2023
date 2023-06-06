#include <stdio.h>
#include <ctype.h>

int main(int argc, char* argv[]){
   int key = 1;
   char* nome = "Hello Zeta!";
  
   for(int i = 0; nome[i] != '0'; i++) {
      if(isalpha(nome[i])) {
      if(isupper(nome[i])) {
          printf("%c", (nome[i] - 'A' + key) % 26 + 'A');
      }
      if(islower(nome[i])) {
         printf("%c", (nome[i] - 'a' + key) % 26 + 'a');
      }
      }
      if(isspace(nome[i])) {
         printf("%c", nome[i]);
      }
   }
   printf("\n");
} 
