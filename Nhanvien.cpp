#include <iostream>
#include "test.cpp"
using namespace std;

class Nhanvien
{
protected:
	string name;
	string CMND;
	Date DOB;
public:
	Nhanvien(){}
	Nhanvien(string a,string b,Date c)
	{
		this->name=a;
		this->CMND=b;
		this->DOB=c;
	}
	void setName(string ten)
	{
		this->name=ten;
	}
	void setCMT(string cmnd)
	{
		this->CMND=cmnd;
	}
	void setBD(int d,int m,int y)
	{

		this->DOB=Date(d,m,y);
	}
	string getName()
	{
		return this->name;
	}
	string getCMT()
	{
		return this->CMND;
	}
	Date getBD()
	{
		return this->DOB;
	}
	virtual float TinhLuong()=0;
};

class CanBo:public Nhanvien
{
private:
	string PhongBan;
	double Heso;
	int Tienthuong;
public:
	CanBo():Nhanvien(),PhongBan(""),Heso(1.8),Tienthuong(100000){}
	CanBo(string a,string b,Date c,string d,double e,int f):Nhanvien(a,b,c),PhongBan(d),Heso(e),Tienthuong(f){}
	void setPhong(string room)
	{
		this->PhongBan=room;
	}
	void setheso(double a)
	{
		this->Heso=a;
	}
	void setPhucap(int b)
	{
		this->Tienthuong=b;
	}
	string getPhong()
	{
		return this->PhongBan;
	}
	double getheso()
	{
		return this->Heso;
	}
	int getPhucap()
	{
		return this->Tienthuong;
	}
	float TinhLuong()
	{
		return this->Heso*1500000+this->Tienthuong;
	}
};

class GiaoVien:public Nhanvien
{
private:
	string Khoa;
	double HSL;
	int Tienday;
public:
	GiaoVien():Nhanvien(),Khoa(""),HSL(2.34),Tienday(0){}
	GiaoVien(string a,string b,Date c,string d,double e,int f):Nhanvien(a,b,c),Khoa(d),HSL(e),Tienday(f){}
	void setkhoa(string a)
	{
		this->Khoa=a;
	}
	void sethsl(double b)
	{
		this->HSL=b;
	}
	void settienday(int c)
	{
		this->Tienday=c;
	}
	string getkhoa()
	{
		return this->Khoa;
	}
	double gethsl()
	{
		return this->HSL;
	}
	int gettienday()
	{
		return this->Tienday;
	}
	float TinhLuong()
	{
		return this->HSL*1500000+this->Tienday;
	}
};

int main()
{
	Date d;
	CanBo cb[100];
	string name,cmt,phongban;
	double heso,tienthuong,minluong;
	int n;
	cin>>n;
	for (int i=0,i<n,i++)
	{
		cin>>d>>name>>cmt>>phongban>>heso>>tienthuong;
		cb[i](d,name,cmt,phongban,heso,tienthuong);
		if (i==0)
		{
			minluong=cb[i].TinhLuong();
		}
		if (cb[i].TinhLuong<minluong)
		{
			cb[i].TinhLuong()=minluong;
		}	
	}
	for (int i =0,i<n,i++)
	{
		if (cb[i].TinhLuong()==minluong){}
	}
	CanBo cb1(d1,"ABC","123","WC",1.8,500000);
	CanBo cb2(d2,"DEF","789","WCWomen,"2.5,300000);
}