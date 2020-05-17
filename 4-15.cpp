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
//	// 可以不写，Date类没有什么资源需要清理
//	/*~Date()
//	{
//		cout << "~Date()" << this<<endl;
//	}*/
//private:
//	int _year;
//	int _month;
//	int _day;
//	// 我们不写，编译器生成的构造函数和析构函数
//	// 内置类型/基本类型  int/char  不会处理
//	// 自定义类型  调用它的构造函数初始化/析构函数
//
//	Time _t;
//};
//
//class Stack
//{
//public:
//	// 对象创建时自动调用完成初始化工作
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
//	// 对象声明周期到了以后，完成清理工作
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
//	//Date d1; // 1、我们不写编译器生成 2、全缺省的  3、无参的  -》 默认构造函数 -》不传参可以调用的
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
//	// 这两个写法都是调用拷贝构造
//	Date d2(d1); // 调用的拷贝构造 
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
//// 运算符有几个操作数，operator重载的函数就有几个参数
//bool operator==(const Date& d1, const Date& d2)
//{
//	return d1._year == d2._year
//		&& d1._month == d2._month
//		&& d1._day == d2._day;
//}
//
//// 自定义类型是不能用运算符的，要用就得实现重载函数，自定义类型用的时候等价于调用这个重载函数
//int main()
//{
//	Date d1(2020, 5, 12);
//	Date d2(2020, 5, 13);
//	// 比如Date的对象想比较大小相等
//	// IsDateEqual(d1, d2);
//	d1 == d2; // 编译如何调用->这里编译会转换成operator==(d1, d2);所这里就是一个函数调用
//	// 但是我们一般不会这样写，因为这样可读性不好
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
//// 自定义类型是不能用运算符的，要用就得实现重载函数，自定义类型用的时候等价于调用这个重载函数
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

//// 实现一个完善的日期类
//class Date
//{
//public:
//	int GetMonthDay(int year, int month)
//	{
//		static int monthDays[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//
//		// 是2月且是闰年返回29
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
//			cout << "非法日期" << endl;
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
//	// 运算符的重载是为了让自定义类型可以像内置类型一样去使用运算符
//	//Date& operator=(const Date& d)
//	//{
//	//	if (this != &d)  // 针对自己给自己赋值的判断检查  d3 = d3
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
//		return *this < d || *this == d;   // 复用上面的来实现
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
//		Date ret(*this); // 用d1拷贝构造一个ret
//		ret._day += day;
//		while (ret._day > GetMonthDay(ret._year, ret._month))
//		{
//			// 如果日期的天不合法，就需要往月进度
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
//	// 自定义类型传参数和返回值时，在可以的情况下，尽量使用引用，减少拷贝
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
//	//i = j = k;  -> j = k 和 i = j// 连续赋值
//
//	//Date d1(2020, 4, 11);
//	//d1.Print();
//
//	//Date d2(2020, 4,15);
//	//d2.Print();
//
//	//d1 = d2;  // 两个对象都已经存在且初始化好了，现在我想把d2赋值(拷贝)给d1  复制
//	//Date d3(d1); // d3还不存在，构造d3时用d1去初始化
//	//Date d4 = d1; // 特别注意：这里是拷贝构造，不是operator=
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
//		//  运算符的重载是为了让自定义类型可以像内置类型一样去使用运算符*/
//
//	    // d3 = d1 表达式的返回值是d3才能支持连等
//		Date& operator=(const Date& d)
//		{
//			cout << "Date& operator=(const Date& d)" << endl;
//
//			if (this != &d)  // 针对自己给自己赋值的判断检查  d3 = d3
//			{
//				_year = d._year;
//				_month = d._month;
//				_day = d._day;
//			}
//
//			return *this; // this就是d3的地址，*this就是d3
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
//	//// d1 == d2; // 我们不写，编译器会自动生成吗？不会，因为他不是默认成员函数
//
//	//Date d3(d1);
//	//Date d4 = d1;
//	//d3.Print();
//	//d4.Print();
//
//	// 浅拷贝问题？
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

		// 是2月且是闰年返回29
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
			cout << "非法日期" << endl;
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
		return *this < d || *this == d;   // 复用上面的来实现
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
	//	Date ret(*this); // 用d1拷贝构造一个ret
	//	ret._day += day;
	//	while (ret._day > GetMonthDay(ret._year, ret._month))
	//	{
	//		// 如果日期的天不合法，就需要往月进度
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

	// d1 + 10  复用实现
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

	// d1-=10 =》d1.operator-=(&d1, 10)
	Date& operator-=(int day)
	{
		if (day < 0)
		{
			return *this += -day;
		}

		_day -= day;
		while (_day <= 0) // day不合法需要继续处理
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

		return *this; //返回加之后的值
	}

	// d1++ => d1.operator++(&d1, 0)
	Date& operator++(int) // 为了构成函数重载
	{
		Date tmp(*this);
		*this += 1;
		return tmp; // 返回加之前的值
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