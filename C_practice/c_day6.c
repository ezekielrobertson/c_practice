#include <stdio.h>

double giveTime(double speed, double distance){
    return distance/speed;
}

int main(){
    // speed calculator

    // double speed; 
    // double distance;
    // double time;

    // printf("%.2lf hours", giveTime(18, 67));

    //two "groups", three elements in said groups, so
    //the way to think is 2DArray[groups/rows][elements/columns]
    int rows = 2;
    int cols = 3;
    int numbers[rows][cols];
    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    int numbers2[3][3];
    int rows2 = sizeof(numbers2)/sizeof(numbers2[0]);
    int columns = sizeof(numbers2[0])/sizeof(numbers2[0][0]);
    printf("rows: %d\n", rows2);
    printf("columns %d\n", columns);
    numbers2[0][0] = 1;
    numbers2[0][1] = 2;
    numbers2[0][2] = 3;
    numbers2[1][0] = 4;
    numbers2[1][1] = 5;
    numbers2[1][2] = 6;
    numbers2[2][0] = 7;
    numbers2[2][1] = 8;
    numbers2[2][2] = 9;
    for(int i = 0; i < rows2; i++){
        for(int j = 0; j < columns; j++){
            printf("%d ", numbers2[i][j]);
        }
        printf("\n");
    }
    return 0;
}