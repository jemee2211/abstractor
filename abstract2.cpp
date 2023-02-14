//Create two class name Parent and Child which has function 
//name called childdetails(), Use Data Abstraction to Display 
//childdetails using parent class.

#include<iostream>
using namespace std;

class parent{
	
	public:
		
		virtual void childdetails(){
			
			cout<<"parent is 48 year old."<<endl;
			cout<<"parent is Night Owl"<<endl;
				
		}
	
};
class child : public parent{
	
	public:
		
		void childdetails(){
			
			cout<<"Child is 20 year old."<<endl;
			cout<<"Child is Early Bird"<<endl;
		}
	
	
};

main(){
	
	parent *ptr;
	child obj;
	
	ptr = &obj;
	
	ptr->childdetails();
	
	
}
