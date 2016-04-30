#include <cs50.h>
#include <stdio.h>

int main() 
{   
    //Get height; must be a number between 0 and 23
    int h;
    
    do {
        printf("Height: ");
        h = GetInt();
        if (h == 0) {
            return 0;
        }
    }    while (h < 0 || h > 23);
    
    //Print each line with spaces on the left and hashes on the right
    for (int i = 1; i <= h; i++) {
        for (int s = h - i; s > 0; s--) {
            printf(" ");
        }
        for (int p = 0; p <= i; p++) {
            printf("#");
        }
    printf("\n");
    }
}