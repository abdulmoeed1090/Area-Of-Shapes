// A program to calculate the area of (triangle,circle and rectangle).

#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate area of trinagle
double calculateAreaOfTriangle(float heightf, float basef);
// Function to calculate area of circle
double calculateAreaOfCircle(float radiusf);
// Functionn to calculate area of rectangele
double calculateAreaOfRecatngle(float lenghtf, float widthf);

// Main function
int main()
{
    // Declaring variables
    float heightf, basef, radiusf, lengthf, widthf;
    int press;

    // Making conditions to calculate area of what shape
    cout << "To calculate area of triangle press 1 / press 2 to calculate area of circle / press 3 to calculate area of rectangle :" << endl;
    cin >> press;

    if (press == 1)
    {
        cout << "you are finding area of trinagle" << endl;
        cout << "Enter height of triangle in meters:" << endl;
        cin >> heightf;
        cout << "Enter base of triangle in meters:" << endl;
        cin >> basef;
        // Calling function that calculates area of triangle
        cout << "The area of traingle is  : " << calculateAreaOfTriangle(heightf, basef) << " m-sq";
    }
    else
    {
        if (press == 2)
        {
            cout << "you are finding area of circle" << endl;
            cout << "Enter radius of circle in meters:" << endl;
            cin >> radiusf;
            // Calling function that calculates area of circle
            cout << "The area of circle is  : " << calculateAreaOfCircle(radiusf) << " m-sq";
        }
        else
        {
            if (press == 3)
            {
                cout << "you are finding area of rectangle" << endl;
                cout << "Enter length of rectangle in meters:" << endl;
                cin >> lengthf;
                cout << "Enter width of rectangle in meters:" << endl;
                cin >> widthf;
                // calling function that calculates area of rectangle
                cout << "the area of rectangle is:" << calculateAreaOfRecatngle(lengthf, widthf) << " m-sq";
            }
            else
            {
                cout << "you entered the wrong digit!!";
            }
        }
    }
    return 0;
}

// Defining the function of area of traingle
double calculateAreaOfTriangle(float heightf, float basef)
{
    return (0.5 * heightf * basef);
}

// Defining the function of area of circle
double calculateAreaOfCircle(float radiusf)
{
    return (M_PI * pow(radiusf, 2));
}

// Defining the function of area of rectangle
double calculateAreaOfRecatngle(float lenghtf, float widthf)
{
    return (lenghtf * widthf);
}