#include <iostream>
#include <vector>

using namespace std;

void mergesort(vector<int> &arr, int low, int middle, int high)
{
	vector<int> left;
	vector<int> right;

	int l=middle-low+1;
	int r=high-middle;
	int i,j,k;

	left.resize(l);
	right.resize(r);

	for(i=0;i<l;i++)
		left[i]=arr[low+i];

	for(j=0;j<r;j++)
		right[j]=arr[middle+1+j];

	i=0;
	j=0;
	k=low;
	while(i<l &&j<r)
	{
		if(left[i]<=right[j])
		{
			arr[k]=left[i];
			i++;
		}
		else
		{
			arr[k]=right[j];
			j++;
		}
		k++;
	}

	while(i<l)
	{
		arr[k]=left[i];
		i++;
		k++;
	}
	while(j<r)
	{
		arr[k]=right[j];
		j++;
		k++;
	}



}


void merge(vector<int> &arr,int left,int right)
{
	if(left<right)
	{
		int middle=left+(right-left)/2;

		merge(arr,left,middle);
		merge(arr,middle+1,right);

		mergesort(arr,left,middle,right);
	}

}

int main()
{
vector<int> arr;
int size;

cin>>size;
arr.resize(size);

for(int i=0;i<size;i++)
{
	cin>>arr[i];
}

merge(arr,0,arr.size()-1);

for(int i=0;i<size;i++)
{
	cout<<arr[i];
}



return 0;
}



