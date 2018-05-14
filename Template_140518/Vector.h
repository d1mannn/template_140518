#pragma once
#include <iostream>
using namespace std;
template<typename type>
class Vector
{
public:

	Vector(int n)
	{
		this->size = n;
		els = new type[n];
	};
	Vector(const Vector & obj) // если есть деструктор, то конструктор копирования обязательно должен быть
	{
		this->size = obj.size;
		this->els = new type[size];
		for (int i = 0; i < this->size; i++)
		{
			this->els[i] = obj.els[i];
		}
	}
	virtual ~Vector() 
	{ 
		delete[]els; 
	};
	template<typename type>
	friend ostream&operator << (ostream& os, Vector <type>a);
	template<typename type>
	friend istream& operator >> (istream& is, Vector <type>&a);
private:
	type * els;
	size_t size;
};

