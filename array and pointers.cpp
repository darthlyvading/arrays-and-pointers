#include<iostream>
using namespace std;

int main()
{
	int a[5];
	cout<<"enter the elements of the array"<<endl;
	for(int i = 0;i<5;i++)
	{cin>>a[i];
	}
	cout<<"the elements you entered are"<<endl;
	for(int i = 0;i<5;i++)
	{cout<<*(a+i)<<endl;
		
	}
	return 0;	
}
