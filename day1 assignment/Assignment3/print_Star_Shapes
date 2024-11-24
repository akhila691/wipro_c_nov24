#include <stdio.h>

// A) Right-Angled Triangle
void printRightAngledTriangle(int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// B) Pyramid (Equilateral Triangle)
void printPyramid(int N) {
    for (int i = 1; i <= N; i++) {
        // Print spaces for the left padding
        for (int j = i; j < N; j++) {
            printf(" ");
        }
        // Print stars for the pyramid
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
}

// C) Hollow Square
void printHollowSquare(int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (i == 1 || i == N || j == 1 || j == N) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// D) X Shape
void printXShape(int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j || i + j == N - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// E) X Shape inside Hollow Square
void printXInHollowSquare(int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == 0 || i == N - 1 || j == 0 || j == N - 1 || i == j || i + j == N - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// F) Hollow Rhombus
void printHollowRhombus(int N) {
    for (int i = 1; i <= N; i++) {
        // Print leading spaces for the hollow rhombus
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print stars and spaces
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (int i = N - 1; i >= 1; i--) {
        // Print leading spaces for the hollow rhombus
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print stars and spaces
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// G) Hexagon (Benzene Ring C6H6)
void printHexagon(int N) {
    // Upper part of the hexagon
    for (int i = 1; i <= N; i++) {
        // Print leading spaces for hexagon's upper part
        for (int j = i; j < N; j++) {
            printf(" ");
        }
        // Print stars for hexagon
        for (int j = 1; j <= (2 * N - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    // Lower part of the hexagon
    for (int i = 1; i < N; i++) {
        // Print spaces for the lower part
        for (int j = 1; j <= i; j++) {
            printf(" ");
        }
        // Print stars for the lower part
        for (int j = 1; j <= (2 * N - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int N;
    
    // Input: number of lines for the shapes
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // A) Right Angled Triangle
    printf("\nA) Right Angled Triangle:\n");
    printRightAngledTriangle(N);

    // B) Pyramid (Equilateral Triangle)
    printf("\nB) Pyramid (Equilateral Triangle):\n");
    printPyramid(N);

    // C) Hollow Square
    printf("\nC) Hollow Square:\n");
    printHollowSquare(N);

    // D) X Shape
    printf("\nD) X Shape:\n");
    printXShape(N);

    // E) X Shape inside Hollow Square
    printf("\nE) X Shape inside Hollow Square:\n");
    printXInHollowSquare(N);

    // F) Hollow Rhombus
    printf("\nF) Hollow Rhombus:\n");
    printHollowRhombus(N);

    // G) Hexagon (Benzene Ring C6H6)
    printf("\nG) Hexagon (Benzene Ring C6H6):\n");
    printHexagon(N);

    return 0;
}
