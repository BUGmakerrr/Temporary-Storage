#include <iostream>
using namespace std;

//class Time
//{
//public:
//	~Time()
//	{
//		cout << "~Time()" << endl;
//	}
//};
//
//class Date
//{
//public:
//	/*Date()
//	{
//		_year = 0;
//		_month = 1;
//		_day = 1;
//	}*/
//	
//	//Date(int year, int month, int day)
//	//{
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << "Date()" << this << endl;
//	}
//
//	// ���Բ�д��Date��û��ʲô��Դ��Ҫ����
//	/*~Date()
//	{
//		cout << "~Date()" << this<<endl;
//	}*/
//private:
//	int _year;
//	int _month;
//	int _day;
//	// ���ǲ�д�����������ɵĹ��캯������������
//	// ��������/��������  int/char  ���ᴦ��
//	// �Զ�������  �������Ĺ��캯����ʼ��/��������
//
//	Time _t;
//};
//
//class Stack
//{
//public:
//	// ���󴴽�ʱ�Զ�������ɳ�ʼ������
//	Stack(int n = 10)
//	{
//		_a = (int*)malloc(sizeof(int)*n);
//		_size = 0;
//		_capacity = n;
//	}
//
//	void Push(int x);
//	void Pop();
//	size_t Size();
//	// ...
//
//	// �����������ڵ����Ժ����������
//	~Stack()
//	{
//		free(_a);
//		_a = nullptr;
//		_size = _capacity = 0;
//	}
//private:
//	int* _a;
//	int _size;
//	int _capacity;
//};
//
//int main()
//{
//	//Date d1; // 1�����ǲ�д���������� 2��ȫȱʡ��  3���޲ε�  -�� Ĭ�Ϲ��캯�� -�������ο��Ե��õ�
//	//Date d2(2020, 4, 11);
//	//Date d2;
//
//	//Stack st;
//
//	Date d;
//
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
//	// Date d2(d1); 
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//void func(Date& d)
//{
//
//}
//
//int main()
//{
//	Date d1(2020, 5, 12);
//
//	// ������д�����ǵ��ÿ�������
//	Date d2(d1); // ���õĿ������� 
//	Date d3 = d1;
//	d1.Print();
//	d2.Print();
//	d3.Print();
//
//	//func(d1);
//
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
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
////private:
//	int _year;
//	int _month;
//	int _day;
//};
//
////bool IsDateEqual(const Date& d1, const Date& d2)
////{
////	// ..
////}
//
//// ������м�����������operator���صĺ������м�������
//bool operator==(const Date& d1, const Date& d2)
//{
//	return d1._year == d2._year
//		&& d1._month == d2._month
//		&& d1._day == d2._day;
//}
//
//// �Զ��������ǲ�����������ģ�Ҫ�þ͵�ʵ�����غ������Զ��������õ�ʱ��ȼ��ڵ���������غ���
//int main()
//{
//	Date d1(2020, 5, 12);
//	Date d2(2020, 5, 13);
//	// ����Date�Ķ�����Ƚϴ�С���
//	// IsDateEqual(d1, d2);
//	d1 == d2; // ������ε���->��������ת����operator==(d1, d2);���������һ����������
//	// ��������һ�㲻������д����Ϊ�����ɶ��Բ���
//	operator==(d1, d2);
//
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
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//	// d1 == d2;
//	// d1.operator==(&d1, d2);
//	bool operator==(const Date& d) // bool operator==(Date* this, const Date& d)
//	{
//		return this->_year == d._year
//			&& _month == d._month
//			&& _day == d._day;
//	}
//	
//	// d1 > d2;
//	// d1.operator>(d2);
//	bool operator>(const Date& d)
//	{
//		if (_year > d._year)
//			return true;
//		else if (_year == d._year && _month > d._month)
//			return true;
//		else if (_year == d._year && _month == d._month && _day > d._day)
//			return true;
//
//		return false;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//// �Զ��������ǲ�����������ģ�Ҫ�þ͵�ʵ�����غ������Զ��������õ�ʱ��ȼ��ڵ���������غ���
//int main()
//{
//	Date d1(2020, 5, 12);
//	Date d2(2020, 5, 13);
//	d1 == d2;  // d1.operator==(d2);
//
//	cout << (d1 > d2) << endl;
//
//	return 0;
//}

