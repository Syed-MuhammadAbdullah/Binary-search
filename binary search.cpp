#include <iostream>
using namespace std;
int binary(int array[],int left,int right,int x)
{
	int mid = (left+right)/2;
	if(left>right)
	{
		return false;
	}
	else if(x==array[mid])
	{
		return true;
	}
	else if(x<array[mid])
	{
		 binary(array,left,mid-1,x);
	}
	else if(x>array[mid])
	{
		binary(array,mid+1,right,x);
	}
	
	
}
int main()
{
	int x,right=4,left=0;
	int array[]={1,2,3,4,5};
	cout<<"enter the number which you want search "<<endl;
	cin>>x;
	bool d=binary(array,left,right,x);
	if(d==1)
	{
		cout<<"value found";
	}
	else
	{
		cout<<"value not found ";
	}

}
