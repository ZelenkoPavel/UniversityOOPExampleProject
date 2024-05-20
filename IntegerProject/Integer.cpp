#include "Integer.h"
#include <Math.h>


int Integer::getValue() {
	return value;
}
void Integer::setValue(int value) {
	this->value = value;
}


Integer Integer::add(Integer integer) {
	Integer temp = value + integer.value;
	return temp;
}
Integer Integer::sub(Integer integer) {
	return Integer(value - integer.value);
}
Integer Integer::mul(Integer integer) {
	return Integer(value * integer.value);
}
Integer Integer::div(Integer integer) {
	return Integer(value / integer.value);
}
Integer Integer::power(int n) {
	return Integer(pow(value, n));;
}
Integer Integer::mod(Integer integer) {
	return Integer(value % integer.value);
}
Integer Integer::opp() {
	return Integer(-value);
}



//////////////
Integer Integer::operator+(Integer integer) {
	return add(integer);
}
Integer Integer::operator-(Integer integer) {
	return sub(integer);
}
Integer Integer::operator*(Integer integer) {
	return mul(integer);
}
Integer Integer::operator/(Integer integer) {
	return div(integer);
}
Integer Integer::operator^(int n) {
	return power(n);
}
Integer Integer::operator%(Integer integer) {
	return mod(integer);
}
Integer Integer::operator-() {
	return opp();
}


