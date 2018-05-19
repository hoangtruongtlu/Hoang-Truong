#include <iostream>
using namespace std;

class Point
{
	protected:
		int x;
		int y;
	public:
		Point():x(0),y(0){}
		Point(int a,int b):x(a),y(b){}
		void setX(int a)
		{
			this->x=a;
		}
		void setY(int b)
		{
			this->y=b;
		}
		int getX() const
		{
			return this->x;
		}
		int getY() const
		{
			return this->y;
		}
};