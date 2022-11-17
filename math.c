
/*This program allows input of two whole numbers, finds their sum, product, 
difference and quotient*/

#include<stdio.h>
#include<math.h>

int main(void){

    //initialise all variables to be used

    int first_number = 0;

    int second_number = 0;

    int sum = 0; 
    int product = 0; 
    int difference = 0;  
    double quotient = 0; 

    printf("Please enter the numbers in the order you want them to be calculated for cases of difference and quotient\n");
    
    /*The user is asked to enter the numbers in the order they want them to be 
    calculated because the order may change the actual expected output especifically
    for the difference and quotient
    For example
    5-2 and 2-5 give a different output, also
    5/2  and 2/5 but,
    2+5 and 5+2 give the same output, ame applies to 2*5 and 5*2 */
    
    printf("Enter the first number: ");
    scanf("%d", &first_number);

    printf("Enter the second number: ");
    scanf("%d", &second_number);

    sum = first_number + second_number;

    product = first_number * second_number;

    difference = first_number - second_number;

    quotient = first_number / second_number;


    printf("The sum of the numbers is: %d\n", sum);

    printf("The product of the numbers is: %d\n", product);

    printf("The difference of the numbers is: %d\n", difference);

    printf("The quotient of the numbers is: %.2f", quotient);
    //The .2 prints the result to 2 decimal places

    return 0;
}
