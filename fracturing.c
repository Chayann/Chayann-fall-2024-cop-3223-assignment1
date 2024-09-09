//********************************************************
// fracturing.c
// Author: Chayann Bradford, UCFID: 5655910
// Date: 9/1/24
// Class: COP 3223, Professor Parra
// Purpose: This program is designed to calculate various 
// geometric properties of a circle, such as its radius, 
// perimeter, area, width, and height. 
// Input: User enters x and y coordinates.
//
// Output: (to the command line) The calculated radius, perimeter, 
// area, width, and height of the circle.
// //********************************************************

// Header file for input output functions
#include <stdio.h>
#include <math.h>

#define PI 3.14159

//********************************************************
// double askForUserInput
//
// Purpose:         Bonus function to initiate asking for user for coordinates
// Output:          Returns the points entered by users 
// Precondition:    None.
// Postcondition:   The points entered by users is returned
//********************************************************

double askForUserInput() 
{
    double userInput;
    scanf("%lf", &userInput);
    return userInput;
}

//********************************************************
// double calculateDistanceHelper
//
// Purpose:         Helper function to calculate the distances
// Output:          Returns the distance between the points 
// Precondition:    Coordinates will be entered by user
// Postcondition:   Distance will be calculated and returned
//********************************************************

double calculateDistanceHelper()
{
    // Local variables to store coordinates
    double x1, x2, y1, y2, distances;

    // Gathering the points from the user
    printf("\nEnter your x and y coordinates:\n");
    printf("x1: ");
    x1 = askForUserInput();
    printf("x2: ");
    x2 = askForUserInput();
    printf("y1: ");
    y1 = askForUserInput();
    printf("y2: ");
    y2 = askForUserInput();

    // Prints the coordinates entered
    printf("\nPoint #1 entered: x1 = %.3lf, y1 = %.3lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.3lf, y2 = %.3lf\n", x2, y2);

    // Using the formula to get the distance
    distances = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    return distances;
}

//********************************************************
// double calculateDistance
//
// Purpose:         Calculates and prints the distance between two points
// Output:          Returns the distance that has been calculated
// Precondition:    Numeric coordinates will be entered by user
// Postcondition:   Distance will be printed and returned
//********************************************************       

double calculateDistance() 
{
    double distance; 
    distance = calculateDistanceHelper();
    printf("\nThe distance between the two points is %.3lf\n", distance);

    return distance;
}

//********************************************************
// double calculatePerimeter
//
// Purpose:         Calculates the perimeter of a circle
// Output:          Prints the perimeter of the circle i.e the city
// Precondition:    User needs to enter numeric coordinates
// Postcondition:   Perimeter will be printed
//********************************************************    

double calculatePerimeter() 
{
    double diameter = calculateDistanceHelper(); 
    double radius = diameter / 2;
    double perimeter = 2 * PI * radius;

    // Output the perimeter
    printf("\nThe perimeter of the city encompassed by your request is %.3lf\n", perimeter);

    // Returning my difficulty rating
    return 3.5;
}

//********************************************************
// double calculateArea
//
// Purpose:         Calculates the area of the circle
// Output:          Prints the area of the circle i.e the city
// Precondition:    User needs to enter numeric coordinates 
//                  and the diameter points needs to be accurate
// Postcondition:   The calculated area will be printed 
//********************************************************  

double calculateArea() 
{
    double diameter = calculateDistanceHelper();  
    double radius = diameter / 2;
    double area = PI * pow(radius, 2);

    // Output the area
    printf("\nThe area of the city encompassed by your request is %.3lf\n", area);

    // Returning my difficulty rating
    return 3.5;
}

//********************************************************
// double calculateWidth
//
// Purpose:         Calculates the width of the circle (diameter)
// Output:          Prints the width of the circle 
// Precondition:    User needs to enter numeric coordinates and
//                  the distances needs to be accurate/valid
// Postcondition:   The width (the diameter) is printed
//********************************************************  

// Function to calculate the width of the circle (diameter)
double calculateWidth() 
{
    double diameter = calculateDistanceHelper();  
    //double diameter = 2 * radius;

    // Output the diameter
    printf("\nThe width of the city encompassed by your request is %.3lf\n", diameter);

    // Returning my difficulty rating
    return 2.0;
}

//********************************************************
// double calculateHeight
//
// Purpose:         Calculates the height of the circle (diameter)
// Output:          Prints the height of the circle 
// Precondition:    User needs to enter numeric coordinates and
//                  the distances needs to be accurate/valid
// Postcondition:   The height (the diameter) is printed
//********************************************************  

double calculateHeight() 
{
    double diameter = calculateDistanceHelper();  
   // double diameter = 2 * radius;

    // Output the height
    printf("\nThe height of the city encompassed by your request is %.3lf\n", diameter);

    // Returning my difficulty rating
    return 2.0;
}

// Main function
int main(int argc, char **argv) 
{
    // Calling all the user-defined functions
    calculateDistance(); 
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}   //main