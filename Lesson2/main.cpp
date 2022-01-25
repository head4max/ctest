#include <iostream>
#include <complex>
#include "Headers/math.h"
#include "Headers/print_sqr.h"

/*
double sqr(double a)
{
    return a*a;
}
double rms(double a, double b, double c)
{
    return std::sqrt((sqr(a) + sqr(b) + sqr(c))/3);
}
double mean(double a, double b, double c)
{
    return (a + b + c)/3;
}
*/
/*
void pretty_square(double n)
{
    std::cout << "=====================\n";
    std::cout << "Square: " << Sqr(n) << "\n";
    std::cout << "=====================\n";
}
*/
int main() {
    //std::cout << "Hello, World!" << std::endl;
    double a = 0, b = 0, c = 0;
    std::cout << "pres the numbers:";
    std::cin >> a >> b >> c;
    std::cout << "RMS: " << rms(a,b,c) << "\n";
    std::cout << "RMS: " << mean(a,b,c) << "\n";
    pretty_square(a);
    return 0;
}