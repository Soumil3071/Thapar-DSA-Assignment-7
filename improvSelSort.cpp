#include <iostream>
using namespace std;

void improvedSelectionSort(int arr[], int n) {
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        int minIndex = i;
        int maxIndex = i;
      
        for (int k = i; k <= j; k++) {
            if (arr[k] < arr[minIndex])
                minIndex = k;
            if (arr[k] > arr[maxIndex])
                maxIndex = k;
        }
        

        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
        
        if (maxIndex == i)
            maxIndex = minIndex;
        
      
        if (maxIndex != j) {
            int temp = arr[j];
            arr[j] = arr[maxIndex];
            arr[maxIndex] = temp;
        }
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11, 90, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    
    improvedSelectionSort(arr, n);
    
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    
    return 0;
}
