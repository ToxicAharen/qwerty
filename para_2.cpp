#include <iostream>

struct  product{
private:
    double first_;
    size_t second_;
public:
    product(double first, size_t second) : first_(first), second_(second) {}
    double cost() {
        return first_ * second_;
    }
};

int main() {
    product a(10.75, 50);
    std::cout << a.cost() << std::endl;
    return 0;
}