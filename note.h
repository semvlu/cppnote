#pragma once
#include <iostream>
class K
{
public:
    // constructor format
    K() : num(77), pos(88){} // or
/*
    K()
    {
        num = 77;
    } // or
    K() = default;
*/
    // destructor
    ~K(){}
    // if class member needs to manage memory, has to define destructor to release
private:
    int num;
    int pos;
};

// init a static member in class
class BankAccount
{
private:
    static int total;
};
int BankAccount::total = 0;

int countDigit(int n) // count the digit
{
    if (n / 10 == 0)
        return 1;
    return 1 + countDigit(n / 10);
}

// friend
class B;
class A
{
public:
    A() : num(12){}
    friend class C;
    friend int add(A a, B b); // friend function
private:
    int num;
};
class B
{
public:
    B() : num(73){}
    friend int add(A a, B b); // friend function
private:
    int num;
};
int add(A a, B b) // friend function
{
    return (a.num + b.num);
}
// friend class
class C
{
public:
    void print(A a)
    {
        cout << a.num << endl;
    }
};

// namespace
namespace NS1
{
    void test()
    {
        std::cout << "This is a func from namespace NS1" << std::endl;
    }
}