#include <iostream>
using namespace std;

int main() {
	string str;
	getline(cin,str);
	int len,c,sum=0;
	len=str.length();
	for(int i=0;i<len;i++)
	{
		c=int(str[i]);
		sum=sum+c;
		 
	}
	cout<<sum;
	
	
	return 0;
}
