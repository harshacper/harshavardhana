#include <stdio.h>

// Function to find the largest and smallest elements in an array
void findLargestAndSmallest(int arr[], int size, int *largest, int *smallest) {
    *largest = arr[0];
    *smallest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > *largest) {
            *largest = arr[i];
        }
        if (arr[i] < *smallest) {
            *smallest = arr[i];
        }
    }
}

int main() {
    int n, size;
    
    printf("Enter the number of arrays you want to process: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("\nEnter the size of array %d: ", i + 1);
        scanf("%d", &size);
        
        int arr[size];
        printf("Enter %d elements for array %d: ", size, i + 1);
        for (int j = 0; j < size; j++) {
            scanf("%d", &arr[j]);
        }
        
        int largest, smallest;
        findLargestAndSmallest(arr, size, &largest, &smallest);
        
        printf("For array %d, Largest: %d, Smallest: %d\n", i + 1, largest, smallest);
    }
    
    return 0;
}
