# Programming Language Project - Lab 3

1) What are the boolean values in your language? 
<br> In C, boolean values are represented as 1 (true) or 0 (false). Booleans are not a built-in type as in other languages such as Python (bool) and Java (Boolean).

2) What types of conditional statements are available in your language? 
<br><br>if/else and if/elseif/else are the available conditional statements in C. There are no other C-specific conditional statements such as the 'unless' statement in Perl.

3) Does your language use short-circuit evaluation? Include an example.
<br><br> Yes, C does use short-circuit evaluation when evaluating boolean expressions. If the result of two operands can be determined by evaluating just the first expression, the second operand will not be evaluated. 
<br> For example, in the case of an '&&' (and) statement, if the first expression is false, the second expression does not need to be checked. 
<br> In the case of an '||' (or) statement, if the first expression is true, the second expression does not need to be checked. 

## Code Example
 ```c
// && - first expression false, skips second
if(10 % 2 != 0 && 10/0 == 0) {
    printf("\nthe program still runs successfully because the second expression is not evaluated\n");
// || - first expression true, skips second
} else if(10 % 2 == 0 || 10/0 == 0) {
    printf("\nthe program still runs successfully because the second expression is not evaluated\n");
}
```

4) How does your programming language deal with the “dangling else” problem? 
<br><br>

5) If your language supports switch or case statements, do you have to use
“break” to get out of them? Can you use “continue” to have all of them
evaluated?
<br><br>

## Sources
https://www.w3schools.com/c/c_booleans.php