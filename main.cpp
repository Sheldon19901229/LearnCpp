#include <iostream>
#include <memory>
#include "LearnStl.h"
#include "Sort.h"

using namespace std;

int main() {
    unique_ptr<LearnStl> stl = make_unique<LearnStl>();
    unique_ptr<Sort> sort = make_unique<Sort>();
    int arr[6] = {2,3,5,1,4,9};
    sort->QuickSort(arr,0,5);
    auto print_arr = [=]()-> int {
        for (auto n : arr) {
            std::cout << n << " " << std::endl;
        }
        return 0;
    };
    print_arr();
    return 0;
}