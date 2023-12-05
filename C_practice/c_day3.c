#include <stdio.h>
#include <math.h>

int main(){
    // char lang = 'C'; //this is a character
    // float gpa = 2.05; //use %f, this is a float variable, has 4 bytes of memory 32 bits of precision, 6-7 digits
    // printf("Good morning, lets learn some %c today!\n", lang);
    // printf("Your average grade is %.2f\n", gpa);
    // char b[] = "john"; //this is a string (array of characters)
    // double d = 3.14; //use %lf, 8 bytes of memory 64 bits of precision, 15-16 digits
    /*
    basically, a double is more precise than a float,
    however also uses more memory
    */
    // to use a format specifier, use % sign, and then follow it with the corresponding variable type
    /*
    %c character
    %s string (array of characters)
    %f float
    %lf double
    %d integer
    */ 
    //to prevent a variable or value from being changed, use "const"
    const float PI = 3.14159;
    //this number now cannot be altered later unless the keyword "const" is removed
    // the division sign / will truncate if dividing integers
    // the % sign is "modulus", and will give the remainder of the division of two numbers
    // ++ and -- will increment and decrement by 1, respectively
    /*
    now for user input, we need to use our terminal instead of displaying in the output
    settings -> coderunner -> run in terminal
    */
    // after initializing variable, use the function 
    // scanf("%(whatever variable type you are accepting)", &variable);
    // scanf reads up to any whitespace...
    // if this is not satisfactory, use fgets(variable name, input size, stdin);
    // this function will include the new line character, if you want it on the same line, 
    // include string.h, and then string_var[strlen(string_var) - 1] = '\0';

    // for math functions in C, include math.h
    double A = sqrt(9);
    double B = pow(2,4);
    int C = round(3.14);
    int D;
    
    printf("%lf", B);
    return 0;


}