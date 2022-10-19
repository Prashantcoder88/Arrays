#include<iostream>
using namespace std;
int main()
	
	{
		int i, n;
		int array[10];
		
		cout<<"Enter elements : ";
		
		cin>>n;
		
		cout<<endl;
		
		for(i=0; i<n; ++i)
		{
			cout<<"Enter Number " << i+1<<" : ";
			cin>> array[i];
			
		}
		
		//Loop to store smallest numbr to array
		
		for(i=1; i<n; ++i)
		{
			if(array[0]>array[i]){
				array[0] = array[i];
			}
			
		}
		cout<< "min element : "<< array[0];
		return 0;
	}