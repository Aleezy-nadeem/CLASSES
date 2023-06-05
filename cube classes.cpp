#include <iostream>
using namespace std ;
 
 
 class cube {
 	private:
 		double length;
 		double width;
 		double height;
 		
 		public:
 			 cube () {
 			 	
 			length = 0.0;
 			width= 0.0;
 			height= 0.0;
 			 }
 			    cube ( double len , double wid, double heig) {
 			    	length = len ;
 			    	width= wid ;
 			    	height = heig;
				 }
				 
				 void display () {
				 	cout<< "length " << length<< endl;
				 		cout<< "width " <<  width << endl;
				 		cout<< "height " << height<< endl;
				 	
				 }
 cube  operator+(cube&  cub ) {
     cube result;
        result.length = length + cub.length;
        result.width = width + cub.width;
         result.height = height + cub.height;
        return result;
    }
 cube  operator-(cube& cub ) {
     cube result;
        result.length = length - cub.length;
        result.width = width - cub.width;
         result.height = height - cub.height;
        return result;
    }

  cube  operator*(cube& cub) {
        cube  result;
        result.length = length * cub.length;
        result.width = width * cub.width;
        result.height = height * cub.height;
        
        return result;
    }

 cube operator/( cube &  cub ) {
        cube  result;
        result.length = length /  cub.length;
        result.width = width /  cub.width;
        result.height = height / cub.height;
        return result;
    }

    void operator=(const cube&  cub) {
        length = cub.length;
        width = cub.width;
        height =  cub.height;
}

    bool operator==(cube& cub) {
        return (length == cub.length) && (width == cub.width)  && (height == cub.height);
    }
    
 };
 int main (){
 	cube cub1( 4.4 , 5.5 , 4.6);
 	cube cub2 ( 2.2 , 3.3 , 6.6 );
 	cube cub3; 
 	
 	cub3 = cub1 + cub2;
    cub3.display();

    if (cub1 == cub2) {
        cout << "cub1 is equal to cub2" << endl;
    } else {
        cout << "cub1 is not equal to cub2" << endl;
    }

    return 0;

}

 	
 	
 
