///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name:
// Student No:
// Date: 
///////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

// ***** QUESTION 3 ******
// Question 3 has 3 parts
// 3.1 Using the MINIMAL "Fraction" class provided, overload the greater than operator to work with
//     objects of class Fraction as a NON-MEMBER FUNCTION.   You may modify the Fraction class to 
//     demonstrate friendship.  DO NOT USE FLOATING POINT MATH!!!
// 3.2 Overload two functions called "add" which take two arguements, an integer and a fraction (in 
//     either order) and return a fraction.  
// 3.3 create a driver program to test your overloaded > operators and your overloaded 

class Fraction {
public:
	int num;				// numerator;
	int denom;				// denominator;
public:
	Fraction(int n, int d) : num(n), denom(d) { 
	
	};
	
	Fraction() : num(0), denom(0)
	{
	}
	~Fraction(){
	}

	friend  Fraction operator>(Fraction&p, Fraction& t);

	void print()
	{ 
		cout << num << "/" << denom;
	};
	//3.2

	Fraction add(int p,Fraction fun){
		Fraction frac;
		frac.num = fun.num + fun.denom*p;
		frac.denom = fun.denom*1;
		return frac;
	}

	Fraction add(Fraction fun, int p){
			Fraction frac;
			frac.num = fun.num + fun.denom*p;
			frac.denom = fun.denom * 1;
			return frac;
		}
};

Fraction operator>(const Fraction&p,const Fraction& t){
	

	if (p.num / p.denom > t.num / t.denom){
		return p;
	}
	else{
		return t;
	}

}

int main(){
	Fraction fact1, fract2;
	Fraction obj;
	
	int in;

	cout << "" << endl;
	cin >> fact1.num;
	cin >> fact1.denom;
	cin >> fract2.num;
	cin >> fract2.denom;

	cout << "The greater faction is:" << endl;

	/*if(fact1 > fact1)
	{
		cout << fact1.num << "/" << fact1.denom << endl;
	}
	else{
		cout << fract2.num << "/" << fract2.denom << endl;
	}*/


	cout << "Addintion :" << endl;
	cin >> fact1.num;
	cin >> fact1.denom;

	cout << "Integer to add to fraction:" << endl;
	cin >> in;

	cout << "Result Add 1: " << obj.add(in, fact1).num << "/"<< obj.add(in, fact1).denom << endl;
	cout << "Result Add 2: " << obj.add(fact1, in).num << "/" << obj.add(fact1,in ).denom << endl;

	return 0;
}
