#include <iostream>   // Input-output ke liye header file
using namespace std;  // std likhne se bachne ke liye

int main() {

    // 🔹 1. Output (Print karna)
    cout << "Hello, welcome to C++ " << endl;

    // 🔹 2. Variables
    int age = 20;           // integer variable
    float height = 5.0;     // decimal value
    char grade = 'A';       // single character
    string name = "Jigyasa"; // text / string

    // 🔹 3. Print variables
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Grade: " << grade << endl;

    // 🔹 4. Input (User se value lena)
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // 🔹 5. If-Else condition
    if (number % 2 == 0) {
        cout << "Number is Even " << endl;
    } else {
        cout << "Number is Odd " << endl;
    }

    // 🔹 6. Loop (for loop)
    cout << "Numbers from 1 to 5:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    // 🔹 7. While loop
    int count = 1;
    while (count <= 3) {
        cout << "Count: " << count << endl;
        count++;
    }

    // 🔹 8. Array
    int arr[3] = {10, 20, 30};
    cout << "Array elements:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << endl;
    }

    // 🔹 9. Simple calculation
    int a = 10, b = 5;
    cout << "Sum = " << a + b << endl;
    cout << "Difference = " << a - b << endl;
    cout << "Product = " << a * b << endl;
    cout << "Division = " << a / b << endl;

    // 🔹 10. End of program
    cout << "Program finished successfully " << endl;

    return 0; // program successful
}
