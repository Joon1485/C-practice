#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	void set(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	void showPoint()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
class ColorPoint : public Point
{
	string color;
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint()
	{
		cout << color << ":";
		showPoint();
	}
};
int main()
{
	ColorPoint cp;
	ColorPoint* pDer = &cp;
	Point* pBase = pDer; //up casting

	pBase->set(3, 4);
	pDer->showPoint();

	pDer = (ColorPoint*)pBase; // down casting
	pDer->setColor("RED");
	pDer->showColorPoint();
}
