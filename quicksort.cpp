#include<bits/stdc++.h>
using namespace std;
// 交换两个元素
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// 分区函数
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // 选择最后一个元素作为枢轴
    int i = low - 1; // i是较小元素的索引

    for (int j = low; j < high; j++) {
        // 如果当前元素小于或等于枢轴
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// 快速排序函数
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // pi是分区索引，arr[pi]现在位于正确的位置
        int pi = partition(arr, low, high);

        // 分别对左右子数组进行递归排序
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// 打印数组
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Unsorted array: ";
    printArray(arr, n);
    
    quickSort(arr, 0, n - 1);
    
    std::cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}
