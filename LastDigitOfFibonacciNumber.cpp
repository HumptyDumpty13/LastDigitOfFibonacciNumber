#include <cassert>
#include <iostream>
#include<vector>

class Fibonacci final {
public:
    static int get(int n) {
        assert(n >= 0);
        std::vector<int> Fib;
        Fib.push_back(0);
        Fib.push_back(1);
        for (int i = 2; i <= n; ++i) {
            Fib.push_back((Fib[i - 1] + Fib[i - 2]) % 10);
        }
        return Fib[n];
    }
};

int main(void) {
    int n;
    std::cin >> n;
    std::cout << Fibonacci::get(n) << std::endl;
    return 0;
}