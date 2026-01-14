// Program 41: Simple class and object
#include <iostream>

using namespace std;
class Person {
public:
    string name;
    int age;

    void introduce() {
        cout << "Hi, my name is " << name << " and I am " << age << " years old." << endl;
    }
};

int main() {
    Person p1;
    p1.name = "Alice";
    p1.age = 25;

    Person p2;
    p2.name = "Bob";
    p2.age = 30;

    p1.introduce();
    p2.introduce();

    return 0;
}



