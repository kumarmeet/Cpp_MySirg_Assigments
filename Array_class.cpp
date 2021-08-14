#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Array
{
private:
    int capacity;
    int *arr;
    int index;
    void swap(int *a, int *b)
    {
        int c;
        c = *a;
        *a = *b;
        *b = c;
    }

public:
    void setCapacity(int cap)
    {
        if (cap < 0)
            capacity = -cap;
        capacity = cap;
        index = -1;
        arr = (int *)malloc(sizeof(int) * capacity);
    }

    void setItem(int i)
    {
        if (index >= -1 && index < (capacity - 1))
            arr[++index] = i;
        else
            cout << "Out of bound" << endl;
    }

    int getCapacity()
    {
        return capacity;
    }

    int getIndex()
    {
        return index;
    }

    int getElement(int idx)
    {
        if (index < 0)
            return -1;
        return arr[idx];
    }

    void inputArrayElements()
    {
        cout << "Enter " << getCapacity() << " elements " << endl;
        for (int i = (index + 1); i < getCapacity(); i++)
            cin >> arr[i];
    }

    int findMax()
    {
        int max = arr[0];
        for (int i = 1; i < getCapacity(); i++)
        {
            if (max < arr[i])
                max = arr[i];
        }
        return max;
    }

    int findMin()
    {
        int max = arr[0];
        for (int i = 1; i < getCapacity(); i++)
        {
            if (max > arr[i])
                max = arr[i];
        }
        return max;
    }

    void sort()
    {
        int flag;

        for (int i = 0; i < getCapacity() - 1; i++)
        {
            flag = 1;
            for (int j = 0; j < getCapacity() - 1 - i; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(&arr[j], &arr[j + 1]);
                    flag = 0;
                }
            }
            if (flag)
                break;
        }
    }

    void editElement(int idx, int ele)
    {
        if (idx > -1)
        {
            index = idx;
            arr[index] = ele;
        }
        else
            cout << "Invalid index" << endl;
    }

    int sumOfElement()
    {
        int sum{0};
        for (int i = 0; i < getCapacity(); i++)
            sum += arr[i];
        return sum;
    }

    float averageOfElements()
    {
        return (float)sumOfElement() / (float)getCapacity();
    }

    void printArray()
    {
        for (int i = 0; i < getCapacity(); i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main()
{
    Array a1;
    a1.setCapacity(5);

    a1.inputArrayElements();
    cout << "Array elements -> ";
    a1.printArray();

    cout << "Max -> " << a1.findMax() << endl;
    cout << "Min -> " << a1.findMin() << endl;

    cout << "After sorting -> ";
    a1.sort();
    a1.printArray();

    cout << "Sum of array's elements -> " << a1.sumOfElement() << endl;
    cout << "Average of array's elements -> " << a1.averageOfElements() << endl;

    return 0;
}
