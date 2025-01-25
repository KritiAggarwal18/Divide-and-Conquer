#include <stdio.h>
#include <conio.h>
int main() {
    int low, high, mid, n, i, search;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter the elements in sorted order:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to search: ");
    scanf("%d", &search);
    
    low = 0;
    high = n - 1;
    
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] < search) {
            low = mid + 1;
        } else if (arr[mid] == search) {
            printf("%d element is found at position %d.\n", search, mid + 1);
            return 0;
        } else {
            high = mid - 1;
        }
    }
    
    printf("%d element is not found in the array.\n", search);
    return 0;
}

