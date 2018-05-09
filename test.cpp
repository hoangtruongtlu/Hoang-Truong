#include <iostream>
using namespace std;

class Hinh
{
	public:
		virtual float getChuvi() const = 0;
		/*{
			cout<<"No data"<<endl;
			return 0;
		}*/
		virtual float getDientich() const= 0;
		/*{
			cout<<"No data"<<endl;
			return 0;
		}*/
};
class HCN: public Hinh
{
	protected:
		float CD;
		float CR;
	public:
		HCN():CD(0.0),CR(0.0)
		{
		}
		HCN(float a,float b):CD(a),CR(b)
		{
		}
		void setCD(float a)
		{
			this -> CD = a;
		}
		
		void setCR(float b)
		{
			this -> CR = b;
		}
		//getters
		float getCD()const
		{
			return this -> CD;
		}
		float getCR()const
		{
			return this-> CR;
		}
		float getChuvi() const
		{
			return 2*(this->CD+this->CR);
		}
		float getDientich() const
		{
			return this->CD*this->CR;
		}
};
int main()
{
	float c,d;
	cin>>c>>d;
	Hinh *a =  new HCN(c,d);
	cout<<"Chu vi = "<<a->getChuvi()<<endl;
	cout<<"Dien tich = "<<a->getDientich()<<endl;
}
		
		
		
		
		
		
		
		
		
