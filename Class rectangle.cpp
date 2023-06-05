#include<iostream>
using namespace std;
class Rectangle{
	private:
		double length;
		double width;
	public:
	    Rectangle(){
	    	length=0.0;
	    	width=0.0;
		}	
		Rectangle(double l, double w){
			length = l;
			width = w;
		}
		void Display(){
			cout<<"Length: "<<length<<endl;
			cout<<"Width: "<<width<<endl;
		}
		double calculateArea(){
			return length*width;
		}
		Rectangle operator +( Rectangle&y){
			double templength = length + y.length;
			double tempwidth = width + y.width;
		    return Rectangle( templength , tempwidth);
			
		} 
		Rectangle operator -( Rectangle&y){
			double templength = length - y.length;
			double tempwidth = width - y.width;
		    return Rectangle( templength , tempwidth);
		} 
		Rectangle operator *( Rectangle&y){
			double templength = length * y.length;
			double tempwidth = width * y.width;
		    return Rectangle( templength , tempwidth);
		} 
		Rectangle operator /( Rectangle&y){
			double templength = length / y.length;
			double tempwidth = width / y.width;
		    return Rectangle( templength , tempwidth);
		} 
		void operator =( Rectangle&y){
			length = y.length;
			width = y.width;
		} 
	    bool operator ==( Rectangle&y){
	    	return (length == y.length) && (width == y.width);
		} 
		 
};
int main(){
	Rectangle r1 , r2;
	if ( r1 == r2 ){
		cout<<true;
	}
	else{
		cout<<false;
	}
	
	
}

