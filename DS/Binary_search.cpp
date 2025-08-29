#include <stdio.h>

int main() {
    int n = 8;
    int arr[n] = {14, 25, 36, 45, 47, 74, 89, 96};
    int data, found = 0;
    printf("Enter the data you want to search in array: ");
    scanf("%d", &data);
    int mid, left = 0, right = n - 1;
    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == data) {
            printf("\nData found at position: %d\n", mid);
            found = 1;
            break;
        }
        else if (data > arr[mid]) {
            left = mid + 1; 
        }
        else {
            right = mid - 1; 
        }
    }

    if (!found) {
        printf("\nData not found in the array.\n");
    }

    return 0;
}

