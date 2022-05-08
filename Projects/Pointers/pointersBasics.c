#import <stdio.h>

/*Pointers
 * Declaration: *examplePointer
 * Uses: Store adress from another variable (it needs to be already declared)
 * Example:
 * int *pNumber = NULL, variable1; (integer pointer defined null and variable)
 * pNumber = &variable1=10; (the pointer stores the adress from the variable)
 * printf("%d", *pNumber); (prints the "variable1" value = 10)
 * printf("%d", pNumber); (prints the adress)
*/

//int main(){
//    //To run te example, just select the code and press "ctrl+/"
//    int *pNumber = NULL, variable1=10;
//    pNumber = &variable1;
//    printf("%d\n", *pNumber);
//    printf("%p\n", pNumber);
//    printf("pointer size: %d bytes\n", (int)sizeof(pNumber)); // printing the size of the pointer
//}


/*Challenge
 * Write a program that creates an integer variable with a hard-coded value.
 * Assign that variable's adress to a pointer variable.
 *
 * Display:
 * output the adress of the pointer, the value of the pointer, and the value of what the pointer
 * is pointing to.
*/
int main(){
    //initializing the variable and the pointer
    int number = 10, *pNumber = NULL;
    pNumber = &number;

    //Displaying the outputs
    printf("Number adress: %p\n", &number);
    printf("Pointer adress: %p\n", (void*)&pNumber); //printing pointer's adress
    printf("Pointer value: %p\n",pNumber);
    printf("Value of the variable pointer is pointing to: %d\n",*pNumber);

    return 0;
}

