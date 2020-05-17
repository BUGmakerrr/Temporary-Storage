#include <iostream>
using namespace std;
// 对象调const成员函数

//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	// void Print() - 》void Print(Date* this)
//	void Print() const // ->void Print(const Date* this)
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//		// 不能修改成员变量了，因为const修饰保护了*this
//		//this->_year = 10;
//	}
//
//	// const Date* p1  ->*p1 指向的对象
//	// Date const * p2 ->*p2 指向的对象
//	// Date* const p3  ->p3  指针本身
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//void f(const Date& d)
//{
//	d.Print();
//}
//
//int main()
//{
//	Date d1(2020, 4, 18);
//	f(d1);
//	d1.Print(); // Date*
//
//	return 0;
//}

// 成员函数调用const成员函数
//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	// 
//	void f1()  // void f1(Date* this)
//	{
//		f2();  // this->f2(this); // 可以，属于权限的缩小
//	}
//
//	void f2() const //void f2(const Date* this)
//	{}
//
//	////////////////////////////////////////////////
//	void f3() // void f3(Date* this)
//	{}
//
//	void f4() const // void f4(const Date* this)
//	{
//		f3(); // this->f(this); // 不行，属于权限放大
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	return 0;
//}

//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	Date* operator&() // Date*
//	{
//		cout << " operator&()" << endl;
//
//		//return this;
//		return nullptr;
//	}
//
//	const Date* operator&() const // const Date*
//	{
//		cout << " operator&() const" << endl;
//
//		//return this;
//		return nullptr;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	Date d2;
//	const Date d3;
//
//	cout << &d1 << endl;
//	cout << &d2 << endl;
//	cout << &d3 << endl;
//
//	return 0;
//}

//#include "Date.h"
//void Fun(const Date& d3, const Date& d4)
//{
//	cout << d3 - d4 << endl; // d3.operator-(&d3, d4) // &d3的类型是const Date*
//	cout << (d3 > d4) << endl; // d3.operator-(&d3, d4)
//}

//int main()
//{
//	Date d1(2019, 4, 18);
//	Date d2(2020, 4, 18);
//	Fun(d1, d2);
//
//	cout << d1 - d2 << endl; // d1.operator-(&d1, d2)
//
//
//	return 0;
//}

//class Date
//{
//public:
//	/*Date(int year = 0, int month = 1, int day = 1)
//	{
//	    // 函数体内赋值 
//		_year = year;
//		_month = month;
//		_day = day;
//	}*/
//
//	Date(int year = 0, int month = 1, int day = 1)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//	{
//		// 初始化列表 
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//
//
//int main()
//{
//	return 0;
//}

// 为什么有初始化列表这个东西？
//class A
//{
//public:
//	A(int a)
//		:_a(a)
//	{}
//private:
//	int _a;
//};
//
//class B
//{
//public:
//	// 可以理解成初始化列表是对象的成员变量的定义的地方
//	B(int a, int ref)
//		:_aobj(a)
//		,_ref(ref)
//		, _n(10)
//	{
//		_x = 10;
//	}
//private:
//	A _aobj;	  // 没有默认构造函数(不用传参就可以调的那个构造函数)
//	int& _ref;	  // 引用
//	const int _n; // const 
//	// 成员变量的声明
//
//	int _x;
//};
//

//class Time
//{
//public:
//	Time(int hour = 0)
//		:_hour(hour)
//	{
//		cout << "Time()" << endl;
//	}
//private:
//	int _hour;
//};
//
//class Date
//{
//public:
//	/*Date(int day)
//	{
//	Time t(1);
//	_t = t;
//	}*/
//
//	Date(int day)
//		:_t(1)
//	{}
//
//private:
//	int _day;
//	Time _t;
//};

//class A
//{
//public:
//	A(int a)
//		:_a1(a)
//		, _a2(_a1)
//	{}
//
//	void Print() {
//		cout << _a1 << " " << _a2 << endl;
//	}
//private:
//	int _a2;
//	int _a1;
//};
//
//
//int main()
//{
//	//B b(1, 2); // 对象定义
//
//	/*int& r;
//	const int m;
//	A a;*/
//
//	//Date d(1);
//	A aa(1);
//	aa.Print();
//
//	return 0;
//}

//class Date
//{
//public:
//	//explicit Date(int year)
//	Date(int year)
//		:_year(year)
//	{
//		cout << "Date(int year)" << endl;
//	}
//
//	Date(const Date& d)
//	{
//		cout << "Date(const Date& d)" << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(1);   // 构造
//	Date d2 = 2;  // 隐式类型的转换  构造出tmp(2)+在用tmp拷贝构造d2(tmp)+优化成直接构造
//	//const Date& d2 = 2;  // 引用就是中间产生的临时对象
//	Date d3 = d1; // 拷贝构造
//
//	int i = 1;
//	const double& d = i;  // 隐式类型转换，会产生中间的临时变量
//
//	return 0;
//}

//class Date
//{
//public:
//	//explicit Date(int year, int month, int day)
//	Date(int year, int month, int day)
//		:_year(year)
//	{
//		cout << "Date(int year)" << endl;
//	}
//
//	Date(const Date& d)
//	{
//		cout << "Date(const Date& d)" << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(1, 2, 3);
//
//	// C++11
//	Date d2 = {1,2,3}; // 隐式类型转换，C++11才支持
//
//
//	return 0;
//}

// staic成员
// 设计出一个类A，可以计算这个类总计产生了多少对象?
//int n = 0;
//class A
//{
//public:
//	A()
//	{
//		++n;
//	}
//
//	A(const A& a)
//	{
//		++n;
//	}
//
//};
//
////A& f1(A& a)
//A f1(A a)
//{
//	return a;
//}
//
//int main()
//{
//	A a1;
//	A a2;
//
//	f1(a1);
//	n = 1; // 谁都可以对n进行修改
//	f1(a2);
//
//	cout << n << endl;
//
//	return 0;
//}

class A
{
public:
	A()
	{
		++n;
	}

	A(const A& a)
	{
		++n;
	}

	static int GetN() // 没有this指针,函数中不能访问非静态的成员
	{
		//_a = 10;
		return n;
	}
private:
	int _a;
	static int n;  // 声明 不是属于某个对象，是属于类的所有对象，属于这个类
	// n不在对象中，n在静态区
};

int A::n = 0; // 定义

//A& f1(A& a)
A f1(A a)
{
	return a;
}

int main()
{
	A a1;
	A a2;

	f1(a1);
	f1(a2);

	//a1.GetN() = 10;
	cout << a1.GetN() << endl;
	cout << a2.GetN() << endl;
	cout << A::GetN() << endl;



	// public
	/*cout << a1.n << endl;
	cout << a2.n << endl;
	cout << A::n << endl;
	a1.n = 10;*/

	//cout << n << endl;

	return 0;
}