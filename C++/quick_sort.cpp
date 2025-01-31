/*
Implement Quick Sort
In quick sort we focus on finding
the position of each element*/

#include <iostream>
using namespace std;


void print(int a[],int n)
{
 for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}

void Quick_Sort(int a[],int lb,int ub)
{
	int i=lb,j=ub,pivot=a[lb];
	
	if(lb>=ub)
		return;
	
	while(i<j)
	{
		//If element from start of array is less than pivot increase i
		while(pivot>=a[i] && i<j)
			i++;
		
		//If element from end of array is less than pivot decrease j
		while(pivot<a[j])
			j--;
		
		//Swapping a[i] and a[j]	
		if(i<j)
		{
			int t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	a[lb]=a[j];
	a[j]=pivot;
	
	Quick_Sort(a,lb,j-1);
	Quick_Sort(a,j+1,ub);
}

int main()
{
 int n;
 cout<<"Enter the size of Array:";
 cin>>n;
 
 int a[n];
 cout<<"Enter the values in Array"<<endl;
 
 for(int i=0;i<n;i++)
    cin>>a[i];
    
 Quick_Sort(a,0,n-1);
 print(a,n);
    
 return 0;
}

