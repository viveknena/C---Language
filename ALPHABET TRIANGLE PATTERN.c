#include <stdio.h>

int main() {
    int i, j, rows;
    char alphabet = 'A'; // Start with 'A'

    printf("Enter the number of rows for the alphabet triangle: ");
    scanf("%d", &rows);

    printf("The Right-Angled Alphabet Triangle Pattern:\n");

    // Outer loop for the number of rows
    for (i = 0; i < rows; i++) {
        // Inner loop for printing alphabets in each row
        for (j = 0; j <= i; j++) {
            printf("%c", alphabet + i); // Print the current alphabet
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}