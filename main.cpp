#include <iostream>
#include <exception>
#include "KD.h"
#include "KD.cpp"
using namespace std;


int main()
{
	BadRange array;

	try
	{
		int value{ array[5] };
	}
	catch (const Bad_range& exception)
	{
		cout << "An array exception occurred (" << exception.what() << ")\n";
	}
	catch (const exception& exception)
	{
		cout << "Some other std::exception occurred (" << exception.what() << ")\n";
	}

	BadLength Array;

	try
	{
		int value{ Array[5] };
	}
	catch (const Bad_length& exception)
	{
		cout << "An array exception occurred (" << exception.what() << ")\n";
	}
	catch (const exception& exception)
	{
		cout << "Some other std::exception occurred (" << exception.what() << ")\n";
	}

	return 0;
}