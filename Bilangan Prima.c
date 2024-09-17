#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n, i, isPrime = 1;
    
    // Membaca input
    scanf("%d", &n);
    
    // Kasus khusus untuk bilangan <= 1
    if (n <= 1) {
        printf("BUKAN\n");
    } else {
        // Cek pembagi dari 2 sampai akar kuadrat n
        for (i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = 0; // Menandakan bukan prima
                break;
            }
        }
        
        // Menampilkan hasil
        if (isPrime) {
            printf("PRIMA\n");
        } else {
            printf("BUKAN\n");
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
