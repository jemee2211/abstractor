// Demonstrate the use of pure virtual function.

#include<iostream>
using namespace std;

class parent{
	
	public:
		virtual void hobby()=0;
		
};

class child: public parent{
	
	public:
		void hobby(){
			cout<<"Parent is Early Bird";
		}
};
main(){
	
	child o;
	o.hobby();
}
