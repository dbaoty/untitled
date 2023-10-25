#include <iostream>
#include "lib/stack.h"

int main(int argc, char **argv) {
    Stack<int> s(100);

    std::cout << "Size: " << s.size() << std::endl;
    std::cout << "Capacity: " << s.capacity() << "\n" << std::endl;

    for (int i = 0; i < s.capacity(); ++i) {
        s.push(10);
    }

    std::cout << "Size: " << s.size() << std::endl;
    std::cout << "Capacity: " << s.capacity() << "\n" << std::endl;

    std::cout << "s.pop(): " << s.pop() << "\n" << std::endl;

    std::cout << "Size: " << s.size() << std::endl;
    std::cout << "Capacity: " << s.capacity() << std::endl;
}