#include<stdio.h>

int main() {
    int r, t;
    printf("Enter the size of reference array: ");
    scanf("%d", &r);

    printf("Enter the size of test array: ");
    scanf("%d", &t);

    int arr1[r], arr2[t];

    printf("Enter values for reference array: \n");
    for(int i=0; i<r; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter values for test array: \n");
    for(int i=0; i<t; i++) {
        scanf("%d", &arr2[i]);
    }

    int check = 0;
    for(int i=0; i<t; i++) {
        for(int j=0; j<r; j++) {
            if(arr2[i] == arr1[j]){
                check += 1;
                break;
            }
        }
    }

    if(check == t ) {
        printf("arr2[] is a subset of arr1[]");
    } else {
        printf("arr2[] is not a subset of arr1[]");
    }

    return 0;
}