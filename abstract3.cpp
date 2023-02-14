//Demonstrate the use of public , private and protected access modifiers.

#include<iostream>
using namespace std;

class old{
	
	private:
		
		int a;
		
		
		public:
		int b;	
			
		protected:	
	     
	     int c;
	     
};

class unique : public old {
	
	public:
		
		void getData(){
			
			cout<<"Enter c:";
			cin>>c;
			
			cout<<c;
		}
	
};

main(){
	
	unique o;
	
	o.getData();
	
}
