//How to use comments at C

/* 
With "//" we can write a line, and it will be ignored by the compiler
and with "/*"(to open a comment) and "*\"(to close the comment) 
*/

//Example:


#include <stdio.h>

/*
The #include statement is preprocessor directive, 
  ~The "#" indicates this is a processing directive; 
    ~ An instruction to your compiler to do something before compiling the source code.

  ~Two ways to #include header files in a program:
    1~ Using angle brackets(#include <Vitor.h>);
      . tells the processor to look for the file in one or more standard system directories
    2~ Using double quotes(#include "Vitor.h");
      . tells the processor to first look in the current directory
*/


int main(){
    //Declare variables
    int value1, value2, sum;

    //Assing values and calculating
    value1 = 20;
    value2 = 30;
    sum = value1+value2;

    /* Display values like: "The sum of 20 and 30 is 50" */
    printf("The sum of %d and %d is %d", value1, value2, sum);
}
