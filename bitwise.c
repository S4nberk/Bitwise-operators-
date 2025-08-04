#include <stdio.h>

int main() {
    int x, y, z;

    // Initial values 
    x = 4;   // 00000100
    y = 13;  // 00001101
    z = 7;   // 00000111

    // Print initial state
    printf("Initial situation: x = %d, y = %d, z = %d\n", x, y, z);

    // -----------------------------
    // Bitwise AND (&)
    // 00001101 (y)
    // 00000111 (z)
    // --------
    // 00000101 = 5
    x = y & z;
    printf("After x = y & z: x = %d\n", x);

    // -----------------------------
    // Bitwise OR (|)
    // 00001101 (y)
    // 00000111 (z)
    // --------
    // 00001111 = 15
    x = y | z;
    printf("After x = y | z: x = %d\n", x);

    // -----------------------------
    // Bitwise XOR (^)
    // 00001101 (y)
    // 00000111 (z)
    // --------
    // 00001010 = 10
    x = y ^ z;
    printf("After x = y ^ z: x = %d\n", x);

    // -----------------------------
    // Bitwise Shift Left (<<)
    // 00000100 (4)
    // << 1
    // --------
    // 00001000 = 8
    x = 4 << 1;
    printf("After x = 4 << 1: x = %d\n", x);

    // -----------------------------
    // Bitwise Shift Right (>>)
    // 00000100 (4)
    // >> 1
    // --------
    // 00000010 = 2
    x = 4 >> 1;
    printf("After x = 4 >> 1: x = %d\n", x);

    return 0;
}
