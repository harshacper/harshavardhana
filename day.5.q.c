#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000  // Maximum length of the concatenated string

// Function to concatenate two strings
void concatenateStrings(char destination[], const char source[]) {
    strcat(destination, source);
}

int main() {
    int n;
    printf("Enter the number of strings you want to concatenate: ");
    scanf("%d", &n);

    char result[MAX_LENGTH] = ""; 
    char str[100];
   
    getchar(); 

    for (int i = 0; i < n; i++) {
        printf("\nEnter string %d: ", i + 1);
        fgets(str, 100, stdin);

        
        size_t len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';
        }

        concatenateStrings(result, str);
    }

    printf("\nThe concatenated result is: %s\n", result);

    return 0;
}