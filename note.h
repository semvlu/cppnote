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

// copy constructor & destructor
class PFArrayD
{
private:
    double *a; //for an array of doubles.
    int capacity;
    int used;
public:
    PFArrayD();
    PFArrayD(int capacityValue);
    PFArrayD(const PFArrayD& obj):capacity(obj.getCapacity( )), used(obj.getNumberUsed( ))
    {
        a = new double[capacity];
        for (int i =0; i < used; i++)
            a[i] = obj.a[i];
    }
    ~PFArrayD(){ delete[] a; }
};

PFArrayD b(20);
for ( int i = 0; i < 20; i++)
b.addElement(i);
PFArrayD temp(b);
class Position
{
public:
    Position(const Position&) = default;
};

// operator
class Matrix
{
public:
    int row;
    int clmn;
    vector <vector <int> > elem;

    Matrix(int m , int n)
    {
        row = m;
        clmn = n;
        elem.resize(m);
        for (int i = 0; i < elem.size(); i++)
            elem[i].resize(n);
    }

    Matrix(vector < vector<int> > e)
    {
        elem.resize(e.size());
        for (int i = 0; i < elem.size(); i++)
            elem[i].resize(e[i].size());

        for (int i = 0; i < elem.size(); i++)
        {
            for (int j = 0; j < elem[i].size(); j++)
                elem[i][j] = e[i][j];
        }
    }

    int getElem(Matrix a, int i, int j) { return a.elem[i][j]; }
    int getRow() { return row; }
    int getClmn() { return clmn; }
// member (unary)
    Matrix operator+(Matrix& a)
    {
        vector <vector <int> > c;
        c.resize(elem.size());
        for (int i = 0; i < elem.size(); i++)
            c[i].resize(elem[i].size());

        for (int i = 0; i < a.elem.size(); i++)
        {
            for (int j = 0; j < a.elem[i].size(); j++)
                c[i][j] = elem[i][j] + a.elem[i][j];
        }
        return Matrix(c);
    }
// non-member (binary)
    friend int operator*(Matrix a, Matrix b);
};
// or assign member outside the class
Matrix Matrix::operator+(Matrix a){}
// non-member
int operator*(Matrix a, Matrix b){}
bool operator==(Matrix a, Matrix b) // bool: > < ==
{
    return (a.getRow == b.getRow()
            && a.getClmn == b.getClmn());
}
ostream& operator<<(ostream& strm, const Matrix& a)
{
    int r = a.row;
    for (int i = 0; i < r; i++)
        strm << v.value[i] << " ";
    return strm;
}
// prefix & postfix increment
INT operator++()
{
    INT temp;
    temp.i = ++i;
    return temp;
}
INT operator++(int)
{
    INT temp;
    temp.i = i++;
    return temp;
}
int &Array::operator[](int idx) { return ar[idx]; }

// inheritance & polymorphism (virtual/ override)
class Obj
{
public:
    string a;
    int b;
    Obj(string c, int i)
    {
        a = c;
        b = i;
    }

    virtual void print() = 0;
};
class vir : public Obj
{
public:
    vir(string c, int i) : Obj(c, i)
    {
        a = c;
        b = i;
    }
    void print() override
    {
        cout << "THis is a child func from parent virtual func!!" << endl;
    }
};

template <class T>
void swap(T var1, T var2)
{
    T temp;
    temp = var1;
    var1 = var2;
    var2 = temp;
}

// template
template <class T>
void swapVal(T var1, T var2)
{
    T temp;
    temp = var1;
    var1 = var2;
    var2 = temp;
}

template <const int *pci> struct X{};
int ai[10];
X<ai> xi;