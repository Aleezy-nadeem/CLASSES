#include <iostream>
using namespace std;


 class cricketer{
 	
 	
 	private: 
 	
 	int shirt_no;
 	int odi_rating;
 	int test_rating;
 	int t20_rating;
 	int startyr;
 	string name;
 	string dob;
 	
 	
 	
 	public:
 		cricketer():name("\0"), shirt_no(0), dob("\0"), t20_rating(0), startyr(0), test_rating(0), odi_rating(0) {
 			cout<<"Default constructor is working"<<endl;   
		 }
		 cricketer( string n, int shno, string d, int t20, int sty, int test, int odi){
		 	name= n;
		 	shirt_no=shno;
		 	dob= d;
		 	t20_rating=t20;
		 	startyr= sty;
		 	test_rating= test;
		 	odi_rating= odi;
		 	cout<<"\nparameterized constructor is working"<<endl;	
		 }
		 
		 
		 int calculateage( int pd, int pm, int py, int bd, int bm, int by ){
		 	cout << "ENTER THE PRESENT DATE : "<<endl;
		cin >> pd >> pm >> py;
		cout << "ENTER THE DATE OF BIRTH : "<<endl;
		cin >> bd >> bm >> by;

		int d, m, y;
		int md[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
		y = py - by;
		if (pm < bm)
		{
			y--;
			m = 12 - (bm - pm);
		}
		else
		{
			m = pm - bm;
		}
		if (pd < bd)
		{
			m--;
			d = md[pm - 1] - (bd - pd);
		}
		else
		{
			d = pd - bd;
		}
		cout << "ENTER YOUR AGE : \n";
		cout << y << " years " << m << " months " << d << " days. "<<endl;

	}
	
	 int calculateexperience(int pd,int pm,int py, int bd, int bm, int by ) {

		cout << " ENTER THE PRESENT YEAR : ";
		cin >>  py;
		cout << " ENTER THE YEAR IN WHICH YOU JOIN : ";
		cin >>  by;
		int md[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
		int y;
		y = py - by;
		if (pm < bm)
		{
			y--;	
		}

		cout << "TOTAL EXPERIENCE : \n";
		cout << y << " years " << endl ;

	}
		 void  changeODI_rating(int k){
		 	odi_rating= k;
		 	cout<<"odi rating is "<<odi_rating<<endl;
		 }
		 
		 
		 void changetest_rating(int n){
		 	test_rating = n;
		 	cout<<"test rating is "<<test_rating<<endl;	
		 }
		 
		 void changet20_rating(int m){
		 	t20_rating = m;
		 	cout<<"t20 rating is "<< t20_rating<<endl;
		 }
		 
		~cricketer(){
			cout<<"destructor of crickerter is working "<<endl;
		}
 };
 class bowler:public cricketer{
 	string type;
 	int total_wickets;
 	int match_played;
 	 
 public:
  bowler():type("\0"),total_wickets(0),match_played(0){
  	
  	cout<<"\n default constructor of  bowler is working "<<endl;
  }
  bowler( string n, int shno, string d, int t20, int sty, int test, int odi, string ty, int tw, int mp){
  	type= ty;
  	total_wickets= tw;
  	match_played= mp;
  	cout<<"\nparameterized constructor of bowlwe is working"<<endl;
  }
  int calculatebowlavg(){
  	int avg , wickets, matchesplayed;
  	cout<<"emter the no of wickets"<<endl;
  	cin>>wickets;
  	cout<<"enter the mathes played"<<endl;
  	cin>>matchesplayed;
  	avg = wickets/matchesplayed;
  	cout<<"averge od the bowler is " <<avg<<endl;
  }
  void updatematches(){
  	int playedmatches;
  	cout<<"no of matches played by bowler"<<endl;
  	cin>>playedmatches;
  	match_played= playedmatches;
  	cout<<" no of played matches of the bowler is "<<match_played<<endl;
  }
  
  
  void updatewickets(){
  	int bowlwickets;
  	cout<<"enter the wickets of  bowler" << endl;
  	cin>>bowlwickets;
  	total_wickets = bowlwickets;
  	cout<<"the wickets of the bowler is "<< total_wickets<< endl;
  }
  ~bowler(){
  	cout<<"\ndestructor of bowlwe is working"<<endl;
  }
 };
 
 class batsman: public cricketer{
 	private:
 	string type;
 	int total_runs;
 	int match_played;
 	int best_score;
 	 
 	 public:
 	 	batsman():type("\0"),total_runs(0),  match_played(0),  best_score(0){
 	 		cout<<"\ndefault constructor of batsman"<< endl;
		  }
		  batsman(string n, int shno, string d, int t20, int sty, int test, int odi, string ty, int tr, int tmp, int bs){
		  	type= ty;
		  	total_runs= tr;
		  	match_played= tmp;
		  	best_score=bs;
		  	cout<<"\n paramertized constructor of batsman is working "<<endl;
		  }
		  
		  
		  int calculatebatavg(){
		  	int avg, runs, playedmatches;
		  	cout<<"enter the no of runs"<<endl;
		  	cin>>runs;
		  	cout<<"enter the matches played "<<endl;
		  	cin>>playedmatches;
		  	avg=runs/playedmatches;
		  	cout<<"the average of batsman is "<<avg<<endl;
		  	
		  }
		   void updatematches(){
		  
		   }
		   
		   
		  void updateruns(){
		  	int runs;
		  	cout<<"runs of a batsman is "<<endl;
		  	cin>>runs;
		  	total_runs= runs;
		  	cout<<"total runs of a batsman is "<<total_runs<<endl;
		  	
		  }
		  
		  
		  ~batsman(){
		  	cout<<"\n destructor of a batsman is working"<<endl;
}
 };
  class ALLRounder: public bowler, public batsman{

  	ALLRounder(){
  		cout<<"default constructor is working "<<endl;
  		
	  }
	  
	  ~ALLRounder(){
	  	cout<<"default constructor is working"<<endl;
	  }
  };
  
  int main(){
  	int pd, pm, py, bd, bm, by;
  	 
  	 cricketer c1;
  	 c1.changet20_rating(34);
  	 c1.changeODI_rating(66);
  	 
  	 bowler b1;
  	 b1.changetest_rating(55);
  	 
  	 batsman b2;
  	 b2.calculatebatavg();
  }
