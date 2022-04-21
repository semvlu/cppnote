/*
    WARNING
    in my perspective, member "digits" is a string w/o '.'
    if a BigInt is int, dotPlace = 0
    and for decimal, e.g. 1.22 -> dotPlace = 1, 66.21543 -> dotPlace = 2, etc.
*/
#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class BigInt
{
private:
	bool type;	//0:Integer	1:Decimal
	string name;
	string digits;
	int dotPlace;
	static vector<BigInt*> All; //�s�Ҧ��ܼ�
public:
	BigInt() { name = ""; };
	BigInt(string n) { name = n; };
	BigInt(bool, string, string);
//================================================================== 
// declare operator  & function existence
    BigInt operator*(const BigInt rhs) const;
    void setType(bool t);
    void setDigits(string dgt);
    void setDotPlace(int d);
//================================================================== 
};

//================================================================== 
// codes begin here
void BigInt::setType(bool t) { type = t; }
void BigInt::setDigits(string dgt) { digits = dgt; }
void BigInt::setDotPlace(int d) { dotPlace = d; }

BigInt BigInt::operator*(const BigInt rhs) const
{
    BigInt c;
    string ans;
    bool ansType;
    int decPt = dotPlace + rhs.dotPlace;
    int len1 = digits.size();
    int len2 = rhs.digits.size();
    // 101 0s
    string dec_0 = "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";

    // judge ans int or dec
    if (type == 0 && rhs.type == 0)
        ansType = false;
    else
        ansType = true;

    if (digits == "0" || rhs.digits == "0" || digits = dec_0 || rhs.digit == dec_0)
        if (ansType == false)
            ans = "0";
        else
            ans = dec_0;

    else
    {
        vector <int> res(len1 + len2, 0);
        int _1 = 0;
        int _2 = 0;

        for (int i = len1 - 1; i >= 0; i--)
        {
            int cry = 0;
            int n1 = digits[i] - '0';

            // shift pos to l after every multiplication of a digit in rhs
            _2 = 0;
            // go from right to left in rhs
            for (int j = len2 - 1; j >= 0; j--)
            {
                // take current digit of second number
                int n2 = rhs.digits[j] - '0';
                // multiply with current digit of 1st num & add res to prev stored res at current pos
                int sum = n1 * n2 + res[_1 + _2] + cry;
                // carry for next iteration
                cry = sum / 10;
                res[_1 + _2] = sum % 10;
                _2++;
            }
            // store carry in next cell
            if (cry > 0)
                res[_1 + _2] += cry;
            // shift pos to left after every multiplication of a digit og       
            _1++;
        }

        // ignore 0s from the right
        int q = res.size() - 1;
        while (q >= 0 && res[q] == 0)
            q--;
        while (q >= 0)
            ans += to_string(res[q--]);

        if (ansType == 1)
            // retain only first 100 digits after decimal point
            ans.erase(decPt + 100); 
    }
    c.setDigits(ans);
    c.setDotPlace(decPt);
    c.setType(ansType);
    return c;
}
//==================================================================