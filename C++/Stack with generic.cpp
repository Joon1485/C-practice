#include <iostream>

using namespace std;

template <class T>
class myStack
{
	int tos;
	T data[100];
public:
	myStack();
	void push(T element);
	T pop();
};

template <class T>
myStack<T>::myStack()
{
	tos = -1;
}

template <class T>
void myStack<T>::push(T element)
{
	if (tos == 99)
	{
		cout << "stack is full ! ";
		return;
	}
	tos++;
	data[tos] = element;
}

template <class T>
T myStack<T>::pop()
{
	T retData;
	if (tos == -1)
	{
		cout << "stack is empty !";
		return 0;
	}

	retData = data[tos--];
	return retData;
}
int main()
{
	myStack<int> iStack;
	iStack.push(3);
	cout << iStack.pop() << endl;

	myStack<double> dStack;
	dStack.push(3.5);
	cout << dStack.pop() << endl;

	myStack<char> cStack;
	cStack.push('A');
	cout << cStack.pop() << endl;
	
	myStack<char>* p = new myStack<char>();
	p->push('B');
	cout << p->pop() << endl;

	delete p;
}
