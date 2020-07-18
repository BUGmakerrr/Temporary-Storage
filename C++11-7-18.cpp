#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<map>
#include <initializer_list>
using namespace std;

// �б��ʼ������������Ҫ�ܿ�����ʵ��������õ�Ҳ���ࡣ
// ���˽⣩
class Point
{
public:
	Point(int x = 0, int y = 0) : _x(x), _y(y)
	{}
private:
	int _x;
	int _y;
};

//int main()
//{
//	int x = 1;
//
//	// C++11  �������б��ʼ��
//	vector<int> v1{ 1, 2, 3, 4, 5 };
//	vector<int> v2 = { 1, 2, 3, 4, 5 };
//
//	list<int> l1{ 1, 2, 3, 4, 5 };
//	list<int> l2 = { 1, 2, 3, 4, 5 };
//
//	map<string, int> m1{ { "ƻ��", 1 }, { "����", 2 }, { "�㽶", 3 } };
//	map<string, int> m2 = { { "ƻ��", 1 }, { "����", 2 }, { "�㽶", 3 } };
//
//	Point p1(1, 2);
//	Point p2{ 1, 2 };
//	Point p3 = { 1, 2 };
//
//	auto ilt1 = { 1, 2, 3 };
//	initializer_list<int> ilt2 = { 1, 2, 3 };
//	// ���������֧�����ֻ��������б��ʼ�����أ�
//
//	return 0;
//}

//////////////////////////////////
// �����Ƶ�������RTTI  run time type Identification
// �������������Զ��������ʶ��
// ���˽⣩
//int main()
//{
//	int a = 10;
//	double b = 20;
//	auto c = a + b;
//
//	// �õ��������Ƶ��ַ���
//	cout << typeid(c).name() << endl;
//	string s;
//	cout << typeid(s).name() << endl;
//
//	// �������붨һ����c��sһ�����͵Ķ���
//	// ͨ������ȥ������
//	decltype(c) d;
//	decltype(s) e;
//
//	cout << typeid(d).name() << endl;
//	cout << typeid(e).name() << endl;
//
//	return 0;
//}

// auto�ͷ�Χfor -> ���˲��ִ����д��
// ��Ϥ

// auto�������βκͷ���ֵ
//auto func(auto e)
//{}

//int main()
//{
//	std::map<std::string, std::string> dict = { { "insert", "����" }, { "sort", "����" } };
//	std::map<std::string, std::string>::iterator it1 = dict.begin();
//	auto it2 = dict.begin();
//	// ����it1��it2������Ϊ����ȫһ�����͵Ķ���
//	// Ψһ�����it2�������Ǳ������Զ��Ƶ�����
//	// auto�����ƾ��ǿ��԰������ͱȽϸ��ӵط����򻯴����д��
//
//	// ����Ҫע�⵱���������Ƚϴ󣬻����������Ҫ���������string
//	// ��ø�&��const�����Լ��ٿ������Ч��
//	// ����֧�ַ�Χforԭ����Χfor�ᱻ�������滻�ɵ�������Ҳ������ζ��֧�ֵ�������֧�ַ�Χfor
//	//for (auto e : dict)
//	for (const auto& e : dict)
//	{
//		cout << e.first << ":" << e.second << endl;
//	}
//
//	for (const std::pair<const std::string, std::string>& e : dict)
//	{
//		cout << e.first << ":" << e.second << endl;
//	}
//	cout << endl;
//
//	// ����STL����������ʹ�÷�Χfor�÷�������Ҳ����(ԭ��ָ�������ΪҲ��Ȼ������������vector/string�ĵ���������ԭ��ָ��)
//	int a[] = { 1, 2, 3, 3, 5, 4 };
//	for (auto e : a)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//}

// final��override (�˽�)
// ����һ���������ؼ��ֱַ��������ʲô��
// final�����࣬��ͱ���������࣬���ܱ��̳�
// final�����������麯��������麯�����ܱ���д
// override��������д�麯��������Ƿ������д����������д���������򱨴�

