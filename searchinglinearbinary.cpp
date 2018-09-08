#include<iostream>
using namespace std;
/*int main()
{
	int arr[10],n,x;
	cout<<"enter how many numbers u want to sort";
	cin>>n;
		for(int i=0;i<n;i++)
			{
				cin>>arr[i];
			}
	cout<<"enter the no u want to search";
	cin>>x;
		for(int i=0;i<n;i++)
		{
			if(arr[i]==x)
			{
				cout<<"number present at location"<<i;
				break;
			}
		}
return 0;

}*/
						//BINARY SEARCH
/*int binarysearch(int arr[],int l,int u,int item,int mid)
{
	while((l<u)&&(mid!=item))
		{
				mid=(l+u)/2;
			if(arr[mid]<item)
				u=mid+1;
			
			else
				l=mid-1;

		
		if(arr[mid]==item)
		return mid;
	}
return -1;

}
int main()
{
	int arr[20],n,l,u,mid=(l+u)/2,item,loc,r;
	cout<<"enter the no from which u want to search";
	cin>>n;
	cout<<"enter the numbers";
	for(int i=0;i<n;i++)
	{
	cin>>arr[i];
	}
	cout<<"enter the number u want to search ";
	cin>>item;
	r=binarysearch(arr,l,n-1,item,mid);
	 if(r==-1)
	  printf("Element is not present in array"); 
    else
			   printf("Element is present at index %d", r); 
    return 0; 
}*/
			//BINARY SEARCH USING RECURSION
int binarysearch(int arr[],int l,int u,int item)
{
	int mid;
	if(l<u)
	{
		mid=(l+u)/2;
		if(arr[mid]==item)
			return mid;
		if(arr[mid]<item)
			return(arr,mid+1,u,item);
		else
			return(arr,l,mid-1,item);
	}
return -1;	
}
int main()
{
	int arr[20],item,n,l,u,mid=(l+u)/2,r;
	cin>>n;
	cout<<"enter the elements ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the element u want to search ";
	cin>>item;
	r=binarysearch(arr,0,n-1,item);
	if(r==-1)
		cout<<"element not found ";
	else
		cout<<"element found at location %d "<<r;
	return 0;
}
	
	
