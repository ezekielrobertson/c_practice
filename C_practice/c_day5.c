#include <stdio.h>
#include <math.h>
#include <string.h>

double square(double x){
    double result = pow(x, 2);
    return result;
}
int findMax(int x, int y){
    /*
    if(x>y && x!=y){
        return x;
    }
    else{
        return y;
    }
    traditional way to use if/else statement to do this
    if you wanted to use a ternary operator, check below
    */
    return (x > y) ? x : y;
}
int main(){
    /*
    int D = round(3.14);
    int E = floor(3.99);
    double F = fabs(-100);
    double G = log(3);
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);
    printf("\n%lf",F);
    */

    // const double PI = 3.14159;
    // double radius;
    // double circumference;
    // double area;

    // printf("\nEnter radius of a circle: ");
    // scanf("%lf", &radius);

    // circumference = 2*PI*radius;
    // area = PI*pow(radius,2);

    // printf("circumference: %lf", circumference);
    // printf("\narea: %lf", area);

    // double A;
    // double B;
    // double C;

    // printf("Enter side A: ");
    // scanf("%lf", &A);

    // printf("Enter side B: ");
    // scanf("%lf", &B);

    // C = sqrt(pow(A,2) + pow(B,2));

    // printf("Side C: %.0lf", C);

    int age; 
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18){
        printf("Your are now signed up!");
    }else if (age < 0){
        printf("You have not been born yet!");
    }else{
        printf("You are not old enough yet!");
    }

    char grade;
    printf("Enter a letter grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("perfect!\n");
            break;
        case 'B':
            printf("you did great!\n");
            break;
        case 'C':
            printf("you did okay\n");
            break;
        case 'D':
            printf("at least it is not an F\n");
            break;
        case 'F':
            printf("yikes bro\n");
            break;
        default:
            printf("please enter only valid grades");
    }

    // double x = square(3.14);
    // printf("%lf",x);

    // int max = findMax(3,4);
    // printf("%d", max);

    // for(int i = 10; i >= 1; i--){
    //     printf("%d\n", i);
    // }

    /*
    char name[25];
    printf("\nWhat's your name?: ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';
    printf("Hello, %s", name);

    while(strlen(name) == 0){
        printf("you did not enter your name...");
        printf("\nWhat's your name?: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }
    */


    // int number = 0;
    // int sum = 0;

    // do{
    //     printf("Enter a number above 0: ");
    //     scanf("%d", &number);
    //     if(number > 0){
    //         sum += number;
    //     }
    // }while(number > 0);
    // printf("sum: %d", sum);

    // int rows;
    // int columns;
    // char symbol;
    // printf("Enter number of rows: ");
    // scanf("%d", &rows);
    // printf("Enter number of columns: ");
    // scanf("%d", &columns);
    // scanf("%c", &symbol);
    // printf("Enter a symbol to use: ");
    // scanf("%c", &symbol);

    // for(int i = 1; i <= rows; i++){
    //     for(int j = 1; j <= columns; j++){
    //         printf("%c", symbol);
    //     }
    //     printf("\n");
    // }

    double prices[] = {5.0,10.0,15.0,25.0,20.0,0.0};

    char name[] = "Zeke";
    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++){
        printf("$%.2lf\n", prices[i]);
    }
    
    

    return 0;
}