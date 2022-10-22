#include "MyInteger.h"
//defalut parameterize constructor that set the variale value with v
MyInteger::MyInteger(int v)
{
	value = v;
}
//setter method for variable value
void MyInteger::SetValue(int v)
{
	value = v;
}
//getter method for variable value
//return the value
int MyInteger::GetValue() const
{
	return value;
}
//+ operator overloading the add two MyInteger object and return resulatant object
MyInteger MyInteger::operator+(const MyInteger &r) const
{
	return MyInteger(value + r.GetValue());
}
//- operator overloading the subtract two MyInteger object and return resulatant object
MyInteger MyInteger::operator-(const MyInteger &r) const
{
	return MyInteger(value - r.GetValue());
}
//* operator overloading the multiplication two MyInteger object and return resulatant object
MyInteger MyInteger::operator*(const MyInteger& r) const
{
	return MyInteger(value * r.GetValue());
}
//+ operator overloading the devide this MyInteger object with object that have passed and return resulatant object
MyInteger MyInteger::operator/(const MyInteger& r) const
{
	return MyInteger(value / r.GetValue());
}
//== operator overloading that will check for equality of two object
bool MyInteger::operator==(const MyInteger &r) const
{
	return value == r.value;
}
//!= operator overloading that will check for equality of two object
bool MyInteger::operator!=(const MyInteger& r) const
{
	return value != r.value;
}
//overloading insertion operator that will print the info of MyInteger class
ostream & operator<<(ostream & out, const MyInteger & r)
{
	out << r.GetValue();
	return out;
}
//overloading extraction  operator that will take input from the user and assign to the MyInteger class
istream & operator>>(istream & in, MyInteger & r)
{
	in >> r.value;
	return in;
}