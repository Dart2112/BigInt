/**
 * Computer Programming 2 (COMP2711, COMP8801)
 * Assignment 1: Bigint
 */

#include <iostream>
#include <string>
#include "Bigint.h"

using namespace std;

Bigint::Bigint()
{
    for (int i = DIGITS-1; i >= 0; --i) {
        digits_[i] = 0;
    }
}

ostream& operator<< (ostream& out, const Bigint& n)
{
    // Inserts full-length number (does not suppress leading zeros).
    string s = "";
    for (int i = 0; i < DIGITS; ++i) {
        s += char(n.digits_[i] + '0');
    }
    return out << s;
}

istream& operator>> (istream& in, Bigint& n)
{
    // Extracts full-length number (does not work for any other length).
    // All characters are assumed to be valid digits.
    string s;
    if (in >> s) {
        for (int i = 0; i < DIGITS; ++i) {
            n.digits_[i] = int(s[DIGITS-1 - i] - '0');
        }
    }
    return in;
}

Bigint operator+ (const Bigint& n1, const Bigint& n2)
{
    return n1; // Only correct when n2 equals 0.
}

Bigint operator- (const Bigint& n1, const Bigint& n2)
{
    return n1; // Only correct when n2 equals 0.
}

Bigint operator* (const Bigint& n1, const Bigint& n2)
{
    return n1; // Only correct when n2 equals 1.
}

Bigint operator/ (const Bigint& n1, const Bigint& n2)
{
    return n1; // Only correct when n2 equals 1.
}
