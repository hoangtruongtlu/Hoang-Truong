#include <iostream>
#include <math.h>
using namespace std;
class So
{
public:
	virtual float Binhphuong()=0;
	virtual float Lapphuong()=0;
	void print()
	{
		cout<<Binhphuong()<<endl;
		cout<<Lapphuong();
	}
};

class Songuyen: public So
{
private:
	int songuyen;
public:
	Songuyen():So(),songuyen(0){}
	Songuyen(int a):So(),songuyen(a){}
	void setKSN(int a)
	{
		this->songuyen = a;
	}
	int getKSN()
	{
		return this->songuyen;
	}
	float Binhphuong()
	{
		return this->songuyen*this->songuyen;
	}
	float Lapphuong()
	{
		return this->songuyen*this->songuyen*this->songuyen;
	}
	friend istream &operator >>(istream &in, Songuyen & sn)
	{
		cout<<"So nguyen: "; in>>sn.songuyen;
		return in;
	}
};

class Phanso: public So
{
	private:
		int tuso;
		int mauso;
	public:
		Phanso():So(),tuso(0),mauso(0){}
		Phanso(int a, int b):So(),tuso(a),mauso(b){}
		void setTuso(int a)
		{
			this->tuso=a;
		}
		void setMauso(int b)
		{
			this->mauso=b;
		}
		int getTuso()
		{
			return this->tuso;
		}
		int getMauso()
		{
			return this->mauso;
		}
		float Binhphuong()
		{
			return float(tuso*tuso)/(mauso*mauso);
		}
		float Lapphuong()
		{
			return float(tuso*tuso*tuso)/(mauso*mauso*mauso);
		}
		friend istream &operator >>(istream &in, Phanso & ps)
		{
			cout<<"Nhap tu so: "; in>>ps.tuso;
			cout<<"Nhap mau so: "; in>>ps.mauso;
			return in;
		}		
};

int main()
{
	So *a[6];
	for (int i=0;i<6;i++)
	{
		if (i%2==0)
		{
				cout<<"So thu "<<i<<": "<<endl;
				Songuyen *b = new Songuyen();
				cin>>*b;
				a[i]=b;
		}
		if (i%2!=0)
		{
			cout<<"So thu "<<i<<": "<<endl;
			Phanso *b = new Phanso();
			cin>>*b;
			a[i]=b;
		}
	}
	float maxx=0;
	for (int i=0;i<6;i++)
	{
		if (maxx<a[i]->Binhphuong())
		{
			maxx=a[i]->Binhphuong();
		}
	}
	cout<<"max la: "<<sqrt(maxx)<<endl;
	for (int i=0;i<6;i++)
	{
		a[i]->print();
	}
}