// ����ָ��  ����Ϥ��
// ��������ר�Ż�2�ڿν����

// ������
// C++98����
// string/vector/list/deque/map/set/bitset + stack/queue/priority_queue
// C++11������
// array(��������):ʵ�����õĺ��٣�ȱ�㣺���� + �洢���ݵĿռ���ջ��,ջ�Ŀռ䱾���Ͳ���
// forword_list(������)��ʵ�����õ��٣�ȱ�㣺��֧��β��βɾ + insert����Ҳ���ڵ�ǰλ�õĺ���
// unordered_map/unordered_set : �Ƽ�ʹ�ã���Ϊ���ǵ�Ч�ʸ���map/set

//  Ĭ�ϳ�Ա��������
//class A
//{
//public:
//	A() = default; // ָ����ʾȥ����Ĭ�Ϲ��캯��
//
//	A(const int& a)
//		:_a(a)
//	{}
//private:
//	int _a = 10;
//};
//
//int main()
//{
//	A aa1;
//	A aa2(aa1);
//
//	return 0;
//}

// Ҫ��A�Ķ����ܿ����͸�ֵ(������)
//class A
//{
//public:
//	A() = default; // ָ����ʾȥ����Ĭ�Ϲ��캯��
//
//	// C++98
//	// ֻ��������ʵ�֣������ͱ��취��(��������)��ȱ�ݣ����˿��������涨��
//	// Ϊ�˽�����ȱ�ݣ�private�޶�
//private:
//	A(const A& aa);
//	A& operator=(const A& aa);
//private:
//	int _a = 10;
//};
//
//// �����涨��
//A::A(const A& aa)
//{}
//
//int main()
//{
//	A aa1;
//	A aa2(aa1);
//	aa1 = aa2;
//
//	return 0;
//}

//class A
//{
//public:
//	A() = default; // ָ����ʾȥ����Ĭ�Ϲ��캯��
//
//	// C++11
//	A(const A& aa) = delete;
//	A& operator=(const A& aa) = delete;
//private:
//	int _a = 10;
//};
//
//int main()
//{
//	A aa1;
//	A aa2(aa1);
//	aa1 = aa2;
//
//	return 0;
//}

//////////////////////////////////////////////////////////////////////////////////���ص㣩
// 1����ֵ���ú��ƶ���������﷨ 
// C++98����������õĸ�����þ͸�һ������ȡ������
// C++98 ��ֵ����
// C++11 ��ֵ����
// ��������ֵ���ã�������ֵ���ã����Ƕ��Ǹ�����ȡ��������
// ������ֵ������Ҫ�Ǹ���ֵȡ��������ֵ������Ҫ�Ǹ���ֵȡ������

// ʲô����ֵ��ʲô����ֵ��
// =��߾�����ֵ���ұߵľ�����ֵ�� ע�������һ��C�﷨�����µĿӣ��������ƺ�����һ����
// �������Ҳ��Ƿ�����ߵ�ֵҲ��һ����ֵ���ұߵ�ֵ��һ������ֵ
// int x1 = 10; int x2 = x1; int x3 = x1+x2; ����x1����ֵ��10����ֵ��x2����ֵ,x1+x2���ʽ����ֵ������ֵ
// �����޸ľͿ�����Ϊ����ֵ����ֵͨ���Ǳ���
// ��ֵͨ���ǳ��������ʽ���ߺ�������ֵ(��ʱ����)

//int main()
//{
//	int x = 1, y = 2;
//	
//	// ��ֵ���õĶ���
//	int a = 0;
//	int& b = a;
//
//	// ��ֵ���ò���������ֵ, const��ֵ���ÿ���
//	//int& e = 10; 
//	//int& f = x + y;
//	const int& e = 10;
//	const int& f = x + y;
//
//
//	// ��ֵ���õĶ���
//	int&& c = 10;
//	int&& d = x + y;
//
//	// ��ֵ���ò���������ֵ�����ǿ�������move����ֵ
//	//int&& m = a;
//	int&& m = move(a);
//
//	return 0;
//}

