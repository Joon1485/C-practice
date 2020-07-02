

#include <iostream>

using namespace std;

class Calculator
{
	void input()
	{
		cout << "정수 두 개를 입력 : " ;
		cin >> a >> b;
	}
protected:
	int a, b;
	virtual int calc(int a, int b) = 0;
public:
	void run()
	{
		input();
		cout << "계산된 값은" << calc(a, b) << endl;
	}
};
class Adder : public Calculator
{
	int calc(int a, int b)
	{
		return a + b;
	}
};
class Subtract : public Calculator
{
	int calc(int a, int b)
	{
		return a - b;
	}
};
int main()
{
	Adder adder;
	Subtract sub;
	adder.run();
	sub.run();
}
