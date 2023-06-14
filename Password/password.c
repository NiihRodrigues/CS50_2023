#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool valid(password);

int main() {
    bool password = "HeLl0!";
    if(valid(password)){
        printf("Your password is valid!\n");
    } else {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }


   
}