//// ʵ��һ�����Ƶ�������
//class Date
//{
//public:
//	int GetMonthDay(int year, int month)
//	{
//		static int monthDays[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//
//		// ��2���������귵��29
//		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
//		{
//			return 29;
//		}
//
//		return monthDays[month];
//	}
//
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		if (year >= 0 
//			&& month >= 1 && month <= 12
//			&& day >= 1 && day <= GetMonthDay(year, month))
//		{
//			_year = year;
//			_month = month;
//			_day = day;
//		}
//		else
//		{
//			cout << "�Ƿ�����" << endl;
//		}	
//	}
//
//	~Date()
//	{
//
//	}
//
//	// Date d2(d1)
//	//Date(const Date& d)
//	//{
//	//	_year = d._year;
//	//	_month = d._month;
//	//	_day = d._day;
//	//	cout << "Date(const Date& d)" << endl;
//	//}
//
//	// d3 = d1
//	// d3 = d3
//	// �������������Ϊ�����Զ������Ϳ�������������һ��ȥʹ�������
//	//Date& operator=(const Date& d)
//	//{
//	//	if (this != &d)  // ����Լ����Լ���ֵ���жϼ��  d3 = d3
//	//	{
//	//		_year = d._year;
//	//		_month = d._month;
//	//		_day = d._day;
//	//	}
//	//	return *this;
//	//}
//
//	// d1 < d2
//	// d1.operator<(&d1, d2)
//	inline bool operator<(const Date& d) // bool operator<(Date* this, const Date& d)
//	{
//		if (_year < d._year)
//			return true;
//		else if (_year == d._year && _month < d._month)
//			return true;
//		else if (_year == d._year && _month == d._month && _day < d._day)
//			return true;
//
//		return false;
//	}
//
//	inline bool operator==(const Date& d)
//	{
//		return _year == d._year && _month == d._month && _day == d._day;
//	}
//
//	// d1 <= d2; => d1 < d2 || d1 == d2
//	// d1.operator<=(&d1, d2);
//	bool operator<=(const Date& d) // bool operator<=(Date* this, const Date& d)
//	{
//		return *this < d || *this == d;   // �����������ʵ��
//	}
//
//	// d1 > d2 -> !(d1 <= d2)
//	bool operator>(const Date& d)
//	{
//		return !(*this <= d);
//	}
//
//	bool operator>=(const Date& d)
//	{
//		return !(*this < d);
//	}
//
//	bool operator!=(const Date& d)
//	{
//		return !(*this == d);
//	}
//
//	// d1 + 10
//	// d1 + 100
//	// d1 + 1000
//	Date operator+(int day)
//	{
//		Date ret(*this); // ��d1��������һ��ret
//		ret._day += day;
//		while (ret._day > GetMonthDay(ret._year, ret._month))
//		{
//			// ������ڵ��첻�Ϸ�������Ҫ���½���
//			ret._day -= GetMonthDay(ret._year, ret._month);
//			ret._month++;
//
//			if (ret._month == 13)
//			{
//				ret._year++;
//				ret._month = 1;
//			}
//		}
//
//		return ret;
//	}
//
//	// d1 += 10
//	Date& operator+=(int day)
//	{
//		_day += day;
//		while (_day > GetMonthDay(_year, _month))
//		{
//			_day -= GetMonthDay(_year, _month);
//			++_month;
//			if (_month == 13)
//			{
//				++_year;
//				_month = 1;
//			}
//		}
//
//		return *this;
//	}
//
//	// d1-=10
//	Date& operator-=(int day);
//	// d1 - 10
//	Date& operator-(int day);
//	// ++d1
//	Date& operator++();
//	// --d1
//	Date& operator--();
//	// d1 - d2
//	int operator-(const Date& d);
//
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//
//	//int _hour;
//	//int _minute;
//	//int _second;
//};
//
//class Stack
//{
//public:
//	Stack(int n = 10)
//	{
//		_a = (int*)malloc(sizeof(int)*n);
//		_size = 0;
//		_capacity = n;
//	}
//
//	~Stack()
//	{
//		free(_a);
//		_a = nullptr;
//		_size = _capacity = 0;
//	}
//private:
//	int* _a;
//	size_t _size;
//	size_t _capacity;
//};
//
//void f1(Date& d1)
//{
//}
//
//Date& f2()
//{
//	static Date d;
//	return d;
//}
//
//int main()
//{
//	// �Զ������ʹ������ͷ���ֵʱ���ڿ��Ե�����£�����ʹ�����ã����ٿ���
//	/*Date d1;
//	f1(d1);
//	f2();*/
//
//	// CPP
//	//Stack st;
//
//	//// C
//	//Stack st;
//	//StackInit(&st);
//	//// ...
//	//StackDestroy(&st);
//
//	//Date d1(2020, 4, 11);
//	//d1.Print();
//
//	//Date d2(d1);
//	//d2.Print();
//
//	//Date d3(2020,4,15);
//	//d3.Print();
//
//	//d2 = d3 = d1;
//	//d3.Print();
//
//	//d3 = d3;
//
//	//int i = 0, j = 1, k = 2;
//	//i = j = k;  -> j = k �� i = j// ������ֵ
//
//	//Date d1(2020, 4, 11);
//	//d1.Print();
//
//	//Date d2(2020, 4,15);
//	//d2.Print();
//
//	//d1 = d2;  // ���������Ѿ������ҳ�ʼ�����ˣ����������d2��ֵ(����)��d1  ����
//	//Date d3(d1); // d3�������ڣ�����d3ʱ��d1ȥ��ʼ��
//	//Date d4 = d1; // �ر�ע�⣺�����ǿ������죬����operator=
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
//		// Date d2(d1)
//		//Date(const Date& d)
//		//{
//		//	_year = d._year;
//		//	_month = d._month;
//		//	_day = d._day;
//		//	cout << "Date(const Date& d)" << endl;
//		//}
//	
//		// /* d3 = d1
//		//  d3 = d3
//		//  �������������Ϊ�����Զ������Ϳ�������������һ��ȥʹ�������*/
//
//	    // d3 = d1 ���ʽ�ķ���ֵ��d3����֧������
//		Date& operator=(const Date& d)
//		{
//			cout << "Date& operator=(const Date& d)" << endl;
//
//			if (this != &d)  // ����Լ����Լ���ֵ���жϼ��  d3 = d3
//			{
//				_year = d._year;
//				_month = d._month;
//				_day = d._day;
//			}
//
//			return *this; // this����d3�ĵ�ַ��*this����d3
//		}
//
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//
//class Stack
//{
//public:
//	Stack(int n = 10)
//	{
//		_a = (int*)malloc(sizeof(int)*n);
//		_size = 0;
//		_capacity = n;
//	}
//
//	~Stack()
//	{
//		if (_a != nullptr)
//		{
//			free(_a);
//			_a = nullptr;
//			_size = _capacity = 0;
//		}
//	}
//
//private:
//	int* _a;
//	size_t _size;
//	size_t _capacity;
//};
//
//int main()
//{
//	//Date d1(2020, 4, 11);
//	//Date d2(2020, 4, 15);
//	//d1 = d2;
//	//d1.Print();
//	//d2.Print();
//
//	//// d1 == d2; // ���ǲ�д�����������Զ������𣿲��ᣬ��Ϊ������Ĭ�ϳ�Ա����
//
//	//Date d3(d1);
//	//Date d4 = d1;
//	//d3.Print();
//	//d4.Print();
//
//	// ǳ�������⣿
//	Stack st1(10);
//	Stack st2(st1);
//
//	Stack st3(30);
//	st1 = st3;
//
//	return  0;
//}
//


class Date
{
public:
	int GetMonthDay(int year, int month)
	{
		static int monthDays[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

		// ��2���������귵��29
		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
		{
			return 29;
		}

		return monthDays[month];
	}

	Date(int year = 0, int month = 1, int day = 1)
	{
		if (year >= 0
			&& month >= 1 && month <= 12
			&& day >= 1 && day <= GetMonthDay(year, month))
		{
			_year = year;
			_month = month;
			_day = day;
		}
		else
		{
			cout << "�Ƿ�����" << endl;
		}
	}

	// d1 < d2
	// d1.operator<(&d1, d2)
	inline bool operator<(const Date& d) // bool operator<(Date* this, const Date& d)
	{
		if (_year < d._year)
			return true;
		else if (_year == d._year && _month < d._month)
			return true;
		else if (_year == d._year && _month == d._month && _day < d._day)
			return true;

		return false;
	}

	inline bool operator==(const Date& d)
	{
		return _year == d._year && _month == d._month && _day == d._day;
	}

	// d1 <= d2; => d1 < d2 || d1 == d2
	// d1.operator<=(&d1, d2);
	bool operator<=(const Date& d) // bool operator<=(Date* this, const Date& d)
	{
		return *this < d || *this == d;   // �����������ʵ��
	}

	// d1 > d2 -> !(d1 <= d2)
	bool operator>(const Date& d)
	{
		return !(*this <= d);
	}

	bool operator>=(const Date& d)
	{
		return !(*this < d);
	}

	bool operator!=(const Date& d)
	{
		return !(*this == d);
	}

	// d1 + 10
	// d1 + 100
	// d1 + 1000
	//Date operator+(int day)
	//{
	//	Date ret(*this); // ��d1��������һ��ret
	//	ret._day += day;
	//	while (ret._day > GetMonthDay(ret._year, ret._month))
	//	{
	//		// ������ڵ��첻�Ϸ�������Ҫ���½���
	//		ret._day -= GetMonthDay(ret._year, ret._month);
	//		ret._month++;

	//		if (ret._month == 13)
	//		{
	//			ret._year++;
	//			ret._month = 1;
	//		}
	//	}

	//	return ret;
	//}

	// d1 + 10  ����ʵ��
	Date operator+(int day)
	{
		Date ret(*this);
		ret += day; // ret.operator+=(day)

		return ret;
	}

	// d1 += 10
	Date& operator+=(int day)
	{
		if (day < 0)
		{
			return *this -= -day;
		}

		_day += day;
		while (_day > GetMonthDay(_year, _month))
		{
			_day -= GetMonthDay(_year, _month);
			++_month;
			if (_month == 13)
			{
				++_year;
				_month = 1;
			}
		}

		return *this;
	}

	// d1-=10 =��d1.operator-=(&d1, 10)
	Date& operator-=(int day)
	{
		if (day < 0)
		{
			return *this += -day;
		}

		_day -= day;
		while (_day <= 0) // day���Ϸ���Ҫ��������
		{
			--_month;
			if (_month == 0)
			{
				--_year;
				_month = 12;
			}

			_day += GetMonthDay(_year, _month);
		}

		return *this;
	}

	// d1 - 10
	/*Date operator-(int day)
	{
	Date ret = *this;
	ret._day -= day;
	while (ret._day <= 0)
	{
	--ret._month;
	if (ret._month == 0)
	{
	--ret._year;
	ret._month = 12;
	}

	ret._day += GetMonthDay(ret._year, ret._month);
	}

	return ret;
	}*/

	Date operator-(int day)
	{
		Date ret = *this;
		ret -= day;
		return ret;
	}

	// ++d1 => d1.operator++(&d1)
	Date& operator++()
	{
		*this += 1;

		return *this; //���ؼ�֮���ֵ
	}

	// d1++ => d1.operator++(&d1, 0)
	Date& operator++(int) // Ϊ�˹��ɺ�������
	{
		Date tmp(*this);
		*this += 1;
		return tmp; // ���ؼ�֮ǰ��ֵ
	}

	// --d1
	Date& operator--();
	// d1--
	Date& operator--(int);

	// d1 - d2
	int operator-(const Date& d);

	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	//Date d1(2020, 4, 15);
	//Date d2 = d1 - 10;
	//d2.Print();
	//d1.Print();

	//Date d3 = d1 -= 10;
	//d3.Print();
	//d1.Print();

	//++d1;
	//d1++;


	Date d1(2020, 4, 15);
	d1 += -100;
	d1.Print();



	return 0;
}