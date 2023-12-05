#include <stdio.h>
#include <string.h>
//practicing print statements
/*
int main() {
    printf("Hello World!\n");
    printf("2 Cups: All Purpose Flour\n");
    printf("1 Cups: Unsalted Butter\t(Room Temperature)");
    printf("\n2/3 Cups: Granulated Sugar");
}
*/
//practice with pointers
/*
int main(){
    int k = 4000;
    int* ptr = &k;
    printf("%i\n", *ptr);
}
*/
//practice adding two numbers using pointers, scanner
/*
int main(){
    int num1, num2;
    printf("Please enter the first integer: ");
    scanf("%d", &num1);
    printf("Please enter the second integer: ");
    scanf("%d", &num2);
    int* ptr1 = &num1;
    int* ptr2 = &num2;
    int sum = *ptr1 + *ptr2;
    printf("The sum of the entered numbers is: ");
    printf("%i", sum);
}
*/

//practice converting from Fahrenheit to Celcius
int main(){
    char cha;
    double deg;
    int x = 1;
    while (x == 1){
        printf("Select F to go from F -> C, select C to go from C -> F, and select Q to quit: ");
        scanf(" %c", &cha);
        char *ptr1 = &cha;
        if (strcmp("F", ptr1) == 0 || strcmp("f", ptr1) == 0){
            printf("Please enter the degrees in Fahrenheit: ");
            scanf("%lf", &deg);
            double* ptr = &deg;
            double c = (*ptr - 32) * (0.5556);
            printf("%.2f", *ptr);
            printf(" degrees Fahrenheit is ");
            printf("%.2f", c);
            printf(" degrees Celsius!\n");
        }else if(strcmp("C", ptr1) == 0 || strcmp("c", ptr1) == 0){
            printf("Please enter the degrees in Celsius: ");
            scanf("%lf", &deg);
            double* ptr = &deg;
            double f = (*ptr * (9.0/5.0)) + 32;
            printf("%.2f", *ptr);
            printf(" degrees Celsius is ");
            printf("%.2f", f);
            printf(" degrees Fahrenheit!\n");
        }else if(strcmp("Q", ptr1) == 0 || strcmp("q", ptr1) == 0){
            printf("Thank you for using the temperature calculator!\n");
            x = 0;
        }else{
            printf("That is not an acceptable input, please try again.\n");
        }
    }
    return 0;
}


