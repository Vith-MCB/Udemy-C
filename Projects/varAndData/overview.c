/*
 * #Overview
 * The program sometimes needs to store some results, so that data can be stored at a variable.
 * The information is stored in memory (RAM), and when the PC is turned off, that information are lost.
 * But, we can use other types of data storage, because the data isn't lost if it's stored at the Hard Drive
 */

/*
 * #Names of variables
 * In C, the names of the variables must start with a letter or a "_" (Underscore)
 * The snake case (ex_var) and Camel case (exVar) should be used to format the names
 */

/*
 * #Data types
 * A data type represents a type of data which you can process using your program
 * Int (...-2,-1,0,1,2...) #Also uint (unsigned int)
 * float (0.1, -33.4, 135.23...)
 * String ("Vitor", "example"...)
 * double - float numbers with double precision (Larger numbers can be stored)
 * bool - true or false (1, 0)
 * char (chars)
 * void (no value)
 */
#include <stdio.h>

int main(){
    int integer = 3;
    float floatNumber = 3.56;
    double doubleNumber = 3.5646523632;

    printf("Int: %d\nFloat: %f\nDouble: %lf", integer, floatNumber, doubleNumber);
}