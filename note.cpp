#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
int countDigit(int n) // count the digit
{
    if (n / 10 == 0)
        return 1;
    return 1 + countDigit(n / 10);
}

int main()
{
// variable length array
    int *ar;
    ar = new int[n];

    cout << fixed << setprecision(6) << n;

    stringstream ss;
    ss << list;
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

// init a private member in class
    class BankAccount
    {
    private:
        int total;
    };
    int BankAccount::total = 0;

// 2D vector init & print
    vector<vector<int> > vec(2, vector<int>(6, 0)); // (row, clmn(#clmn, elem))
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
}