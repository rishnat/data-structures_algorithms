#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i=0;i<s.size()/2;i++)
        {
            char temp=s[i];
            s[i]=s[s.size()-i-1];
            s[s.size()-i-1]=temp;
        }
    }
};



int main()
{

	Solution sol;

	vector<char> str{'M','a','l','a','y','a','l','a','m'};

	cout<<"Before reverse:";
	for(int i=0;i<str.size();i++)
	{
		cout<<str[i];
	}
	cout<<endl;

	sol.reverseString(str);

	cout<<"After reverse:";
	for(int i=0;i<str.size();i++)
	{
		cout<<str[i];
	}
	cout<<endl;

	return 0;

}
