#include <iostream>      // For input (cin) and output (cout)
#include <vector>        // Vector STL
#include <stack>         // Stack STL
#include <queue>         // Queue & Priority Queue STL
#include <deque>         // Double-ended queue
#include <set>           // Set (unique & sorted elements)
#include <map>           // Map (key-value pairs)
#include <algorithm>     // Sort, reverse, find
using namespace std;     // Avoid writing std:: every time

// 🔹 Call by Value Function
// Receives a COPY of variable; original value DOES NOT change
void callByValue(int x) {
    x = 100;
    cout << "Inside callByValue, x = " << x << endl;
}

// 🔹 Call by Reference Function
// Receives a REFERENCE of variable; original value CHANGES
void callByReference(int &x) {
    x = 200;
    cout << "Inside callByReference, x = " << x << endl;
}

int main() {

    // 🔹 1. Output (Printing on screen)
    cout << "Hello, welcome to C++" << endl;

    // 🔹 2. Variables & Data Types
    int age = 20;              // Integer
    float height = 5.0;        // Decimal / floating number
    char grade = 'A';          // Single character
    string name = "Jigyasa";   // Text / string

    // 🔹 3. Print variables
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Grade: " << grade << endl;

    // 🔹 4. Input from user
    int number;
    cout << "Enter a number: ";
    cin >> number; // cin is used to take input from user

    // 🔹 5. If-Else condition
    // Check if number is even or odd
    if (number % 2 == 0)
        cout << "Number is Even" << endl;
    else
        cout << "Number is Odd" << endl;

    // 🔹 6. For Loop (when number of iterations is known)
    cout << "Numbers 1 to 5: ";
    for (int i = 1; i <= 5; i++)
        cout << i << " ";
    cout << endl;

    // 🔹 7. While Loop (when iterations not fixed)
    int count = 1;
    while (count <= 3) {
        cout << "Count: " << count << endl;
        count++;
    }

    // 🔹 8. Array
    // Array stores multiple values of the same type
    int arr[3] = {10, 20, 30};
    cout << "Array elements: ";
    for (int i = 0; i < 3; i++)
        cout << arr[i] << " ";
    cout << endl;

    // 🔹 9. Arithmetic operations
    int a = 10, b = 5;
    cout << "Sum = " << a + b << endl;
    cout << "Difference = " << a - b << endl;
    cout << "Product = " << a * b << endl;
    cout << "Division = " << a / b << endl;

    // 🔹 10. Call by Value & Call by Reference
    int value = 10;
    cout << "Before function calls, value = " << value << endl;

    callByValue(value);          // original value does not change
    cout << "After callByValue, value = " << value << endl;

    callByReference(value);      // original value changes
    cout << "After callByReference, value = " << value << endl;

    // 🔹 11. STL: Vector (dynamic array)
    vector<int> v = {1, 2, 3};  // vector initialization
    v.push_back(4);             // add element at end
    cout << "Vector elements: ";
    for (int x : v) cout << x << " "; // range-based loop
    cout << endl;

    // 🔹 12. STL: Stack (LIFO: Last In First Out)
    stack<int> s;
    s.push(10);                 // push element
    s.push(20);
    cout << "Stack top: " << s.top() << endl; // top element
    s.pop();                     // remove top
    cout << "Stack top after pop: " << s.top() << endl;

    // 🔹 13. STL: Queue (FIFO: First In First Out)
    queue<int> q;
    q.push(10);                 // enqueue
    q.push(20);
    cout << "Queue front: " << q.front() << ", back: " << q.back() << endl;
    q.pop();                     // dequeue
    cout << "Queue front after pop: " << q.front() << endl;

    // 🔹 14. STL: Deque (double-ended queue)
    deque<int> dq;
    dq.push_back(10);            // insert at back
    dq.push_front(5);            // insert at front
    cout << "Deque elements: ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    // 🔹 15. STL: Set (unique & sorted)
    set<int> st = {5, 1, 3, 5}; // duplicates ignored, elements sorted
    cout << "Set elements (unique & sorted): ";
    for (int x : st) cout << x << " ";
    cout << endl;

    // 🔹 16. STL: Map (key-value pair)
    map<string, int> mp;
    mp["apple"] = 5;
    mp["banana"] = 3;
    cout << "Map elements:" << endl;
    for (auto it : mp) cout << it.first << " -> " << it.second << endl;

    // 🔹 17. STL: Algorithms
    vector<int> alg = {3, 1, 4, 2};
    sort(alg.begin(), alg.end());    // sort ascending
    cout << "Sorted vector: ";
    for (int x : alg) cout << x << " ";
    cout << endl;

    reverse(alg.begin(), alg.end());  // reverse
    cout << "Reversed vector: ";
    for (int x : alg) cout << x << " ";
    cout << endl;

    auto it = find(alg.begin(), alg.end(), 2); // find element
    if (it != alg.end()) cout << "Found 2 at index " << it - alg.begin() << endl;
    else cout << "2 not found" << endl;

    // 🔹 18. End of program
    cout << "Program finished successfully" << endl;

    return 0;   // program executed successfully
}
