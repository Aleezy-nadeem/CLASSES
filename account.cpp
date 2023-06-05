#include<iostream>
using namespace std;

class Account{
	private:
	string 	accno;
	string acctitle;
	double amount;
	char acctype;
	public:
	Account():amount(0){
	}
	Account(string no,string title,double a,char type){
		accno=no;
		acctitle=title;
		amount=a;
		acctype=type;
	}
	
	Account(const Account&){
	}
	void deposit(double a){
        amount+=a;
         	    	
	}
	void withdraw(double a){
		amount-=a;
	
		
	}
	void changeType(char a){
		acctype=a;
	}
	void checkBalance(){
		cout<<"current balance: "<<amount<<endl;
	}
	void displayAccountInfo(){
		cout<<"Account Info:"<<endl;
		cout<<"amount: "<<amount<<endl;
	}
	string get_accno();
	string get_acctitle();
	double get_amount();
	char get_acctype();
	void set_accno(string no){
		accno=no;
	}
	void set_acctitle(string title){
		acctitle=title;
	}
	void set_amount(double a){
		amount=a;
	}
	void set_acctype(char type){
		acctype=type;
	}
	~Account(){
	}	
};
int main(){
	Account a1,a2;
	a1.deposit(1000);
	a1.checkBalance();
	a1.withdraw(700);
	a1.checkBalance();
	a2.deposit(5000);
	a1.displayAccountInfo();
	a2.displayAccountInfo();
}
