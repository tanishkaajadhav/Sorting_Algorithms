#include <iostream>
using namespace std;

class SelectionSort
{
private:
    int arr[50], n;

public:
    void InputArray()
    {
        cout << "Enter number of elements: ";
        cin >> n;
        cout << "Enter elements:\n";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }

    void Sort()
    {
        for (int i = 0; i < n - 1; i++)
        {
            int minIdx = i;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[minIdx])
                    minIdx = j;
            }
            int temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }
    }

    void Display()
    {
        cout << "Sorted array:\n";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

int main()
{
    SelectionSort obj;
    obj.InputArray();
    obj.Sort();
    obj.Display();

    return 0;
}

/*
OUTPUT
Enter number of elements: 5
Enter elements:
29 10 14 37 13
Sorted array:
10 13 14 29 37
*/