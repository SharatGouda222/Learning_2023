#include <stdio.h>

void printBits(unsigned int num) {
    unsigned int mask = 1 << 31;
    
    for (int i = 0; i < 32; i++) {
        int bit = (num & mask) ? 1 : 0;
        printf("%d", bit);
        
        if ((i + 1) % 4 == 0) {
            printf(" ");
        }
        
        mask >>= 1;
    }
    
    printf("\n");
}

int main() {
    unsigned int num;
    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);
    
    printf("Bits representation: ");
    printBits(num);

    return 0;
}