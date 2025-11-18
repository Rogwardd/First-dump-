#include<iostream>
using namespace std;
int main()
{
	int a,b,sum,diff,product,quotient,rem;
	cout<<"Enter your 1st number: ";
	cin>>a;
	cout<<"Enter your 2nd number: ";
	cin>>b;
	
	sum=a+b;
	diff=a-b;
	product=a*b;
	quotient=a/b;
	rem=a%b;
	
	cout<<endl<<"The SUM of "<<a<<" and "<<b<<" is: "<<sum<<endl;
	cout<<"The DIFFERENCE of "<<a<<" and "<<b<<" is: "<<diff<<endl;
	cout<<"The PRODUCT of "<<a<<" and "<<b<<" is: "<<product<<endl;
	cout<<"The QUOTIENT of "<<a<<" and "<<b<<" is: "<<quotient<<endl;
	cout<<"The Remainder of "<<a<<" and "<<b<<" is: "<<rem<<endl;
	
	return 0;
}
