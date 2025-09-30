#include <iostream>
using namespace std;

class QuickSort
{
private:
    int arr[50], n;

    int Partition(int low, int high)
    {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; j++)
        {
            if (arr[j] < pivot)
            {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;
        return i + 1;
    }

    void QuickSortRec(int low, int high)
    {
        if (low < high)
        {
            int pi = Partition(low, high);
            QuickSortRec(low, pi - 1);
            QuickSortRec(pi + 1, high);
        }
    }

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
        QuickSortRec(0, n - 1);
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
    QuickSort obj;
    obj.InputArray();
    obj.Sort();
    obj.Display();

    return 0;
}

/*
OUTPUT
Enter number of elements: 7
Enter elements:
10 7 8 9 1 5 6
Sorted array:
1 5 6 7 8 9 10
*/