#include <iostream>
#include <vector>
#include "sorting.h"

int main() {
    std::vector<int> arr = {4, 2, 7, 1, 5};

    sortinglibrary::bubbleSort(arr);

    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

