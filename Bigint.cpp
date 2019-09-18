/**
 * Computer Programming 2 (COMP2711, COMP8801)
 * Assignment 1: Bigint
 */

#include <iostream>
#include <string>
#include "Bigint.h"

using namespace std;

Bigint::Bigint() {
    for (int i = DIGITS - 1; i >= 0; --i) {
        digits_[i] = 0;
    }
}

ostream &operator<<(ostream &out, const Bigint &n) {
    //Outputs the number to something else, probably cout
    string s = "";
    bool printing = false;
    for (int i = DIGITS - 1; i >= 0; i--) {
        if (n.digits_[i] != 0) {
            printing = true;
        }
        if (printing)
            s += char(n.digits_[i] + '0');
    }
    return out << s;
}

istream &operator>>(istream &in, Bigint &n) {
    // Brings in a number, needs to work with less chars
    // Extracts full-length number (does not work for any other length).
    // All characters are assumed to be valid digits.
    string s;
    if (in >> s) {
        int length = s.size();
        int j = 0;
        for (int i = length - 1; i >= 0; --i) {
            n.digits_[i] = int(s[j] - '0');
            j++;
        }
    }
    return in;
}

Bigint operator+(const Bigint &n1, const Bigint &n2) {
    Bigint finalResult;
    int carry = 0;
    for (int i = 0; i < DIGITS; i++) {
        int result = n1.digits_[i] + n2.digits_[i] + carry;
        carry = 0;
        while (result > 9) {
            carry++;
            result -= 10;
        }
        finalResult.digits_[i] = result;
    }
    return finalResult;
}

Bigint operator-(const Bigint &n1, const Bigint &n2) {
    return n1; // Only correct when n2 equals 0.
}

Bigint operator*(const Bigint &n1, const Bigint &n2) {
    return n1; // Only correct when n2 equals 1.
}

Bigint operator/(const Bigint &n1, const Bigint &n2) {
    return n1; // Only correct when n2 equals 1.
}
