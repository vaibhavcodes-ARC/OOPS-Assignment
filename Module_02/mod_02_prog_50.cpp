// Program 50: Count objects (static var)
#include <iostream>

using namespace std;
class Counter {
private:
    static int count;

public:
    Counter() {
        count++;
    }

    static void showCount() {
        cout << "Number of objects created: " << count << endl;
    }
};

// Initialize static member
int Counter::count = 0;

int main() {
    Counter::showCount();

    Counter c1;
    Counter c2;
    Counter c3;

    Counter::showCount();

    return 0;
}



