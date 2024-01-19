#include <iostream>
#include <cmath>

using namespace std;

// math functions

// Trigonometric Functions:

//     sin(x): Returns the sine of x (where x is in radians).
//     cos(x): Returns the cosine of x (where x is in radians).
//     tan(x): Returns the tangent of x (where x is in radians).
//     asin(x): Returns the arc sine (inverse sine) of x, in radians.
//     acos(x): Returns the arc cosine (inverse cosine) of x, in radians.
//     atan(x): Returns the arc tangent (inverse tangent) of x, in radians.

// Hyperbolic Functions:

//     sinh(x): Returns the hyperbolic sine of x.
//     cosh(x): Returns the hyperbolic cosine of x.
//     tanh(x): Returns the hyperbolic tangent of x.
//     asinh(x): Returns the inverse hyperbolic sine of x.
//     acosh(x): Returns the inverse hyperbolic cosine of x.
//     atanh(x): Returns the inverse hyperbolic tangent of x.

// Exponential and Logarithmic Functions:

//     exp(x): Returns the value of e (the base of natural logarithms) raised to the power x.
//     log(x): Returns the natural logarithm of x.
//     log10(x): Returns the base-10 logarithm of x.
//     pow(x, y): Returns x raised to the power y.

// Rounding and Remainder Functions:

//     ceil(x): Returns the smallest integer greater than or equal to x.
//     floor(x): Returns the largest integer less than or equal to x.
//     round(x): Rounds x to the nearest integer.
//     fmod(x, y): Returns the remainder of x divided by y.

// Square Root and Absolute Value:

//     sqrt(x): Returns the square root of x.
//     fabs(x): Returns the absolute value of x.

// Constants:

//     M_PI: Represents the mathematical constant pi (π)


int main()
{
    cout << max(5, 6) << endl;
    cout << min(5, 6) << endl
         << abs(10.25) << endl
         << pow(4, 2) << endl
         << tan(90) << endl;
    return 0;
}