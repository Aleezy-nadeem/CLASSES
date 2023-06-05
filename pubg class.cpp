#include <iostream>
using namespace std;
class player{
	private:
		int health;
		string name;
		public:
			player():health(0),name("\0"){
			}
			player(int h , string n):health(h), name(n){
			}
			void display_details()
			{
				cout<<"name is "<<name<<endl;
				cout<<"health id "<<health<<endl;
			}
};
 class shooter: public player {
 	private:
 		int ammo;
 		public:
 			shooter(int h , string n , int a):player(h,n),ammo(a){
			 }
			 void display_details()
			 { 
			 player::display_details();
			 cout<<"value of ammo is:"<<ammo<<endl;
			 }
 };
 int main()
 {
 	shooter s1( 100, "ali" , 200);
 	s1.display_details();
 }
