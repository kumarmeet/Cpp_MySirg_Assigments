#include <bits/stdc++.h>

using namespace std;
class Complex
{
private:
  int real, imaginary;

public:
  Complex()
  {
    real = 0;
    imaginary = 0;
  }
  int getReal()
  {
    return real;
  }

  int getImaginary()
  {
    return imaginary;
  }

  void setData(int a, int b)
  {
    real = a;
    imaginary = b;
  }

  Complex add(Complex c)
  {
    Complex temp;
    temp.real = real + c.real;
    temp.imaginary = imaginary + c.imaginary;
    return temp;
  }

  Complex operator+(Complex c) // + operator overloading for this class objects only
  {
    Complex temp;
    temp.real = real + c.real;
    temp.imaginary = imaginary + c.imaginary;
    return temp;
  }

  Complex multiply(Complex c)
  {
    Complex temp;
    temp.real = real * c.real;
    temp.imaginary = imaginary * c.imaginary;
    return temp;
  }

  Complex operator*(Complex c) // * operator overloading for this class objects only
  {
    Complex temp;
    temp.real = real * c.real;
    temp.imaginary = imaginary * c.imaginary;
    return temp;
  }

  Complex subtraction(Complex c)
  {
    Complex temp;
    temp.real = real - c.real;
    temp.imaginary = imaginary - c.imaginary;
    return temp;
  }

  Complex operator-(Complex c) //- operator overloading for this class object only
  {
    Complex temp;
    temp.real = real - c.real;
    temp.imaginary = imaginary - c.imaginary;
    return temp;
  }

  void display(char opr)
  {
    switch (opr)
    {
    case '+':
      cout << real << " + " << imaginary << "i" << endl;
      break;
    case '-':
      cout << real << " - " << imaginary << "i" << endl;
      break;
    case '*':
      cout << real << " * " << imaginary << "i" << endl;
      break;
    }
  }
};

int main()
{
  Complex c1, c2, c3;
  c1.setData(6, 9);
  c2.setData(4, 5);
  cout << "Using operator overloading" << endl;
  //operator overloading method
  c3 = c1 + c2; //*c3 = c1.operator+(c2);
  c3.display('+');
  c3 = c1 * c2; //*c3 = c1.operator*(c2);
  c3.display('*');
  c3 = c1 - c2; //*c3 = c1.operator-(c2);
  c3.display('-');

  //typical function method
  Complex c4, c5, c6;
  c4.setData(9, 7);
  c5.setData(3, 2);

  cout << "Using typical funtions" << endl;
  c6 = c4.add(c5);
  c6.display('+');
  c6 = c4.multiply(c5);
  c6.display('*');
  c6 = c4.subtraction(c5);
  c6.display('-');
  return 0;
}
