#include<stdio.h>

int main() {
    int l, u;
    printf("Input lower limit: ");
    scanf("%d", &l);

    printf("Input upper limit: ");
    scanf("%d", &u);

    for(int i=l; i<=u; i++) {
        
        if(i % 2 == 0) {
            continue;
        }

        if(i == 3 || i == 5 || i == 7){
            printf("%d ", i);
        }

        if((i % 3 != 0 && i % 5 != 0) && (i % 3 != 0 && i % 7 != 0) && (i % 5 != 0 && i % 7 != 0)) {
            printf("%d ", i);
        }
    }

    return 0;
}