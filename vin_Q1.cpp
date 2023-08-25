#include<iostream>
using namespace std;

class data 
{
	private:
		int x;
		int y;
	public:
		void set1()
		{
			cout << "Enter first number :- " ;
			cin >> this->x ;
		}
		
		void set2()
		{
			cout << "Enter second number :- " ;
			cin >> this->y ;
		}
		
		operator<(data n)
		{
			
				if(this->x < n.y)
			{
				cout << "First number is small " ; 
			}
			else
			{
				cout << "Second number is small " ;
			}
		}
};

int main()
{
	data v1,v2;
	
	v1.set1();
	v2.set2();
	
	v1 < v2 ;
	
	return 0;
}
