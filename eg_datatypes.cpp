#include <iostream>
using namespace std;

int main() {
    // Basic Data Types
    int age = 25;
    float pi = 3.14f;
    char grade = 'A';
    bool isStudent = true;

    // Derived Data Types
    int numbers[5] = {1, 2, 3, 4, 5};
    int* ptr = &age;

    // User-Defined Data Types
    struct Person {
        string name;
        int age;
        float height;
    };
    Person person = {"Alice", 30, 5.7};

    // Printing the values
    cout << "Age: " << age << endl;
    cout << "Pi: " << pi << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student: " << isStudent << endl;
    cout << "First number in array: " << numbers[0] << endl;
    cout << "Pointer to age: " << *ptr << endl;
    cout << "Person's Name: " << person.name << endl;

    return 0;
}
