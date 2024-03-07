#include<stdio.h>

void printNum(int arr[], int n);

int main() {
    int n;
    printf("Enter the size of integer array: ");
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printNum(arr, n);

    return 0;
}

void printNum (int arr[] , int n) {
    int sum = 0;
    for(int i=0; i<n; i++) {
       sum = sum + arr[i];
    }
    int avg = sum / n;
    for(int i=0; i<n; i++) {
        if(arr[i] > avg) {
            printf("%d ", arr[i]);
        }
    }
}