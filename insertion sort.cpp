#include <iostream>
#include<conio.h>
using namespace std;
void display(int arr[], int size)
{
	int i;
	for(i=0;i<size;i++)
	{
    	cout<<arr[i]<<" ";
	}
  cout<<endl;
}
// Function for sorting the elements
void insertionSort(int arr[],int size)
{
	int temp,j,i;
	for(i=0;i<size;i++)
	{
    	 temp=arr[i];
    	 j=i-1;  
    	while(temp<arr[j] && j >=0)
		{
      		arr[j+1] = arr[j];
      		j--;
    	}
    arr[j+1]=temp;
	}
}
// Main Function or Driver Function 
int main() {
	int n;
	cout<<"Enter size of array:";cin>>n;
	int i,a[n];
	for(i=0;i<n;i++)
	{
		cout<<"Enter a number:";
		cin>>a[i];
	}
	cout << "Elements before sorting:\n";
	display(a,n);
	insertionSort(a,n);
	cout << "Elements after sorting:\n";
	display(a,n);
	getch();
}
