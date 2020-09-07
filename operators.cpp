//c++ program to find product of 2 numbers entered by user

include<iostream>
using namespace std;
main()
{
	float a,b,product;
	cout<<"Enter numbers: ";
	cin>>a>>b;
	product=a*b;
	cout<<"Product is: "<<product;
}


//c++ program to find size of int,float,char and double in your system

include<iostream>
using namespace std;
main()
{
	cout<<"Size of char: "<<sizeof(char)<<" bytes"<<endl;
	cout<<"Size of int: "<<sizeof(int)<<" bytes"<<endl;
	cout<<"Size of float: "<<sizeof(float)<<" bytes"<<endl;
	cout<<"Size of double: "<<sizeof(double)<<" bytes"<<endl;
}
