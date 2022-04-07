#include <stdio.h>

/*
 * At this program, the user will be able to insert a number through the terminal.
 * The program will display the input in years and days.
 */
int main(){

    //initializing the variables
    int minutes;
    double years, days;

    //input from user (minutes)
    printf("Insert the time (minutes): \n");
    scanf("%d", &minutes);

    //calculating
    days = minutes/1440 ;
    years = days / 365 ;

    //printing the results
    printf("Time in days: %lf\nTime in years: %lf",days,years);
}