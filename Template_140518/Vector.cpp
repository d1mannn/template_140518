#include "Vector.h"


//template<typename type>
//Vector::Vector(int n)
//{
//	this->size = n; 
//	els = new type[n];
//}

//Vector::~Vector()
//{
//	delete[]els;
//}

template<typename type>
ostream & operator<<(ostream & os, Vector<type> a)
{	
	for (int i = 0; i < a.size; i++)
	{
		cout << a.els[i] << "\t";
	}
	cout << endl;
	// TODO: insert return statement here
	return os;
}

template<typename type>
istream & operator >> (istream & is, Vector <type>&a)
{	
	for (int i = 0; i < a.size; i++)
	{	
		is >> a.els[i];
	}
	// TODO: insert return statement here
	return is;
}
