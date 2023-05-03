#include <string>
#include <string_view>
#pragma once
using namespace std;

class Bad_range : public exception
{
private:
    string m_error{};

public:
    Bad_range (const char* error) : m_error{ error }
    {
    }

    const char* what() const noexcept override { return m_error.c_str(); }
};

class Bad_length : public exception
{
private:
    string m_error{};

public:
    Bad_length(const char* error) : m_error{ error }
    {
    }

    const char* what() const noexcept override { return m_error.c_str(); }
};