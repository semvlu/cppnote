// Name: ªÂ¬f§g
// Date: May 24, 2022
// Last Update: May 24, 2022
// Problem statement: This C++ program does the template binary search task
#pragma once
#include <iostream>
#include <string>

template <typename T>
void ItrBinarySearch(const T a[], int first, int last, T key, bool& found, int& location)
{
    found = false;
    while (first <= last)
    {
        int mid = (first + last) / 2;
        if (a[mid] == key) {
            found = true;
            location = mid;
            return;
        }
        else if (a[mid] < key) 
            first = mid + 1;
        else
            last = mid - 1;
    }
    return;
}
template <typename T>
void RecBinarySearch(const T a[], int first, int last, T key, bool& found, int& location)
{
    found = false;
    if (first <= last)
    {
        int mid = (first + last) / 2;
        if (a[mid] == key)
        {
            found = true;
            location = mid;
            return;
        }
        else if (a[mid] < key)
            RecBinarySearch(a, mid + 1, last, key, found, location);
        else 
            RecBinarySearch(a, first, mid - 1, key, found, location);
    }
    return;
}