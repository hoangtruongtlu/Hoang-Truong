#include <iostream>
using namespace std;
 class Date
 {
 protected:
 	int d;
 	int m;
 	int y;
 public:
 	Date():d(31),m(10),y(1997){}
 	Date(int a, int b, int c):d(a),m(b),y(c){}
 	void setday(int a)
 	{
 		this->d=a;
 	}
 	void setmonth(int b)
 	{
 		this->m=b;
 	}
 	void setyeah(int c)
 	{
 		this->y=c;
 	}
 	int getday()
 	{
 		return this->d;
 	}
 	int getmonth()
 	{
 		return this->m;
 	}
 	int getyeah()
 	{
 		return this->y;
 	}
 	void print()
 	{
 		cout<<d<<"-"<<m<<"-"<<y;
 	}
 };