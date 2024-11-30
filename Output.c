#include <stdio.h>
int main()
{
    int i = 1, count = 0;
    char x = 'i';
    if (x-  - == 105)
        printf("No time for thinkin\n");
    do
    {
        if (i == 10)
        {
            printf("You can't run from your thoughts.");
            break;
        }
        if (i % 2 == 0)
        {
            count++;
            printf("%d\n%c:", count, x++);
        }
        if (i % 3 == 0)
            continue;
        else
        {
            count--;
            printf("%d:%c\n", count, x--);
        }
    } while (++i <= 12);
    return 0;
}

// #include <stdio.h>
// int main(){
// int i = 1, count = 0;
// char x = 'j';
// do{
// if (i == 10){
// printf("You can't run from your thoughts.\n");
// break;
// }
// if (i % 2 == 0) {
// count++;
// printf("%d\n%c:", count, x--);
// }
// if (i % 3 == 0)
// continue;
// else {
// count--;
// printf("%d:%c\n",count, x++);
// }
// } while(i++ <= 12);
// if(--x != 105 )
// printf("No time for thinkin.");
// return 0;
// }

// #include <stdio.h>
// int main(){
// int x = 5, y = 6;
// char p = 'M';
// int z = p++;
// if((char)(p-27)=='5'){printf("5\n");}
// if((char)(p-27)!='5'){printf("%c",(char)(p-27));}
// else{printf("6\n");}
// printf("%d\n", z-p);
// printf("%d\n",(y*=++x));
// printf("%d\n", x/y--);
// printf("%d\n", y+2 );
// printf("%c\n",(char)(x + 68));
// printf("x%y=%d\n",x%y);
// printf("%c\n",--p);
// printf("%d\n",++z);
// printf("%d\n",(y = (y != (x && z))));
// printf("%c\n",(char)((int)p+5));
// if(y){ printf("I am hero.\n");}
// printf("%c",(char)z++);
// return 0;
// }

