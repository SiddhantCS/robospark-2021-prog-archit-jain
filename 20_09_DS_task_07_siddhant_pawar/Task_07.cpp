#include<iostream>

using namespace std;

class Box{
	private:
		float length;
		float breadth;
		float height;
	public:
		Box() : length(),breadth(),height()
		{ }
		Box(float i) : length(i),breadth(i),height(i)
		{ }
		void getters(){
			cout<<"Enter length of Box:\n";cin>>length;
			cout<<"Enter breadth of Box:\n";cin>>breadth;
			cout<<"Enter heighth of Box:\n";cin>>height;
		}
		void setters(){
			cout<<"Volume of Box is: "<<get_volume()<<" cu.units\n";
		}
		void members(){
			cout<<"Length of Box is: "<<length<<" units.\t\t";
			cout<<"Breadth of Box is: "<<breadth<<" units.\t\t";
			cout<<"Height of Box is: "<<height<<" units.\t\n";
			cout<<endl;
		}
		float get_volume(){
			return length*breadth*height;
		}
	bool operator < (Box);
	bool operator == (Box);
};

bool Box::operator < (Box b2){
	float bf1 = length*breadth*height;
	float bf2 = b2.length*b2.breadth*b2.height;
	return (bf1 < bf2) ? true : false;
}

bool Box::operator == (Box b2){
	float bf1 = length*breadth*height;
	float bf2 = b2.length*b2.breadth*b2.height;
	return (bf1 == bf2) ? true : false;
}

int main(){
   Box b1,b2;
   b1.getters();
   b2.getters();
   cout<<endl;
   cout<<"Dimesions of box b1 are:\n";b1.members();
   cout<<"Dimesions of box b2 are:\n";b2.members();
   b1.setters();
   b2.setters();
   if(b1<b2){
   	if(b1==b2){
   		cout<<"\nVolume of Box1 is equal to Box2\n";
   		exit(0);
	}
	else{
		cout<<"\nVolume of Box1 is less than Box2\n";
	}
   }
   else{
   	if(b1==b2){
   		cout<<"\nVolume of Box1 is equal to Box2\n";
   		exit(0);
	   }
   	cout<<"\nVolume of Box1 is greater than Box2\n";
   }
   return 0;
}
