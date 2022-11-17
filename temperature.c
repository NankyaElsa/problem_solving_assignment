/*This program estimates the temperature in a freezer given the elapsed time 
since a power failure occurs
The user is allowed to input the time*/

#include<stdio.h>
#include<math.h>

int main(void){

    int time = 0; 

    double temperature = 0;

    /*We initialise the declared variables with a zero(0) because failure to do so leads
    to logical errors as the program finds random values it initialises the variables
    with.
    This makes the program print out different undesired output whenever it is run
    even if the syntax is correct*/

    printf("Enter the elapsed time in minutes: ");

    scanf("%d", &time);

    temperature = ((4 * (time * time) / (time + 2)) - 20);
    
    printf("The estimated temperature is %.5f", temperature);
     //The .5 gives the result to 5 decimal places

    return 0;

}
