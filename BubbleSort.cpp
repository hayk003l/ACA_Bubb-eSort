#include "BubbleSort.hpp"


void bubbleSort(int* arr, const int& size) {
    for (int i = 1; i < size; ++i) {
        for (int j = 0; j < size - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}
