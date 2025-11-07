#include <iostream>

int main() {
    // Disable synchronization with C stdio for faster I/O
    std::ios_base::sync_with_stdio(false);
    
    // Untie cin from cout
    std::cin.tie(nullptr);
    
    // Print Hello World
    std::cout << "Hello World!" << '\n';
    
    return 0;
}