#include <iostream>
using namespace std;
class HinhVuong
{
	private:
		int canh;
	public:
		void setCanh(int a)
		{
			canh = a;
		}
		friend class HinhChuNhat;
};

class HinhChuNhat
{
	private:
		int dai,rong;
	public:
		int area ()
    		{
			return (dai * rong);
		}
    		void convert (HinhVuong a);
};

void HinhChuNhat::convert (HinhVuong a) 
{
 		dai = a.canh;
  		rong = a.canh;
}

int main ()
{
  		HinhVuong sqr;
  		HinhChuNhat rect;
  		sqr.setCanh(4);
  		rect.convert(sqr);
  		cout << rect.area() << endl;
}
