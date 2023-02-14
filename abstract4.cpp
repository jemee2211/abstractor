// WAP to perform some basic mathematical operations using Abstract class such like:
//- area of circle
//- area of triangle
//- area of rectangle
//- use one single pure virtual function named
//calculate() to perform all above operations


#include<iostream>

using namespace std;

class math{
	
	public:
	
	int a;
	float b;
	int c,d,e,f,s;	
	
	int l,r,t;
	virtual void operation()= 0;
	
};

class calculate : public math{
	
	public:
		void operation(){
			
			cout<<"Enter A:";
			cin>>a;
			
			b = 3.14*a*a;
			
			cout<<"Area Of Circle Is "<<b<<endl;
		
	    	cout<<"Enter S:";
			cin>>s;
			
			cout<<"Enter C:";
			cin>>c;
			
			cout<<"Enter D:";
			cin>>d;
			
			cout<<"Enter E:";
			cin>>e;
			
		  f= (s*(s-c)*(s-d)*(s-e));
		  
		  cout<<"Area Of Triangle Is "<<f<<endl;
		  
		  cout<<"Enter L:";
		  cin>>l;
		  
		  cout<<"Enter R:";
		  cin>>r;
		  
		  t=l*r;
		  
		  cout<<"Area Of Rectangle Is "<<t<<endl;
		  
		}
	
	
};

main(){
	
	calculate n;
	n.operation();
	
}
