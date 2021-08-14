#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>

using namespace std;

class Employee
{
private:
    int emp_id;
    float salary;
    char name[20];
    static int size;
    static void swap(Employee *a, Employee *b)
    {
        Employee c;
        c = *a;
        *a = *b;
        *b = c;
    }

public:
    //setters
    void setEmpId(int id)
    {
        if (id < 0)
            emp_id = -id;
        else
            emp_id = id;
        size++;
    }
    void setSalary(float sal)
    {
        if (sal < 0)
            salary = -sal;
        else
            salary = sal;
    }
    void setName(char s[])
    {
        strcpy(name, s);
    }
    //getters
    int getId()
    {
        return emp_id;
    }
    float getSalary()
    {
        return salary;
    }
    char *getName()
    {
        return name;
    }

    void showEmployee()
    {
        cout << "ID -> " << emp_id << ", Name -> " << name << " and Salary -> " << salary << endl;
    }

    void setEmployeeData(int id, char *n, float sal)
    {
        if (id < 0)
            emp_id = -id;
        else
            emp_id = id;
        strcpy(name, n);
        if (sal < 0)
            salary = -sal;
        else
            salary = sal;
        size++;
    }

    static void displayEmployees(Employee emp[])
    {
        for (int i = 0; i < size; i++)
            cout << "ID -> " << emp[i].emp_id << ", Name -> " << emp[i].name << " and Salary -> " << emp[i].salary << endl;
    }

    static void sortEmployeesBySalary(Employee emp[])
    {
        int flag;

        for (int i = 0; i < size; i++)
        {
            flag = 1;
            for (int j = 0; j < size - 1 - i; j++)
            {
                if (emp[j].salary > emp[j + 1].salary)
                {
                    swap(&emp[j], &emp[j + 1]);
                    flag = 0;
                }
            }
            if (flag)
                break;
        }
    }

    static void sortEmployeesById(Employee emp[])
    {
        int flag;

        for (int i = 0; i < size; i++)
        {
            flag = 1;
            for (int j = 0; j < size - 1 - i; j++)
            {
                if (emp[j].emp_id > emp[j + 1].emp_id)
                {
                    swap(&emp[j], &emp[j + 1]);
                    flag = 0;
                }
            }
            if (flag)
                break;
        }
    }

    static void sortEmployeesByName(Employee emp[])
    {
        int flag;

        for (int i = 0; i < size; i++)
        {
            flag = 1;
            for (int j = 0; j < size - 1 - i; j++)
            {
                if (strcmp(emp[j].name, emp[j + 1].name) == 1)
                {
                    swap(&emp[j], &emp[j + 1]);
                    flag = 0;
                }
            }
            if (flag)
                break;
        }
    }

    static void inputEmployeeDetail(Employee emp[], int num)
    {
        for (int i = 0; i < num; i++)
        {
            cout << "Enter employee id -> ";
            int id{0};
            cin >> id;
            cin.ignore(); //flush buffer memory
            cout << "Enter employee name -> ";
            char name[20];
            cin.getline(name, 20);
            cout << "Enter employee salary -> ";
            float salary{0.0};
            cin >> salary;
            emp[i].setEmployeeData(id, name, salary);
            cin.ignore(); //flush buffer memory
        }
    }
};

int Employee::size; //memory allocation of static member variable

int main()
{
    cout << "Employee Number -> ";
    int num{0};
    cin >> num;
    cin.ignore(); //flush buffer memory
    Employee e[num];

    Employee::inputEmployeeDetail(e, num);

    cout << "Sorted by Employee Salary" << endl;
    Employee::sortEmployeesBySalary(e);
    Employee::displayEmployees(e);

    cout << "Sorted by Employee ID" << endl;
    Employee::sortEmployeesById(e);
    Employee::displayEmployees(e);

    cout << "Sort by Employee Name" << endl;
    Employee::sortEmployeesByName(e);
    Employee::displayEmployees(e);

    return 0;
}
