#include <stdio.h>

void print_array(int *, int);
void insertion_sort(int *, int);
void swap(int *, int *);

int main() {
    int n;
    int arr[25];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements of the unsorted array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unsorted array:\n");
    print_array(arr, n);

    insertion_sort(arr, n);

    printf("\nSorted array by insertion sort:\n");
    print_array(arr, n);

    return 0;
}

void print_array(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

void swap(int *a, int *b) {
    int temp;

    temp = *b;
    *b = *a;
    *a = temp;
}

void insertion_sort(int *arr, int n) {
    int i, j, key;

    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}