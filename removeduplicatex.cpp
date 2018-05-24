#include <iostream>
using namespace std;

int main() {
	string str;
	char t;
	getline(cin,str);
	int len;
	len=str.length();
	int i=0;
	do{
	t=str[i];
	for(int j=0;j<i+1;j++)
	{
	if(t==str[i+1])
	 str[j]=' ';
	 i++;
	}
	}while(i<len);

	
		
	
	
	
	

	return 0;
}