//template<class T>
//void f(const T& a)
//{
//	cout << "void f(const T& a)" << endl;
//}
//
//template<class T>
//void f(const T&& a)
//{
//	cout << "void f(const T&& a)" << endl;
//}
//
//int main()
//{
//	int x = 10;
//	f(x); // �����ƥ����ֵ���ò�����f
//	f(10);// �����ƥ����ֵ���ò�����f
//
//	return 0;
//}

// C++11�ֽ���ֵ����Ϊ������ֵ�ͽ���ֵ
// ����ֵ���������͵ĳ���������ʱ����
// ����ֵ���Զ������͵���ʱ����
// ���ۣ����������(vector/list/map/set...)�������Լ�������ֵ�������������ƶ��������ƶ���ֵ

//////////////////////////////////////////////////////////////////////////////////
//  2��Ӧ�ã���ֵ���õ��ƶ�������ƶ���ֵ,���Լ��ٿ���
class String
{
public:
	String(const char* str = "")
	{
		_str = new char[strlen(str) + 1];
		strcpy(_str, str);
	}

	// s2(s1)
	String(const String& s)
	{
		cout<<"String(const String& s)-��������-Ч�ʵ�"<<endl;

		_str = new char[strlen(s._str) + 1];
		strcpy(_str, s._str);
	}

	// s3(��ֵ-����ֵ)
	String(String&& s)
		:_str(nullptr)
	{
		// ����������һ������ֵ�������㶼Ҫ���ˣ��ҵ�Ŀ���Ǹ�����һ����Ŀռ䣬һ����ֵ
		// �������Ŀ��ƺ�ֻ����
		cout << "String(String&& s)-�ƶ�����-Ч�ʸ�" << endl;
		swap(_str, s._str);
	}
	
	// s3 = s4
	String& operator=(const String& s)
	{
		cout << "String& operator=(const String& s)-������ֵ-Ч�ʵ�" << endl;

		if (this != &s)
		{
			char* newstr = new char[strlen(s._str) + 1];
			strcpy(newstr, s._str);

			delete[] _str;
			_str = newstr;
		}

		return *this;
	}

	// s3 = ��ֵ-����ֵ
	String& operator=(String&& s)
	{
		cout << "String& operator=(String&& s)-�ƶ���ֵ-Ч�ʸ�" << endl;
		swap(_str, s._str);

		return *this;
	}

	
	~String()
	{
		delete[] _str;
	}

	// s1 + s2
	String operator+(const String& s2)
	{
		String ret(*this);
		//ret.append(s2);

		return ret;  // ���ص�����ֵ
	}

	// s1 += s2
	String& operator+=(const String& s2)
	{
		//this->append(s2);
		return *this; // ��������ֵ
	}

private:
	char* _str;
};

//String f(const char* str)
//{
//	String tmp(str);
//	return tmp; // ���ﷵ��ʵ���ǿ���tmp����ʱ����
//}

//int main()
//{
//	String s1("��ֵ");
//	String s2(s1);                      // ��������ֵ
//	String s3(f("��ֵ-����ֵ"));        // ��������ֵ-����ֵ(���ݸ����ã������Ҿ�������)
//	//String s4(move(s1));
//
//	String s5("��ֵ");
//	s5 = s1;
//	s5 = f("��ֵ-����ֵ");
//
//	return 0;
//}

////////////////////////////////////////////////////////////////////////////////
// 3��Ӧ�ã�����ֵ����ֵ����������ֵ�����ǰ��ѧ���ƶ�������ƶ���ֵ�����Կ�������
class Solution1 {
public:
	vector<string> letterCombinations(string digits) {
		vector<string> v;

		return v;
	}
};

