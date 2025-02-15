#ifndef LARGEINT_H
#define LARGEINT_H

#include <string>
#include <iostream>

bool isValidNumberString(std::string str);

class LargeInt {
private:
    std::string numberString;
    enum Sign { Positive = 1, Negative = -1 };
    Sign sign;

    void normalize();
    void trimzeroforstring(std::string& str) const;
    int compare(const std::string& a, const std::string& b) const;
    void invertSign();
    std::string addHelper(std::string a, std::string b) const;
    std::string subtractHelper(std::string a, std::string b) const;
    enum PaddingType { LEFT, RIGHT };
    std::string padString(const std::string& str, size_t n, PaddingType paddingType) const;
    std::string multiplyXY(const std::string& x, const std::string& y) const;
    std::string multipleHelper(std::string lhs, std::string rhs) const;
    std::string divideHelper(std::string str1, const std::string str2) const;
    std::string powerHelper(const std::string& a, const std::string exp) const;

public:
    LargeInt();
    LargeInt(std::string str);
    LargeInt(int num);
    LargeInt(const LargeInt& num);

    friend std::ostream& operator << (std::ostream& stream, const LargeInt& n);
    bool operator==(const LargeInt& rhs) const;
    bool operator>(const LargeInt& rhs) const;
    LargeInt operator-() const;
    LargeInt operator+(const LargeInt& rhs) const;
    LargeInt operator-(const LargeInt& rhs) const;    
    LargeInt operator*(const LargeInt& rhs) const;
    LargeInt operator/(const LargeInt& rhs) const;
    static LargeInt l_pow(const LargeInt& base, const LargeInt& exp);
};

#endif