/*-------------------------------------------------------------------------------------*/
// Find out the output of the following codes:
// First learn about the operators. Then try to find the output of the following codes without using
// an IDE. Use your brain and write the outputs on a paper. Remember you have to write the
// output same as it shows on the black window whenever you run the code. After you find the
// output, run the code in the IDE to match your output.
// A.
// 1. #include <stdio.h>
// 2. int main() {
// 3. // Declare variables
// 4. int a = 10, b = 5, c = 3, result;
// 5. float x = 5.5, y = 2.0, floatResult;
// 6. char ch = 'A';
// 7.
// 8. // Print initial values
// 9. printf("Initial values:\n");
// 10. printf("a = %d, b = %d, c = %d, x = %.2f, y = %.2f, ch = %c\n\n", a, b, c, x, y, ch);
// 11.
// 12. // Arithmetic operators
// 13. printf("Arithmetic Operators:\n");
// 14. result = a + b; // Addition
// 15. printf("a + b = %d + %d = %d\n", a, b, result);
// 16.
// 17. result = a - b; // Subtraction
// 18. printf("a - b = %d - %d = %d\n", a, b, result);
// 19.
// 20. result = a * b; // Multiplication
// 21. printf("a * b = %d * %d = %d\n", a, b, result);
// 22.
// 23. result = a / b; // Division
// 24. printf("a / b = %d / %d = %d\n", a, b, result);
// 25.
// 26. result = a % b; // Modulo (remainder)
// 27. printf("a %% b = %d %% %d = %d\n", a, b, result);
// 28.
// 29. floatResult = x / y; // Division with float
// 30. printf("x / y = %.2f / %.2f = %.2f\n\n", x, y, floatResult);
// 31.
// 32. // Relational operators
// 33. printf("Relational Operators:\n");
// 34. printf("a == b: %d == %d = %d\n", a, b, a == b); // Equal to
// 35. printf("a != b: %d != %d = %d\n", a, b, a != b); // Not equal to
// 36. printf("a > b: %d > %d = %d\n", a, b, a > b); // Greater than
// 37. printf("a < b: %d < %d = %d\n", a, b, a < b); // Less than
// 38. printf("a >= b: %d >= %d = %d\n", a, b, a >= b); // Greater than or equal to
// 39. printf("a <= b: %d <= %d = %d\n\n", a, b, a <= b); // Less than or equal to
// 40. // Logical operators
// 41. printf("Logical Operators:\n");
// 42. printf("a > b && b < c: %d && %d = %d\n", a > b, b < c, a > b && b < c); // Logical AND
// 43. printf("a > b || b < c: %d || %d = %d\n", a > b, b < c, a > b || b < c); // Logical OR
// 44. printf("!(a == b): !(%d == %d) = %d\n\n", a, b, !(a == b)); // Logical NOT
// 45.
// 46. // Bitwise operators
// 47. printf("Bitwise Operators:\n");
// 48. printf("a & b: %d & %d = %d\n", a, b, a & b); // AND
// 49. printf("a | b: %d | %d = %d\n", a, b, a | b); // OR
// 50. printf("a ^ b: %d ^ %d = %d\n", a, b, a ^ b); // XOR
// 51. printf("~a: ~%d = %d\n", a, ~a); // NOT (Bitwise NOT)
// 52. printf("a << 1: %d << 1 = %d\n", a, a << 1); // Left shift
// 53. printf("a >> 1: %d >> 1 = %d\n\n", a, a >> 1); // Right shift
// 54.
// 55. // Assignment operators
// 56. printf("Assignment Operators:\n");
// 57. result = a; // Simple assignment
// 58. printf("result = a: result = %d\n", result);
// 59.
// 60. result += b; // Addition assignment
// 61. printf("result += b: result = %d + %d = %d\n", result - b, b, result);
// 62.
// 63. result -= c; // Subtraction assignment
// 64. printf("result -= c: result = %d - %d = %d\n", result + c, c, result);
// 65.
// 66. result *= 2; // Multiplication assignment
// 67. printf("result *= 2: result = %d * 2 = %d\n", result / 2, 2, result);
// 68.
// 69. result /= 3; // Division assignment
// 70. printf("result /= 3: result = %d / 3 = %d\n", result * 3, 3, result);
// 71.
// 72. result %= 4; // Modulo assignment
// 73. printf("result %%= 4: result = %d %% 4 = %d\n\n", result / 4, 4, result);
// 74.
// 75. // Increment and Decrement operators
// 76. printf("Increment and Decrement Operators:\n");
// 77. printf("a++ = %d (then a = %d)\n", a++, a); // Post-increment
// 78. printf("++a = %d\n", ++a); // Pre-increment
// 79. printf("b-- = %d (then b = %d)\n", b--, b); // Post-decrement
// 80. printf("--b = %d\n\n", --b); // Pre-decrement
// 81. // Conditional (Ternary) operator
// 82. printf("Ternary Operator:\n");
// 83. int max = (a > b) ? a : b; // Conditional operator
// 84. printf("Max of a and b: (a > b) ? a : b = %d\n\n", max);
// 85.
// 86. // Type casting
// 87. printf("Type Casting:\n");
// 88. int intResult = (int) x / (int) y; // Casting float to int for division
// 89. printf("(int)x / (int)y = (int)%.2f / (int)%.2f = %d\n", x, y, intResult);
// 90.
// 91. return 0;
// 92. }
// B.
// 1. #include <stdio.h>
// 2. int main()
// 3. {
// 4. int x =5;
// 5. int y =6;
// 6. printf(“%d\n”, x- 48);
// 7. printf( “%d\n”, --x );
// 8. printf( “%d\n”, (x*++y) );
// 9. printf( “%d\n”, x*y-- );
// 10. printf( “%d\n”, y+2 );
// 11. printf( “%d\n”, (char)(x+65) );
// 12. printf( “%d\n”, x/y );
// 13. printf( “%d\n”, ++y );
// 14. printf(“%d\n”, (y=--x) );
// 15. return 0;
// 16. }
// C.
// 1. #include <stdio.h>
// 2. int main()
// 3. {
// 4. int i = 5;
// 5. int n = i-1;
// 6.
// 7. printf("%d\n", (n == 4) );
// 8. printf("%d\n", (n > 3) );
// 9. printf("%d\n", (n < 4) );
// 10. printf("%d\n", (n = 0) );
// 11. printf("%d", (n == i) );
// 12. printf("\n%d", (n > 0) );
// 13. printf("\n%d", !(n <= 0) );
// 14. printf("\n%d", (n && 4) );
// 15. printf("\n%d", (n || 4) );
// 16. printf("\n%d", (!n) );
// 17.
// 18. return 0;
// 19. }