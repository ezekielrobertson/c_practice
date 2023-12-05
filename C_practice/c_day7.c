#include <stdio.h>
#include <ctype.h>

void printAge(int *pAge){
    printf("You are %d years old", *pAge);
}
int main(){
    // char questions[][100] = {"Quesion 1", "Question 2", "Question 3", "Question 4"};
    // char options[][100] = {"A","B", "C", "D","A","B", "C", "D","A","B", "C", "D","A","B", "C", "D"};
    // char answers[4] = {"A","B", "C", "D"};
    // int numbersOfQuesions = sizeof(questions)/sizeof(questions[0]);
    // char guess;
    // int score;
    // for(int i = 0; i < numbersOfQuesions; i++){
    //     printf("%s\n", questions[i]);
    //     for(int j = (i*4); j < (i * 4) + 4; j++){
    //         printf("%s\n", options[j]);
    //     }
    // }


    //pointers

    /*
    int age = 21;
    int *pAge = &age;
    printf("address of age: %p\n", &age);
    printf("value of pAge: %p\n", pAge);


    printf("value of age: %d\n", age);
    printf("value at stored address: %d\n", *pAge);
    
    printAge(pAge);
    */

    // FILE *pF = fopen("test.txt","a");
    // fprintf(pF,"\nThis is how you write to a file, now appending we use the 'a'");
    // fclose(pF);
    // if(remove("test.txt") == 0){
    //     printf("That file was deleted successfully");
    // }else{
    //     printf("That file was NOT deleted");
    // }

    FILE *pF = fopen("read.txt", "r");
    char buffer[255]; 
    if(pF == NULL){
        printf("Unable to open this file");
    }else{
        while(fgets(buffer, 255, pF) != NULL){
        printf("%s", buffer);
        }
    }
    
    
    fclose(pF);

    return 0;
}