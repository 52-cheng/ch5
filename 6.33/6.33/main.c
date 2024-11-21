#include <stdio.h>

int binarySearch(int array[], int low, int high, int key) {
    if (low > high) {
        return -1; 
    }

    int mid = low + (high - low) / 2; 

    if (array[mid] == key) {
        return mid; 
    }
    else if (array[mid] > key) {
       
        return binarySearch(array, low, mid - 1, key);
    }
    else {
        
        return binarySearch(array, mid + 1, high, key);
    }
}

int main() {
    int array[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };
    int size = sizeof(array) / sizeof(array[0]);
    int key;

    printf("Please enter the value you want to search for: ");
    scanf_s("%d", &key);

    int result = binarySearch(array, 0, size - 1, key);

    if (result != -1) {
        printf("The value %d was found, located in the index %d\n", key, result);
    }
    else {
        printf("Value %d not found\n", key);
    }

    return 0;
}