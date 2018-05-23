#include <iostream>
#include <string.h>
using namespace std;
class Date
{
	protected:
		int ngay;
		int thang;
		int nam;
	public:
		Date():ngay(1),thang(1),nam(1999){}
		Date(int a,int b,int c):ngay(a),thang(b),nam(c){}
		void setngay(int a)
		{
			this->ngay=a;
		}
		void setthang(int a)
		{
			this->thang=a;
		}
		void setnam(int a)
		{
			this->nam=a;
		}
		int getngay()
		{
			return this->ngay;
		}
		int getthang()
		{
			return this->thang;
		}
		int getnam()
		{
			return this->nam;
		}
		void print()
		{
			cout<<getngay()<<"-"<<getthang()<<"-"<<getnam()<<endl;
		}
		
};
/*class MayTinh:public Date
{
	protected:
		string HangSanXuat;
	public:
		MayTinh():Date(1,1,1999),HangSanXuat(""){}
		MayTinh(int ng,int th,int n,string HSX):Date(ng,th,n),HangSanXuat(HSX){}
		void setHangSanXuat(string a)
		{
			this->HangSanXuat=a;
		}
		string getHangSanXuat()
		{
			return this->HangSanXuat;
		}		
};
class MayTinhDeBan:public MayTinh
{
	private:
		bool LoaiCase;
	public:
		MayTinhDeBan():MayTinh(""	),LoaiCase(1){}
		MayTinhDeBan(string HSX,bool LC):MayTinh(HSX),LoaiCase(LC){}
		void setloaicase(bool LC)
		{
			this->LoaiCase = LC;
		}
		bool getloaicase()
		{
			return this->LoaiCase;
		}		
};

class MayTinhXachTay:public MayTinh
{
	private:
		float CanNang;
	public:
		MayTinhXachTay():MayTinh(""),CanNang(0){}
		MayTinhXachTay(float a):MayTinh(HSX),CanNang(a){}
		void setcannang(float a)
		{
			this->CanNang = a;
		}
		float getcannang()
		{
			return this->CanNang;
		}
};*/

int main()
{
	Date d1, d2;
	d1(18,6,2014);
	d1.print();
	d2(1,1,2014);
	d2.print();
	cout<<d1<<";"<<d2<<endl;
}
	

