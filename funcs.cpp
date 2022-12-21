#include <iostream>
#include "funcs.h"

std::string printRange(int left, int right)
{
    if(left > right)
    {
        return "";
    }
    if(left == right)
    {
        return std::to_string(left);
    }
    else
    {
        return std::to_string(left) + " " + printRange(left + 1, right);
    }
}

int sumRange(int left, int right)
{
    if(left <= right)
    {
        return left + sumRange(left + 1, right);
    }
    else
    {
        return 0;
    }
}

int sumArray(int *arr, int size)
{
    if(size == 0)
    {
        return 0;
    }
    return *arr + sumArray(arr + 1, size - 1); 
}

bool isAlphanumeric(std::string s)
{
    if(s.length() == 0)
    {
        return true;
    }
    return std::isalnum(s[0]) && isAlphanumeric(s.substr(1, s.size() - 1));
}

bool nestedParens(std::string s)
{
    if(s.length() == 0)
    {
        return true;
    }
    bool first = s[0] == '(';
    bool last = s[s.length() - 1] == ')';

    return first && last && nestedParens(s.substr(1, s.length() - 2));
}