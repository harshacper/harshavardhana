#include <stdio.h>

int main() {
    int n, i, target, count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n]; 
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to count its occurrences: ");
    scanf("%d", &target);
    for(i = 0; i < n; i++) {
        if(arr[i] == target) {
            count++;
        }
    }
    printf("The element %d occurs %d times in the array.\n", target, count);
    return 0;
}
