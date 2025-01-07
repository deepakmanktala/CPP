#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Initialize a vector of integers
    vector<int> vec = {1, 2, 3, 4, 5};

    // Declare an iterator for the vector
    vector<int>::iterator it;

    // Using the iterator to traverse and print the vector
    cout << "Using iterator to traverse the vector:" << endl;

    // Iterator-based loop
    for (it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";  // Dereference the iterator to get the value
    }
    cout << endl;

    // Alternative: Using range-based for loop with iterators
    cout << "Using range-based for loop with iterators:" << endl;
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Another way: using const iterator (to prevent modification of elements)
    cout << "Using const iterator to traverse the vector:" << endl;
    for (vector<int>::const_iterator cit = vec.begin(); cit != vec.end(); ++cit) {
        cout << *cit << " ";
    }
    cout << endl;

    return 0;


    let mut iterator =  vec![
        "A",
        "B",
        "C"
    ]into.iter();

    let enumerated = iterator.enumerate();

    enumerated.next();
    enumerated.next();
}
