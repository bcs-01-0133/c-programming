#include <stdio.h>
#include <stdlib.h>
/*
    name:stephen ngugi
adm:bcs-01-0133/2026
    */

int main() {
    FILE *file;
    char title[100];

    // Open the file in append mode
    file = fopen("borrowed_books.txt", "a");

    if (file == NULL) {
        printf("Error: Unable to open the file.\n");
        return 1;
    }

    // Input book title
    printf("Enter the title of the borrowed book: ");
    fgets(title, sizeof(title), stdin);

    // Write the title to the file
    fprintf(file, "%s", title);

    // Close the file
    fclose(file);

    // Confirmation message
    printf("Book title has been successfully stored in borrowed_books.txt\n");

    return 0;
}
