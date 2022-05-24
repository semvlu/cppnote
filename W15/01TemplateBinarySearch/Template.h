// Name: ªÂ¬f§g
// Date: May 24, 2022
// Last Update: May 24, 2022
// Problem statement: This C++ program does the template binary search task
#pragma once
#include <iostream>
using namespace std;

template <class T, int, int, class ¢â, bool, int>
bool ItrBinarySearch(const T a[], int first, int last, T key, bool& found, int& location)
{
    while (first <= last)
    {
        int mid = (first + last) / 2;
        if (key == a[mid])
            return mid;
        else if (target < a[mid])
            last = mid - 1;
        else
            first = mid + 1;
    }
    return false;
}
template <class T, int, int, class ¢â, bool, int>
bool RecBinarySearch(const T a[], int first, int last, T key, bool& found, int& location)
{
    if (first > last)
        return false;
    int mid = (first + last) / 2;
    if (key == a[mid])
        return mid;
    else if (key < a[mid])
        return RecBinarySearch(a[], first, mid - 1, key, &found, &location);
    else
        return RecBinarySearch(a[], mid + 1, last, key, &found, &location);
}

/*
	a[]: list be searched
	first: begin pos
	last: end pos
	key: element to be searched
	found: recording whether the key exists in the list a[]
	location: pos of key in a[]
	
	int string double
*/