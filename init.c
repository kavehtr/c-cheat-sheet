#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

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
    while (x < 5)
    {
        printf("%d", x);
        x++;
    }

    // do while loop
    do
    {
        printf("%d", x);
        x++;
    } while (x < 5);

    // for loop
    for (x = 0; x < 5; x++)
    {
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

    // two dimensional arrays
    int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};

    // access the elements of a 2D array
    printf("%d", matrix[0][2]);

    // get the length of a string
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d", strlen(alphabet));

    // concatenate strings
    char str1[20] = "hello ";
    char str2[] = "world!";
    strcat(str1, str2);
    printf("%s", str1);

    // copy strings
    char str3[20] = "hello world!";
    char str4[20];
    strcpy(str4, str3);
    printf("%s", str4);

    // compare strings (returns 0 if the strings are equal and returns -4 if not equal)
    printf("%d", strcmp(str1, str2));

    // get user input
    int userNum;
    printf("type a number: \n");
    scanf("%d", &userNum);
    printf("your number is: %d", userNum);

    // get user input strings (use scanf for single words and fgets for multiple words)
    char fullName[30];
    printf("type your full name: \n");
    fgets(fullName, sizeof(fullName), stdin);
    printf("hello %s", fullName);

    // creating pointers and memory address (The memory address is in hexadecimal form (0x..). You will probably not get the same result in your program, as this depends on where the variable is stored on your computer)
    printf("%p", &x);

    // memory address of a variable with the pointer
    int *ptr = &x;

    // square root of a number
    printf("%f", sqrt(16));

    // round a number to upwards to its nearest integer
    printf("%f", ceil(1.4));

    // round a number to downwards to its nearest integer
    printf("%f", floor(1.4));

    // returns the value of x to the power y
    printf("%f", pow(4, 3));

    // file handling (w for writing to a file, a for appending new data to a file, r for reading from a file)
    FILE *fptr;
    fptr = fopen("filename.txt", "w");
    fprintf(fptr, "some text"); // for writing or appending to a file
    fgets(str4, 100, fptr); // for reading the file 
    fclose(fptr);

    // create a structure 
    struct myStruct {
        int myNum;
        char myLetter;
        char myString[30];
    };
    // create a struct variable with the name s1
    struct myStruct s1;
    // access structure members
    s1.myNum = 13;
    s1.myLetter = 'B';
    strcpy(s1.myString, "Some Text");
    // simpler syntax
    struct myStruct s2 = {13, 'B', "Some Text"};

    // enums (enums are types that are constants)
    enum Level {
        LOW = 25,
        MEDIUM = 50,
        HIGH = 64
    };
    // create an enum variable and assign a value to it
    enum Level myVar = MEDIUM;
    // if you dont assign values to enum it self it will start from zero and increase
    enum Level2 {
        LOW = 5, // if does not assign it will start from 0
        MEDIUM, // now outputs 6
        HIGH // now outputs 7
    };

    
}

// function that returns void
void myFunc() {}

// function with params
void myFunc2(char name[], int age) {}
