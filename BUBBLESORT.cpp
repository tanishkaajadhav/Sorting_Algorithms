//

#include <iostream>
using namespace std;

class BubbleSort
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
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
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
    BubbleSort obj;
    obj.InputArray();
    obj.Sort();
    obj.Display();

    return 0;
}

/*
OUTPUT

*/