class Solution2 {
public:
	// ����˼�룺�ҳ�������ǵĹ��ɣ�����ÿһ��ͷβ����1���м��[j]����������һ��[j-1]+[j]
	vector<vector<int>> generate(int numRows) {
		vector<vector<int>> vv;
		// �ȿ���������ǵĿռ�
		vv.resize(numRows);
		// ...

		return vv;
	}
};

int x1()
{
	String s1("s1");
	String s2("s2");

	String s3 = s1 += s2; // ��������
	String s4 = s1 + s2;  // �ƶ�����

	// ��ʵ�в��ɱ�����ڴ�ֵ���صĳ�������ֵ���صĿ������ض������ʱ����
	// ���vectorֻʵ�ֲ���Ϊconst��ֵ�����������ô����Ĵ��۾ͺܴ�
	// vector(const vector<T>& v)->���

	// �������vectorʵ���˲�����ֵ���õ��ƶ���������ô����Ч�ʾͻ�ܸ�
	// vector(vector<T>&& v) ->�ƶ�����
	// ���ۣ���ֵ���ñ���û̫�����壬��ֵ���õ�ʵ�����ƶ�������ƶ���ֵ
	// ��ô��Խ��պ�����ֵ���ض���(��ֵ)�ȵȳ������������Ч��
	vector<string> v = Solution1().letterCombinations("abcd");
	vector<vector<int>> vv = Solution2().generate(5);

	return 0;
}

//////////////////////////////////////////////////////////////////////////////
// 4����ֵ����ȥ�������Ĳ���,���ٿ���

//std::vector::push_back
//void push_back(const value_type& val);
//void push_back(value_type&& val);
//
//std::list::push_back
//void push_back(const value_type& val);
//void push_back(value_type&& val);
//
//std::set::insert
//pair<iterator, bool> insert(const value_type& val);
//pair<iterator, bool> insert(value_type&& val);

//std::vector::emplace_back
//template <class... Args>
//void emplace_back(Args&&... args);   // ģ��Ŀɱ���� ���˽⣩
// ��������˵��emplace�汾��push��insert��Ч����仰��׼ȷ��û������ȥ������

// ... ��������Ҳ�������ݽṹҲ����������������ʵ�֣�һ����ֵ���ã�һ����ֵ����
int x2()
{
	vector<string> v;
	string s1("��ֵ");
	string s2("��ֵ");

	int val = 1234;

	// push_back�е��õ���string�Ŀ�������
	v.push_back(move(s2));             // void push_back(const value_type& val);

	// push_back�е��õ���string���ƶ�����
	v.push_back("��ֵ");         //void push_back(value_type&& val);
	v.push_back(to_string(val)); // void push_back(value_type&& val);

	v.emplace_back(s1); // v.emplace_back(move(s1)); 
	v.emplace_back("��ֵ");

	vector<pair<string, string>> vp;
	vp.push_back(make_pair("��ֵ", "��ֵ"));

	pair<string, string> kv("��ֵ", "��ֵ");
	vp.push_back(kv);

	vp.emplace_back(make_pair("��ֵ", "��ֵ"));
	vp.emplace_back(kv);
	vp.emplace_back("��ֵ", "��ֵ"); // ����emplace_backģ��ɱ�����ص�ĵط�

	return 0;
}

// �ܽ�
// ��ֵ������������������ֵ���ٿ����ı������������ƶ�������ƶ���ֵ
// ��ֵ���ú���ֵ���ñ��ʵ����ö��Ǽ��ٿ�������ֵ���ñ��ʿ�����Ϊ���ֲ���ֵ���ò���ĵط�, �������ศ���

// ��ֵ���ã�������Ǵ��ι����кͷ���ֵ�����еĿ���
// ��������void push(T x) -> void push(const T& x)  ������Ǵ��ι����м��ٿ���
// ������ֵ��T f2() -> T& f2()  ����ķ���ֵ�����еĿ���
// ps:����Ҫע�����������ƣ�������ض���������������˾Ͳ����ô�����, �����ֵ�����޷�������ȴ�C++11��ֵ���ý��

