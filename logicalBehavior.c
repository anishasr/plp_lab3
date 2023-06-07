// ● a one-condition if/else statement (i.e. "if x == true")
// ● a multi-condition if/else statement (i.e. "if x>0 && y< 10)
// ● if/elif/else statements
// ● short-circuit logic
// ● a switch-case statement

 #include <stdio.h>
 // Reference - https://www.w3schools.com/c/c_booleans.php
 #include <stdbool.h>

 int main() {
    // a one-condition if/else statement
    int x = 3;
    if(x == 3) printf("\none-condition if/else\n");

    // a multi-condition if/else statement 
    if(x % 2 == 0 && x <= 100) {
        printf("x is even and <= 100!\n");
    } else {
        printf("\nx is either odd or greater than 100 (or both!)\n");
    }

    // if/elif/else statements
    x = 44;
    if(x % 3 == 0 && x % 5 == 0) {
        printf("FizzBuzz");
    } else if (x % 3 == 0) {
        printf("Fizz");
    } else if (x % 5 == 0) {
        printf("Buzz");
    }
    else {
        printf("\n%d\n", x);
    }

    // short-circuit logic - compiler skips logically unecessary expression
    // && - first expression false, skips second
    if(10 % 2 != 0 && 10/0 == 0) {
        printf("\nthe program still runs successfully because the second expression is not evaluated\n");
    // || - first expression true, skips second
    } else if(10 % 2 == 0 || 10/0 == 0) {
        printf("\nthe program still runs successfully because the second expression is not evaluated\n");
    }

    // ● a switch-case statement
    int month = 10;
    printf("\n");
    switch (month) {
        case 1: 
            printf("January");
            break;
        case 2:
            printf("February");
            break;
        case 3: 
            printf("March");
            break;
        case 4:
            printf("April");
            break;
        case 5: 
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8: 
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December");
            break;
    }
        
 }