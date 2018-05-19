#include <iostream>
#include "pointrectangle.cpp"
using namespace std;

class Rectangle
{
	private:
		Point topleft;
		Point botright;
	public:
		Rectangle():topleft(0,0),botright(0,0){}
		Rectangle(int xtopleft,int ytopleft,int xbotright,int ybotright):topleft(xtopleft,ytopleft),botright(xbotright,ybotright){}
		void setTopleft(int xtopleft,int ytopleft)
		{
			this->topleft = Point(xtopleft,ytopleft);

		}
		void setBotright(int xbotright,int ybotright)
		{
			this->botright= Point(xbotright,ybotright);
		}
		Point getTopleft()
		{
			return this->topleft;
		}
		Point getBotright()
		{
			return this->botright;
		}
		bool kiemtra(int a,int b)
		{
			int xMin = topleft.getX()>botright.getX()?botright.getX():topleft.getX();
			int xMax = topleft.getX()>botright.getX()?topleft.getX():botright.getX();
			int yMin = topleft.getY()>botright.getY()?botright.getY():topleft.getY();
			int yMax = topleft.getY()>botright.getY()?topleft.getY():botright.getY();
			
			if ((a>=xMin&&a<=xMax)&&(b>=yMin&&b<=yMax))
				return 1;
			return 0;
		}
};
int main()
{
	Rectangle a(3,5,5,8);
	a.kiemtra(3,6);
}