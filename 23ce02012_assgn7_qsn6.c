#include<stdio.h>

int main() {
    int c;
    printf("Enter the number of cities: ");
    scanf("%d", &c);

    float temp[c][7];

    //input for temperatures
    for(int i=0; i<c; i++) {
        for(int j=0; j<7; j++) {
            printf("Enter the temperature of city %d for day %d: ", i+1, j+1);
            scanf("%f", &temp[i][j]);
        }
    }

    //calculation for average temperature
    for(int i=0; i<c; i++) {
        float avgTemp = 0;
        for(int j=0; j<7; j++) {
            avgTemp = avgTemp + temp[i][j];
        }
        avgTemp /= 7;
        printf("Average Temperature for city %d is: %.2f\n", i+1, avgTemp);
    }

    return 0;
}