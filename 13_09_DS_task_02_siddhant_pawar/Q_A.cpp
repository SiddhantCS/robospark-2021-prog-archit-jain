#include<iostream>
#include<iomanip>
using namespace std;

struct customer{
	int Acc_no;
	char name[20];
	float balance;
};

void display_list(int Acc_no,char name[20]){
	cout<<"Account No: "<<Acc_no<<setw(4)<<",Name: "<<name;
	cout<<endl;
}

void withdrawal(char name[20],int Acc_no,float balance,float remove){
	float update_val;
	if(balance>remove){
		update_val=balance-remove;
	    cout<<"Dear "<<name<<" your Account no. is:"<<Acc_no<<setw(4);
	    cout<<".You have withdrawn Rs. "<<remove<<" and your updated bank balance is Rs. "<<update_val;
	}
	else{
		cout<<"The balance is insufficient for the specified withdrawal.";
	}
	cout<<endl;
	
}

void deposit(char name[20],int Acc_no,float balance,float add){
	float update_val;
	update_val=balance+add;
	cout<<"Dear "<<name<<" your Account no. is:"<<Acc_no<<setw(4);
	cout<<".You have deposited Rs. "<<add<<" and your updated bank balance is Rs. "<<update_val;
	cout<<endl;
}

int main(){
	customer arr[10];
	int a;
	float remove,add;
	for(int i=0;i<3;i++){
		cout<<"Enter Account No:";cin>>arr[i].Acc_no;
		cout<<"Enter First Name:";cin>>arr[i].name;
		cout<<"Enter Balance:";cin>>arr[i].balance;
	}
	cout<<"List of customers of balance less tha Rs.100\n";
	for(int j=0;j<3;j++){
		if(arr[j].balance<100){
			display_list(arr[j].Acc_no,arr[j].name);
		}
	}
		
	for(int k=0;k<3;k++){
		cout<<"Enter 1 for deposit or 0 for withdrawal and -1 for exit:";cin>>a;
		if(a==0){
			cout<<"Enter amount to be withdrawn:";cin>>remove;
			withdrawal(arr[k].name,arr[k].Acc_no,arr[k].balance,remove);
		}
		else if(a==1){
			cout<<"Enter amount to be deposited:";cin>>add;
			deposit(arr[k].name,arr[k].Acc_no,arr[k].balance,add);
		}
		else if(a==-1){
			cout<<"Thank You,Visit again!!"<<endl;
		}
	}
   
   return 0;
}
