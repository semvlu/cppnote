#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <sstream>
#include "note.h"
using namespace std;

int main()
{
// data type conversion
    int b = static_cast <int> (2.5);

// variable length array
    int *ar;
    ar = new int[n];
// dynamic array memory clear
    delete [] ar;
    ar = nullptr;

    cout << fixed << setprecision(6) << n;

    stringstream ss;
    ss << list; // string list
    int num;
    while (ss >> num)
        a.push_back(num);
//sort  by desc order
    sort(a.begin(), a.end(), greater<int>());
// count the time the elem a[n] appears
    int cntr = count(a.begin(), a.end(), a[n]);

// "." not included
    string subX = x.substr(0, x.find("."));
    x.erase(0, x.find("."));

// 2D vector init & print
    vector<vector<int> > vec(2, vector<int>(6, 0)); // (row, clmn(#clmn, elem))
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }

    map <string, int> m;
    m["London"] = 0;
    m["Paris"] = 1;

    {
        using namespace NS1;
        test();
    }

// putback
    char c, d;
    cin.putback('A');
    cin.putback('b');
    cin >> c >> d; // c = 'b', d = 'A'

//ignore
    char first, last;
    first = cin.get();     // get one character
    cin.ignore(256, ' ');   // ignore until space
    last = cin.get();      // get one character
    cout << "Your initials are " << first << last << '\n';

// peek
    istringstream s("Laptop");
    char c1 = s.peek();
    char c2 = s.get();
    char c3 = s.get();
    char c4 = s.get();
    cout << c1 << endl << c2 << endl
         << c3 << endl << c4 << endl;
}
