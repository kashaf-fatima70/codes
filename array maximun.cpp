#include<iostream>
using namespace std;
int main()
{
     int arr1[5];
     int maxnum,min;
     
     cout<<"enter the value in thr array \n";
     
     for(int i=0;i<5;i++)
	 {
	 	cin>>arr1[i];
	 }
	 
	 for(int i=0;i<5;i++)
	 {
	 	if(arr1[i]>maxnum)
	 	{
	 		maxnum=arr1[i];
		 }
	 }
	 cout<<"maximum number = "<<maxnum<<endl;
	 
	 for(int i=0;i<5;i++)
	 {
	 	if(arr1[i]<min)
	 	{
	 		min=arr1[i];
		 }
	 }
	 cout<<"mnimun number = "<< min;
}
