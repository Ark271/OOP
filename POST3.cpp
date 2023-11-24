#include <iostream>
using namespace std; 

class Tinh {
public:
    int add(int a, int b) {
        return a + b;
    }
};
int main() {
    Tinh tong;
    int a, b;
    std::cin >> a >> b;
    int sum = tong.add(a, b);
    std::cout << sum << std::endl;
    return 0;
}
