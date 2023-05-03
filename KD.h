#ifndef KD_H
#define KD_H

#include "KD.cpp"
#include <exception>
using namespace std;

class BadRange : public exception
{
private:
    int m_data[3]{};

public:
    BadRange() {}

    int getRange() const { return 3; }

    int& operator[](const int index)
    {
        if (index < 0 || index >= getRange())
            throw Bad_range("Invalid range");

        return m_data[index];
    }

};


class BadLength : public exception
{
private:
    int m_data[3]{};

public:
    BadLength() {}

    int getLength() const { return 3; }

    int& operator[](const int index)
    {
        if (index < 0 || index >= getLength())
            throw Bad_length("Invalid length");

        return m_data[index];
    }

};

#endif