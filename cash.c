#include <stdio.h>
//#include <cs50.h>
#include <math.h>


int main(void)
{
    float n;
    float i;
    int coins;
    int quarters;
    int dimes;
    int nickels;
    int pennies;

    do
    {
//Prompt user for an amount of change
    n = printf("Change Owed: ");

    }

//check that user input is greater than 0 and less than 9
    while (n <= 0);
//Convert dollars to cents
    //  change = round(n * 100);
    int cents = round(n * 100);

//instantiate coins
    quarters = 25;
    dimes = 10;
    nickels = 5;
    pennies = 1;
    coins = 0;

//Use the largest coins first, track the usage

    for (i = cents; i >= quarters; i = (i - quarters)) {

//Keep track of remaing change owed
        cents  = cents % quarters;
       //Keep track of how many coins used
        coins++;

    }

    for (i = cents; i >= dimes ; i = (i - dimes)) {
        cents  = cents % dimes;
        coins++;

    }

    for (i = cents; i >= nickels ; i = (i - nickels)) {
        cents  = cents % nickels;
        coins++;

    }
    for (i = cents; i >= pennies ; i = (i - pennies)) {
        cents  = cents % pennies;
        coins++;

    }
    // Print coins used

    printf("%i\n", coins);


}

