#include<bits/stdc++.h>

using namespace std;

class Personal{
	protected:
		string Name,Surname,address;
		int Mobile,dob_dd,dob_mm,dob_yy;
	public:
		Personal() : Name(),Surname(),address(),Mobile(0),dob_dd(0),dob_mm(0),dob_yy(0)
		{ }
		void getPer(){
			cout<<"Please enter your first name:\n";cin>>Name;
			cout<<"Please enter your last name:\n";cin>>Surname;
			cout<<"Please enter your address:\n";getline (cin >> ws,address);
			cout<<"Please enter your mobile no:\n";cin>>Mobile;
			cout<<"Please enter your date of birth(dd/mm/yyyy):\n";cin>>dob_dd>>dob_mm>>dob_yy;
		}
};

class Professional{
	protected:
		string org_name,job_profile,project;
	public:
		Professional() : org_name(),job_profile(),project()
		{ }
		void getPro(){
			cout<<"Please enter name of your organization:\n";getline(cin >> ws,org_name);
			cout<<"Please enter your job profile:\n";getline(cin >> ws,job_profile);
			cout<<"Please enter your project:\n";getline(cin >> ws,project);	
		}
};

class Academic{
	protected:
		int yr;
		float cgpa;
		string cllg_name,branch;
	public:
		Academic() : yr(0),cgpa(0.0),cllg_name(),branch()
		{ }
		void getAca(){
			cout<<"Please enter your passing out year:\n";cin>>yr;
			cout<<"Please enter your cgpa:\n";cin>>cgpa;
			cout<<"Please enter your college name:\n";getline(cin >> ws,cllg_name);
			cout<<"Please enter your branch:\n";getline(cin >> ws,branch);
		}
};

class biodata : public Personal,public Professional,public Academic
{
	public:
		void putdata(){
			cout<<"My Personal Data\n";
			cout<<"My name is "<<Name<<setw(2)<<" "<<Surname<<".I live in "<<address<<
			".My mobile no is "<<Mobile<<".My date of birth is "<<dob_dd<<"-"<<dob_mm<<"-"<<dob_yy<<".";
			cout<<"\n"<<endl;
			cout<<"My Professional Data\n";
			cout<<"I work in "<<org_name<<" as a "<<job_profile<<".Major Project done by me is "<<project;
			cout<<".\n"<<endl;
			cout<<"My Academic Data\n";
			cout<<"I passed out my graduation in "<<yr<<" by securing "<<cgpa<<" cgpa.I had done my graduation from "
			<<cllg_name<<setw(2)<<" "<<branch<<" branch.\n";
			cout<<"\n"<<endl;
		}
};

int main(){
	biodata b1;
	b1.getPer();
	b1.getPro();
	b1.getAca();
	cout<<"\n\n";
	b1.putdata();
   
   return 0;
}
