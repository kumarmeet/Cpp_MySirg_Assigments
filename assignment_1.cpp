#include <iostream>

using namespace std;

void print()
{
    cout << "Hello world!" << endl;
}

void print2()
{
    cout << "Hello"<< endl;
    cout << "World!"<<endl;
}

int add_two_num(int a, int b)
{
    return a + b;
}

double area_of_circle(double r)
{
    return 3.1416 * r * r;
}

double area_of_rectangle(double l, double b)
{
    return l * b;
}

double avg_of_three_num(double a, double b, double c)
{
    double sum = a + b + c;
    return (a + b + c) / 3;
}

double area_of_cuboid(double l, double b, double h)
{
    return l * b * h;
}

void swap_two_num(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

double simple_interest(double p, double r, double t)
{
    return (p * r * t) / 100;
}
