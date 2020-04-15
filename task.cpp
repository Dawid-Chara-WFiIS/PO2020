#include <iostream>
#include <string>

class A {
    public:
        friend std::ostream& operator << (std::ostream& out, const A& a)
        {
            std::cout<< "Object --> '"<< a._str <<"' at loc: " << &a;

        }
        A() : _str("default") {}
        A(A&& a)
        {
            _str = std::move(a._str);
            std::cout<<"move succeeded by constructor\n";
        }
        A(const A& other) : _str(other._str)
        {
            std::cout << "move failed by constructor\n";
        }
        A& operator = (A&& a)
        {
            _str = std::move(a._str);
            std::cout << "move succeeded by operator=\n";
        }
        A& operator = (const A& a)
        {
            _str = a._str;
            std::cout << "move failed by operator=\n";

        }
        void set(std::string str) {_str=str;}
    private:
        std::string _str;
};

A foo(A a) { return a; }
A bar(){ return A{}; }

int main() {
    std::cout << "1. --------------------\n";
    A a1 = foo(A());        
    std::cout << a1 << "\n";
    A a2 = a1;
    std::cout << a1 << "\n";
    std::cout << a2 << "\n";

    std::cout << "\n2. --------------------\n";
    a1.set("lvalue before explicit move");
    A a3 = std::move(a1);          
    std::cout << a1 << "\n";
    std::cout << a3 << "\n";
    
    std::cout << "\n3. --------------------\n";
    a1 = bar();
    
    std::cout << "\n4. --------------------\n";
    const A a4 {};
    a1 = std::move(a4);
    std::cout << a1 << "\n";
    std::cout << a4 << "\n";
}