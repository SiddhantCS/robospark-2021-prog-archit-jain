#include<iostream>

using namespace std;

class Rectangle{
	private:
		int length;
		int breadth;
	public:
		Rectangle() : length(0),breadth(0)      //constructor (no arguements)
		{ }
		Rectangle(int l,int b) : length(l),breadth(b)   //constructor (two arguements)
		{ }
		Rectangle(int i) : length(i),breadth(i)     //constructor (having one no. as parameter)
		{ }
		void getter(){
			cout<<"Please enter length of rectangle:\n";
			cin>>length;
			cout<<"Please enetr breadth of rectangle:\n";
			cin>>breadth;
		}
		int calculate(int length,int breadth){
			return length*breadth;
		}
		void setter(){
			cout<<"Area of rectangle is: "<<calculate(length,breadth)<<" sq.units.\n";
		}
};

int main(){
	Rectangle r1,r2{5},r3{5,10};
	r1.getter();
	r1.setter();
	r2.setter();
	r3.setter();
   
   return 0;
}
