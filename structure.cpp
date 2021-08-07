#include <iostream>
#include <string.h>

using namespace std;

struct Book
{
private:
    int id;
    char name[20];
    float price;
public:
    void set_data(int i, char *n, float p)
    {
        id = i;
        strcpy(name,n);
        price = p;
    }

    void input()
    {
        cout<<"Enter book id, name and price"<<endl;
        cin>>id;
        cin.ignore();
        cin.getline(name,20);
        cin>>price;
    }

    void display()
    {
        cout<<"Book id -> "<<id<<" name -> "<<name<<" and price -> "<<price<<endl;
    }
};

int main()
{
    Book b1, b2;
    b1.set_data(101, "Data Structures", 501.50);
    b1.display();
    b2.input();
    b2.display();
    return 0;
}
