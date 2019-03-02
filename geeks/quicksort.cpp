/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;



int swap(int &a, int &b)
{
    int temp;
    
    temp=a;
    a=b;
    b=temp;
    
}


int partition(vector<int> &a, int low, int high)
{
    int pivot=a[high];
    
    int i=low-1;
    for(int j=low;j<high;j++)
    {
        if(a[j]<=pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    
    swap(a[i+1],a[high]);
    return i+1;
    
}

void quicksort(vector<int> &a,int low, int high)
{
    int pi;
    if(low<high)
    {
        pi=partition(a,low,high);
        quicksort(a,low,pi-1);
        quicksort(a,pi+1,high);
    }
    
}




int main()
{
    vector<int> a;
    int n;
    cin>>n;
    a.resize(n);
    for(int i=0;i<a.size();i++)
    {
        cin>>a[i];
    }
    
    
    quicksort(a,0,a.size()-1);
    
    

    return 0;
}

