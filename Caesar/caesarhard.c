#include <stdio.h>
#include <ctype.h>

int main(int argc, char* argv[]) {
   int key;
   printf("Type the Key: ");
   scanf("%d", &key);

   char* name = "Hello, Zeta!";

   for(int i = 0; name[i] != '0'; i++) {
      if(isalpha(name[i])) {
         if(isupper(name[i])) {
            printf("%c", (name[i] - 'A' + key) % 26 + 'A');
         }
         if(islower(name[i])) {
            printf("%c", (name[i] - 'a' + key) % 26 + 'a');
         }
      }
      if(ispunct(name[i])) {
         printf("%c", name[i]);
      }
      if(isspace(name[i])) {
         printf("%c", name[i]);
      }
   }
   printf("\n");
} 