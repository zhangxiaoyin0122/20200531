#include <iostream>
#include <string>
#include <vector>
using namespace std;

void test() {
	string str("123456789");
	//正向迭代器
	string::iterator it = str.begin();
	while (it != str.end()) {
		cout << *it << " ";
		++it;
	}
	cout << endl;
	for (int i = 0; i < str.size(); ++i) {
		cout << str[i] << " ";
	}
	cout << endl;
}
//模板
template <class T>
T add(const T& a,const T& b) {
	return a + b;
}
template <class T1, class T2>
T1 add(const T1& a,const T2& b) {
	return a + b;
}
void test1() {
	int a = 3, b = 4;
	char c = 'X';
	char d = 'Y';
	add(a, b);
	add(c, d);
	add(a, c);
	add<int>(a, c);
}

//类模板
template <class T1,class T2,class T3>
class Date {
public:
	/*Date(T1 year = 2020,T2 month = 5,T3 day = 31)
		:_year(year)
		,_month(month)
		, _day(day)
	{}*/
	Date(T1 year, T2 month, T3 day)
		:_year(year)
		, _month(month)
		, _day(day)
	{}
	void Display();
private:
	T1 _year;
	T2 _month;
	T3 _day;
};

template <class T1, class T2, class T3>
void Date<T1, T2, T3>::Display(){
	cout << _year << "-" << _month << "-" << _day << endl;
}


void test2() {
	Date<int,int,int> d(2020,5,31);
	d.Display();
}


void test4() {
	string str1;
	string str2("123");
	string cpy(str2);
	string str3 = "abc";
	string str4("123456789", 5);
	string str5(str4, 2, 3);
	string str6(10, 'C');
	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << str4 << endl;
	cout << str5 << endl;
	cout << str6 << endl;
}


int main() {
	test4();
	system("pause");
	return 0;
}