// ��ֵ���ã�������Ǵ��κ�push/insert�����ڲ��������ƶ��������ռ��ϵ�����.
// + ��ֵ���ؽ��շ���ֵ�Ŀ���
// �������� void push(T&& x)  �����push�ڲ�����ʹ�ÿ�������x�������ռ��ϣ������ƶ������ȥ
// ������ֵ��T f2();  �����������ý���f2()���ض���Ŀ�����T ret = f2(),���������ֵ���õ��ƶ����죬�����˿���

void Fun(int &x){ cout << "lvalue ref" << endl; }
void Fun(const int &x){ cout << "const lvalue ref" << endl; }
void Fun(int &&x){ cout << "rvalue ref" << endl; }
void Fun(const int&& x){ cout << "const rvalue ref" << endl; }

template<typename T>
void PerfectForward(T &&t)
{ 
	// ��ֵ���û�ڶ���֮��Ĳ������ݹ�������ֵ���Զ�ʧ,��һ����û�ȫ��ʶ��Ϊ��ֵ
	// ����ת�����
	Fun(std::forward<T>(t)); 
}

int x3()
{
	PerfectForward(10); // rvalue ref

	int a;
	PerfectForward(a); // lvalue ref
	PerfectForward(std::move(a)); // rvalue ref

	const int b = 8;
	PerfectForward(b); // const lvalue ref
	PerfectForward(std::move(b)); // const rvalue ref

	string s0("hello");
	string s1 = to_string(11111);

	/*basic_string(_Myt&& _Right) _NOEXCEPT
		: _Mybase(_Right._Getal())
	{	// construct by moving _Right
		_Tidy();
		_Assign_rv(_STD forward<_Myt>(_Right));
	}*/

	return 0;
}

#include <algorithm>
#include <functional>

template<class T>
struct Greater
{
	bool operator()(const T& x1, const T& x2)
	{
		return x1 > x2;
	}
};

bool g2(const int& x1, const int& x2)
{
	return x1 > x2;
}

int x4()
{
	int array[] = { 4, 1, 8, 5, 3, 7, 0, 9, 2, 6 };

	// Ĭ�ϰ���С�ڱȽϣ��ų������������
	std::sort(array, array + sizeof(array) / sizeof(array[0]));

	// �����Ҫ������Ҫ�ı�Ԫ�صıȽϹ���
	//std::sort(array, array + sizeof(array) / sizeof(array[0]), greater<int>());
	

	Greater<int> g1;
	g1(1, 2); // g1��һ������������õ�������operator()ʵ�ֵıȽ�
	g2(1, 2); // g2��һ������ָ�룬�����ǵ�����ָ��ĺ���
	// ��������ȫ��ͬ�Ķ�����������������һ���ġ�

	std::sort(array, array + sizeof(array) / sizeof(array[0]), g1);
	std::sort(array, array + sizeof(array) / sizeof(array[0]), g2);

	return 0;
}

struct Goods
{
	string _name;  // ����
	double _price; // �۸�
	int    _num;   // ����
	// ...
};

// ��ô�������ȥ����Goods��operator>/operator<�ǲ��õģ���Ϊ�㲻֪����Ҫ����һ���Աȥ�Ƚ�

struct ComparePriceGreater
{
	bool operator()(const Goods& gl, const Goods& gr)
	{
		return gl._price > gr._price;
	}
};

struct CompareNumGreater
{
	bool operator()(const Goods& gl, const Goods& gr)
	{
		return gl._num > gr._num;
	}
};

struct CompareNameGreater
{
	bool operator()(const Goods& gl, const Goods& gr)
	{
		return gl._name > gr._name;
	}
};
// ��ʵ����С�ڵģ����ڵ��ں�С�ڵ��ڣ��ᷢ������Ҫд�ܶ���º���
// ��ʵֱ��д����Ҳ���ԣ���������Ҫд�ܶ������
// ���濴������labmber���ʽ�����õĽ������

