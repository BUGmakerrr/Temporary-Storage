//#include <iostream>
//using namespace std;
//
//class Solution {
//public:
//	Solution()
//	{
//		cout << "Solution()" << endl;
//	}
//
//	int Sum_Solution(int n) {
//		// ...
//		cout << "Sum_Solution()" << endl;
//
//		return n;
//	}
//
//	~Solution()
//	{
//		cout << "~Solution()" << endl;
//	}
//};
//
//int main()
//{
//	Solution s1; // s1������������main������
//	s1.Sum_Solution(10);
//
//	//Solution();  // �������� �������ھ�����һ��
//	Solution().Sum_Solution(10);  //ֻ������һ�л�ʹ������������󣬱��˲���Ҫʹ��
//
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	static int monthDays[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int year, month, day;
//	// �������Բ��Ͻ������룬ֱ����ctrl + c�ͽ���
//	while (cin >> year >> month >> day)
//	{
//		int n = 0;
//		// �ۼ�1-month-1�µ�����
//		for (int i = 1; i < month; ++i)
//		{
//			n += monthDays[i];
//		}
//		// �ۼ�month�Ǹ��µ�����
//		n += day;
//
//		// ����+1��
//		if (month > 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
//		{
//			n += 1;
//		}
//
//		cout << n << endl;
//	}
//
//	return 0;
//}
#include <iostream>
using namespace std;

//class A
//{
//public:
//	A()
//	{
//		cout << "A()" << endl;
//	}
//
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//};
//
//class B
//{
//public:
//	B()
//	{
//		cout << "B()" << endl;
//	}
//
//	~B()
//	{
//		cout << "~B()" << endl;
//	}
//};
//
//class C
//{
//public:
//	C()
//	{
//		cout << "C()" << endl;
//	}
//
//	~C()
//	{
//		cout << "~C()" << endl;
//	}
//};
//
//class D
//{
//public:
//	D()
//	{
//		cout << "D()" << endl;
//	}
//
//	~D()
//	{
//		cout << "~D()" << endl;
//	}
//};

//C c;
//int main()
//{
//	A a;
//	B b;
//	static D d;
//
//	return 0;
//}
// C  A  B  D
// ~B ~A ~D ~C

class Widget
{
public:
	Widget()
	{}

	Widget(const Widget& w)
	{
		cout << "Widget(const Widget& w)" << endl;
	}
};

Widget f(Widget u)
{
	Widget v(u);
	Widget w = v;
	return w;
}

//void main(){
//	Widget x;
//	Widget y = f(f(x));
//
//	int* p = nullptr;
//	cout << sizeof(p) << endl;
//}

//int main()
//{
//	// C ����
//	int* p1 = (int*)malloc(sizeof(int));
//	int* p3 = (int*)malloc(sizeof(int)*10);
//	free(p1);
//	free(p3);
//	
//	// C++ ������
//	//int* p2 = new int;
//	int* p2 = new int(10); // ����һ��int4���ֽڿռ䣬��ʼ����10
//	int* p4 = new int[10]; // ����10��int��40���ֽڿռ�
//
//	delete p2;
//	delete[] p4;
//
//	return 0;
//}

// ��Ȼ�Ѿ�����malloc��free��new��delete��������ڣ�
// 1�����������������ͣ�����Ч����һ���ġ�
// 2�������Զ������ͣ�Ч���Ͳ�һ����mallocֻ����ռ䡣new ����ռ�+���캯����ʼ��
// freeֻ�ͷſռ䣬delete ��������+�ͷſռ�
class A
{
public:
	A(){
		_a = 0;
		cout << "A()" << endl;
	}

	~A()
	{
		cout << "~A()" << endl;
	}
private:
	int _a;
}; 

class B
{
public:
	B(){
		_a = 0;
		cout << "B()" << endl;
	}

	~B()
	{
		cout << "~B()" << endl;
	}
private:
	int _a;
};

//A a1;
//B b1;
int main()
{
	// ��������
	int* p1 = new int;
	int* p2 = (int*)malloc(sizeof(int));

	// �Զ�������
	A* p3 = (A*)malloc(sizeof(A)); // ����ռ�
	A* p4 = new A;                 // ����ռ�+���캯����ʼ��

	free(p3);					  // �ͷſռ�
	delete p4;                    // ��������+�ͷſռ�

	return 0;
}