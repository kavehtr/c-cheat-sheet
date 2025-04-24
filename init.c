#include <stdio.h>
#include <stdbool.h>

void main()
{
    // normal print
    printf("Hello World!");

    // print with a new line
    printf("Hello World!\n");

    // creates a horizontal tap
    printf("Hello World\t");

    // inserts a backslash character
    printf("Hello World\\");

    // inserts a double quote character
    printf("Hello World\"");

    /*
    this is a multi line comment
    this is a multi line comment
    this is a multi line comment
    */

    // int variable
    int myNum = 15;

    // int variable assign
    int myNumNoAssign;
    myNumNoAssign = 152;

    // print int
    printf("%d", myNum);

    // float variable
    float myFloat = 5.99;

    // print float
    printf("%f", myFloat);

    // char variable
    char myLetter = 'D';

    // print char
    printf("%c", myLetter);

    // example print variable with text
    printf("my number is %d and my letter is %c", myNum, myLetter);

    // multiple variable declare
    int x = 5, y = 6, z = 50;

    int x1, y1, z1;
    x1 = y1 = z1 = 50;

    // int takes 2 or 4 bytes | stores whole numbers , without decimals
    // float takes 4 bytes | stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 deciaml digits
    // double takes 8 bytes | stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
    // char takes 1 byte | stores a single character/letter/number, or ASC11 values

    // basic format specifiers
    // %d or %i   int
    // %f or %F   float
    // %lf        double
    // %c         char
    // %s         used for strings (text)

    // storing string in c
    char myText[] = "hello";

    // print string
    printf("%s", myText);

    float myFloatNum = 3.52000;
    printf("%f", myFloatNum);   // default will show 6 digits after the decimal point
    printf("%.1f", myFloatNum); // only show 1 digit
    printf("%.2f", myFloatNum); // only show 2 digits
    printf("%.4f", myFloatNum); // only show 4 digits

    // print size of variable in bytes
    printf("%lu", sizeof(myNum));

    // automatic conversion: float to int
    int myInt = 9.99;
    printf("%d", myInt);

    // automatic conversion: int to float
    float myFloat = 9;
    printf("%f", myFloat);

    // manually conversion
    int num1 = 5;
    int num2 = 2;
    float sum = (float)num1 / num2;
    printf("%.1f", sum);

    // const variable
    const int minutesPerHour = 60;

    // bool variable (the header stdbool.h should be imported )
    bool isProgrammingFun = true;
    printf("%d", isProgrammingFun);

    // printing the bool type for comparison
    printf("%d", 10 > 9);
    printf("%d", 5 == 55);

    // if statement
    if (x > y)
    {
        printf("x is greater than y");
    }

    // if else statement
    if (x > y)
    {
        printf("x is greater than y");
    }
    else
    {
        printf("y is greater than x");
    }

    // if else if
    if (x > y)
    {
        printf("x is greater than y");
    }
    else if (x < y)
    {
        printf("y is greater than x");
    }
    else
    {
        printf("same");
    }

    // short hand if
    (x < 10) ? printf("Good") : printf("Not Good");

    // switch case
    int day = 4;
    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    default:
        printf("default");
    }
 
    // while loop
    while (x < 5) {
        printf("%d", x);
        x++;
    }

    // do while loop
    do {
        printf("%d", x);
        x++;
    }
    while (x < 5);

    // for loop
    for (x = 0; x < 5; x++) {
        printf("%d", x);
    }


    // array variable
    int myNumbers[] = {25, 50, 65, 100};

    // print the element of an array
    printf("%d", myNumbers[0]);


    // change the value of a specific element
    myNumbers[2] = 33;

    // declare an array with size
    int myNumbers2[4];
    myNumbers2[0] = 25;
    myNumbers2[1] = 30;
    myNumbers2[2] = 64;
    myNumbers2[3] = 100;

    // get the size of an array
    printf("%lu", sizeof(myNumbers));

}