#include <iostream>
using namespace std;
// �����const��Ա����

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
//	// void Print() - ��void Print(Date* this)
//	void Print() const // ->void Print(const Date* this)
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//		// �����޸ĳ�Ա�����ˣ���Ϊconst���α�����*this
//		//this->_year = 10;
//	}
//
//	// const Date* p1  ->*p1 ָ��Ķ���
//	// Date const * p2 ->*p2 ָ��Ķ���
//	// Date* const p3  ->p3  ָ�뱾��
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

// ��Ա��������const��Ա����
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
//		f2();  // this->f2(this); // ���ԣ�����Ȩ�޵���С
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
//		f3(); // this->f(this); // ���У�����Ȩ�޷Ŵ�
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
//	cout << d3 - d4 << endl; // d3.operator-(&d3, d4) // &d3��������const Date*
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
//	    // �������ڸ�ֵ 
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
//		// ��ʼ���б� 
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

// Ϊʲô�г�ʼ���б����������
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
//	// �������ɳ�ʼ���б��Ƕ���ĳ�Ա�����Ķ���ĵط�
//	B(int a, int ref)
//		:_aobj(a)
//		,_ref(ref)
//		, _n(10)
//	{
//		_x = 10;
//	}
//private:
//	A _aobj;	  // û��Ĭ�Ϲ��캯��(���ô��ξͿ��Ե����Ǹ����캯��)
//	int& _ref;	  // ����
//	const int _n; // const 
//	// ��Ա����������
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
//	//B b(1, 2); // ������
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
//	Date d1(1);   // ����
//	Date d2 = 2;  // ��ʽ���͵�ת��  �����tmp(2)+����tmp��������d2(tmp)+�Ż���ֱ�ӹ���
//	//const Date& d2 = 2;  // ���þ����м��������ʱ����
//	Date d3 = d1; // ��������
//
//	int i = 1;
//	const double& d = i;  // ��ʽ����ת����������м����ʱ����
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
//	Date d2 = {1,2,3}; // ��ʽ����ת����C++11��֧��
//
//
//	return 0;
//}

// staic��Ա
// ��Ƴ�һ����A�����Լ���������ܼƲ����˶��ٶ���?
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
//	n = 1; // ˭�����Զ�n�����޸�
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

	static int GetN() // û��thisָ��,�����в��ܷ��ʷǾ�̬�ĳ�Ա
	{
		//_a = 10;
		return n;
	}
private:
	int _a;
	static int n;  // ���� ��������ĳ������������������ж������������
	// n���ڶ����У�n�ھ�̬��
};

int A::n = 0; // ����

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