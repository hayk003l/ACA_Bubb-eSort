#include <iostream>
#include "BubbleSort.hpp"

int main() {

    int arr[] = {1, 9, 2, 8, 4};
    bubbleSort(arr, 5);

    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }


}