int main()
{
	Goods gds[] = { { "ƻ��", 2.1 , 3}, { "�ཻ", 3.0, 5}, { "����", 2.2, 9}, { "����", 1.5, 10} };
	sort(gds, gds + sizeof(gds) / sizeof(gds[0]), ComparePriceGreater());
	sort(gds, gds + sizeof(gds) / sizeof(gds[0]), CompareNumGreater());
	sort(gds, gds + sizeof(gds) / sizeof(gds[0]), CompareNameGreater());

	// lamber
	/*auto price_greater = [](const Goods& g1, const Goods& g2){
		return g1._price > g2._price;
	};
	sort(gds, gds + sizeof(gds) / sizeof(gds[0]), price_greater);*/

	// ���ǻᷢ��ʹ��lamber���ʽ����Щ�ط�������һЩ
	sort(gds, gds + sizeof(gds) / sizeof(gds[0]), [](const Goods& g1, const Goods& g2){return g1._price > g2._price;});
	sort(gds, gds + sizeof(gds) / sizeof(gds[0]), [](const Goods& g1, const Goods& g2){return g1._price < g2._price; });

	sort(gds, gds + sizeof(gds) / sizeof(gds[0]), [](const Goods& g1, const Goods& g2){return g1._name > g2._name; });
	sort(gds, gds + sizeof(gds) / sizeof(gds[0]), [](const Goods& g1, const Goods& g2){return g1._name < g2._name; });

	return 0;
}

/*lambda���ʽ��д��ʽ��**[capture - list](parameters) mutable -> return-type{ statement }**

1. lambda���ʽ������˵��

- [capture - list] : **��׽�б�**�����б����ǳ�����lambda�����Ŀ�ʼλ�ã�**����������[]���жϽ������Ĵ����Ƿ�Ϊlambda����**��**��׽�б��ܹ���׽�������еı�����lambda����ʹ��**��
- (parameters)�������б���**��ͨ�����Ĳ����б�һ��**���������Ҫ�������ݣ��������ͬ()һ��ʡ��
- mutable��Ĭ������£�lambda��������һ��const������mutable����ȡ���䳣���ԡ�ʹ�ø����η�ʱ�������б���ʡ��(��ʹ����Ϊ��)��
- **->returntype������ֵ����**����**׷�ٷ���������ʽ���������ķ���ֵ����**��û�з���ֵʱ�˲��ֿ�ʡ�ԡ�**����ֵ������ȷ����£�Ҳ��ʡ�ԣ��ɱ������Է������ͽ����Ƶ�**��
- **{statement}��������**���ڸú������ڣ����˿���ʹ��������⣬������ʹ�����в��񵽵ı�����*/

int x6()
{
	// ��򵥵�lambda���ʽ, ��lambda���ʽû���κ�����
	// û�в�����û�з���ֵ���Ϳ��Բ�д����
	[]{};

	// �����ں����е���������
	int a = 3, b = 4;

	// ʵ��a+b��lamber���ʽ

	// ����׽
	auto add1 = [](int x1, int x2)->int{return x1 + x2; };
	add1(a, b);

	// ֱ�Ӳ�׽a,b
	//auto add2 = [a, b]()->int{return a+b; };
	auto add2 = [=]()->int{return a+b; };
	add2();

	// ����׽
	auto swap1 = [](int& x1, int& x2){ 
		int x = x1;
		x1 = x2;
		x2 = x;
	};
	swap1(a, b);

	// ���ò�׽
	/*auto swap2 = [&a, &b](){
		int x = a;
		a = b;
		b = x;
	};*/
	auto swap2 = [&](){
		int x = a;
		a = b;
		b = x;
	};
	swap2();

	return 0;
}
