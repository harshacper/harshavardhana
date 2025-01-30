 #include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100  


void reverseString(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    int n;
    printf("Enter the number of strings you want to reverse: ");
    scanf("%d", &n);

    char str[MAX_LENGTH]; 
    getchar(); 

    for (int i = 0; i < n; i++) {
        printf("\nEnter string %d: ", i + 1);
        fgets(str, MAX_LENGTH, stdin);

        
        size_t len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';
        }

        reverseString(str);

        printf("Reversed string %d: %s\n", i + 1, str);
    }

    return 0;

}