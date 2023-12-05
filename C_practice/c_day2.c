#include <stdio.h>
int main(){

    // this is an example of a comment
    /*

        This comment
        is a block
        comment and can take up multiple lines
        \n is for new lines (for strings)
        \t is for tab
    */
   // this is printing with new line characters and tabbing and quotation
   /*
    printf("i\nlike\npizza\n");
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");
    printf("this will be \"in quotation\"");
    */
   int x; //declaration
   x = 400; //initialization with a number (integer)
   int y = 300; //declaration + initialization

   int age = 21; //integer
   float gpa = 2.05; //floating point number
   char grade = 'C'; //single character
   char name[] = "Ronald"; //array of characters (string)

   printf("You are %d years old\n",age);
   printf("Hello, my name is %s.", name);
   return 0;

}
