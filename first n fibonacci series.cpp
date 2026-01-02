#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number:";
	cin>>n;
	cout<<"First"<<n<<"Fibonacci numbers:";
	int a=0,b=1;
	for(int i=1;i<=n;i++)
	{
		cout<<a<<" ";
		int next=a+b;
		a=b;
		b=next;
	}
	cout<<endl;
	return 0;
}
