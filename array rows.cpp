#include<iostream>
using namespace std;

int main()
{
	int a[3],b[3],c[3];
	int sum[3];
	
	
	cout<<"enter the first array=";
	for(int i=0;i<3;i++)
	{
		cin>>a[i];
	}
//	cout<<"  ";
	
	
		
	cout<<"enter the second array=";
	for(int i=0;i<3;i++)
	{
		cin>>b[i];
	}

	//cout<<"  ";
	

	
	cout<<"enter the third array=";
	for(int i=0;i<3;i++)
	{
		cin>>c[i];
	}
	
		//cout<<"  ";
	
	
	for(int i=0;i<3;i++)
	{
		sum[i]=a[i]+b[i]+c[i];
	}
	
	
	cout<<"the result of the sum of array is"<<endl;
		for(int i=0;i<3;i++)
	{
	cout<<sum[i]<<endl;
	}
	return 0;
}
