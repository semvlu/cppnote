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
    char* Id = const_cast<char*>(id);
    
    string str1;
    char* str2 = str1.c_str();;
    
    char* m;
    string mStr;
    int n = atoi(m);
    n = stoi(mStr);
    
// variable length array
    int *ar;
    ar = new int[n];

    cout << fixed << setprecision(6) << n;

// string to num with a line of string
    stringstream ss(list);
    int num;
    while (ss >> num)
        a.push_back(num);
//sort  by desc order
    sort(a.begin(), a.end(), greater<int>());
// count the time the elem a[n] appears
    int cntr = count(a.begin(), a.end(), a[n]);

    // "." not included
    string subX = x.substr(0, x.find(".")); // "." not included
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
}
