#include <stdio.h>
#include <string.h>
#include <stdbool.h>


bool isPalindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    printf("Enter the number of strings you want to check: ");
    scanf("%d", &n);

    char str[100]; 
    getchar(); 

    for (int i = 0; i < n; i++) {
        printf("\nEnter string %d: ", i + 1);
        fgets(str, 100, stdin);

        
        size_t len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';
        }

        if (isPalindrome(str)) {
            printf("String %d is a palindrome.\n", i + 1);
        } else {
            printf("String %d is not a palindrome.\n", i + 1);
        }
    }

    return 0;
}
