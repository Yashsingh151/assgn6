#include<stdio.h>

void reverseArray(int arr[], int start, int size) {
    int temp;
    if(start >=size)
    return;

    temp = arr[start];
    arr[start] = arr[size-1];
    arr[size-1] = temp;

    reverseArray(arr, start+1, size-1);
}

int main() {
    int size;

    printf("Enter the size of array: \n");
    scanf("%d", &size);

    int arr[size];
    printf("enter the value of array: \n");

    for(int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, 0, size);

    for(int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}