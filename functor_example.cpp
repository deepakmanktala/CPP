#include <iostream>
#include <vector>
#include <algorithm>

// Functor that adds a given value to each element
class Adder {
private:
    int value;

public:
    // Constructor to initialize the value to be added
    Adder(int v) : value(v) {}

    // Overloading operator() to make this class a functor
    void operator()(int& element) const {
        element += value;
    }
};

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Create a functor that adds 10 to each element
    Adder add10(10);

    // Use the functor with std::for_each to add 10 to each element of the vector
    std::for_each(numbers.begin(), numbers.end(), add10);

    // Output the modified numbers
    std::cout << "Modified numbers: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
