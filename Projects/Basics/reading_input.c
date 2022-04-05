// Reading input from the terminal

/*
THE "scanf()" FUNCTION
    ~Reads the input according to the format provided;
    . "%s"  for strings
    . "%d"  for integer
    . "%c"  for char
    . "%lf" for double
    . "%f"  for float
    And etc...

Ex: Read an integer and store at "ex" variable
        int main(){
            int ex;
            scanf("%d", &ex);
        }
*/

#include <stdio.h>

int main(){
    // Define the variables:
    float fl,sum;
    int integer;

    //Reading a float and an integer value
    scanf("%f%d",&fl,&integer);

    // sum of the 2 read values
    sum = fl + integer;

    printf("The sum of the read numbers is: %f", sum);
}