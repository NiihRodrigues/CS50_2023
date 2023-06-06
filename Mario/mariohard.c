#include <stdio.h>

int main(void){
  int height;
  int hashcount = 1;
  int spacecout; 
  
  do {
    printf("Height: ");
    scanf("%d", &height);
  } while (height < 1 || height > 8);

  for (int i = 0; i < height; i++) {
    spacecout = height - hashcount;

    for (int j = 0; j < spacecout; j++) {
      printf(" ");
    }

    for (int k = 0; k < hashcount; k++) {
       printf("#");
    }
    
    printf("  ");
    
    for (int k = 0; k < hashcount; k++) {
       printf("#");
    }

    printf("\n");
    hashcount++;
  }

  return 0;
}