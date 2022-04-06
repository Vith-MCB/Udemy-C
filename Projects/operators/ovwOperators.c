#include <stdio.h>

// Like in most other languages, operators are predefined in C.

/*
 * #Math operators:
 * " + " : addition or unary plus
 * " - " : subtraction or unary minus
 * " * " : multiplication
 * " / " : division
 * " % " : remainder after division (modulo division)
 *
 */
int mathOperators() {
    int a = 9, b = 4, c;

    c = a + b;
    printf("a+b = %d \n", c);
    c = a - b;
    printf("a-b = %d \n", c);
    c = a * b;
    printf("a*b = %d \n", c);
    c = a / b;
    printf("a/b = %d \n", c);
    c = a % b;
    printf("Remainder when a divided by b = %d \n", c);
    return 0;
}

/*
 * #Assignment operators:
 * An assignment operator is used for assigning a value to a variable.
* Ex: " += ", used like: "a += b",	it's the same as: "a = a+b"
* Ex: " /= ", used like: "a /= b",	it's the same as: "a = a/b"
* ...
*/
int assignementOperators() {
    int a = 5, c;
    c = a;      // c is 5
    printf("c = %d\n", c);
    c += a;     // c is 10
    printf("c = %d\n", c);
    c -= a;     // c is 5
    printf("c = %d\n", c);
    c *= a;     // c is 25
    printf("c = %d\n", c);
    c /= a;     // c is 5
    printf("c = %d\n", c);
    c %= a;     // c = 0
    printf("c = %d\n", c);

    return 0;
}

/*
 * #Relational Operators:
 * Operator    |	Meaning of  |    Operator	Example
 * " == " 	   |    Equal to    | 	5 == 3 is evaluated to 0
 * " > "	   |  Greater than	|   5 > 3 is evaluated to 1
 * " < "	   |   Less than    |   5 < 3 is evaluated to 0
 * " != "	   | Not equal to	|   5 != 3 is evaluated to 1
 * " >= " 	| Greater or equal to |	5 >= 3 is evaluated to 1
 * " <= "	| Less or equal to	  | 5 <= 3 is evaluated to 0
*/
int relationalOperators() {
    int a = 5, b = 5, c = 10;

    printf("%d == %d is %d \n", a, b, a == b);
    printf("%d == %d is %d \n", a, c, a == c);
    printf("%d > %d is %d \n", a, b, a > b);
    printf("%d > %d is %d \n", a, c, a > c);
    printf("%d < %d is %d \n", a, b, a < b);
    printf("%d < %d is %d \n", a, c, a < c);
    printf("%d != %d is %d \n", a, b, a != b);
    printf("%d != %d is %d \n", a, c, a != c);
    printf("%d >= %d is %d \n", a, b, a >= b);
    printf("%d >= %d is %d \n", a, c, a >= c);
    printf("%d <= %d is %d \n", a, b, a <= b);
    printf("%d <= %d is %d \n", a, c, a <= c);

    return 0;
}

/*
 * #Logical Operators:
 * " && " : Logical "and"
 * " || " : Logical "or"
 * " ! "  : Logical "not"
*/
int logicalOperators() {
    int a = 5, b = 5, c = 10, result;

    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d \n", result);

    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", result);

    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", result);

    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", result);

    result = !(a != b);
    printf("!(a != b) is %d \n", result);

    result = !(a == b);
    printf("!(a == b) is %d \n", result);

    return 0;
}

int main(){
    printf("\nDomonstration of the Math operators:\n");
    mathOperators();

    printf("\nDomonstration of the Assignement operators:\n");
    assignementOperators();

    printf("\nDomonstration of the Relational operators:\n");
    relationalOperators();

    printf("\nDomonstration of the Logical operators:\n");
    logicalOperators();
}