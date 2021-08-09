#include <bits/stdc++.h>

using namespace std;

class Complex_number
{
private:
    int imaginary;
    int real;
public:
    void set_complex_number(int i, int r)
    {
        imaginary = i;
        real = r;
    }

    void display_number()
    {
        cout<<real<<"i"<<imaginary<<"i"<<endl;
    }
};

class Cuboid
{
private:
    double lenght, breadth, height;
public:
    void set_dimensions(double, double, double);
    double volume(void);
};

void Cuboid::set_dimensions(double l, double b, double h)
{
    lenght = l;
    breadth = b;
    height = h;
}

double Cuboid::volume() //Cuboid:: shows membership label of entity
{
    return (lenght * breadth * height);
}

class Time
{
private:
    int hour, minutes, seconds;
public:
    void set_time(int h, int m, int s)
    {
        hour = h;
        minutes = m;
        seconds = s;
    }

    void display_time()
    {
        cout<<hour<<"h: "<<minutes<<"m: "<<seconds<<"s"<<endl;
    }
};

int main()
{
    Time t1;
    t1.set_time(4,14,55);
    t1.display_time();

    Cuboid cube1;
    cube1.set_dimensions(14.5, 21.4, 36.77);
    cout<<cube1.volume()<<endl;

    Complex_number com;
    com.set_complex_number(5,6);
    com.display_number();
    return 0;
}
